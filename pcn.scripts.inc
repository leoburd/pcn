<?php


/**
 * Implementation of hook_voipscript_get_script_names()
 */
function pcn_voipscript_get_script_names() {
  $script_names[] = 'pcn_welcome_script';
  $script_names[] = 'pcn_options_script';
  $script_names[] = 'pcn_play_announcements_script';
  $script_names[] = 'pcn_record_message_script';
  return $script_names;
}

/**
 * Implementation of hook_voipscript_load_script()
 */
function pcn_voipscript_load_script($script_name, $options=NULL) {

  //require_once(dirname(__FILE__) . DIRECTORY_SEPARATOR . 'pcn.prompts.inc');

  $script = NULL;
  switch($script_name) {
    default:
      break;

    case 'pcn_welcome_script':
      $options['language'] = 'en';
      $options['voice'] = 'pcn';
      $voipvoice = VoipVoice::getVoice('pcn');
      voipvoice_set_current_voice($voipvoice);
      
      $script = new VoipScript('pcn_welcome_script');
      $script->addSetVoice('woman');
      $script->addSet('max_session_duration', 0);

      // log the call
      $log_msg = t("Call from %caller_number on @date (id: %call_id)",
          array('@date' => format_date(time())));
      $script->addLog($log_msg, 'MDT');

      $script->addSay(v('Welcome to the Parent Connectors Hotline.'));

      $script->addLabel('language_selection');
      
      
      $p_main_menu = v('For English, press 1. For Spanish, press 2. For Portuguese, press 3. For Creole, press 4. ');
      $input_options = array(
        '1' => 'english_version',
        '2' => 'spanish_version',
        '3' => 'portuguese_version',
        '4' => 'creole_version',
        '#' => 'invalid_option',
        'i' => 'invalid_option',
        't' => 'invalid_option'
      );
      $p_invalid_msg = v('Invalid option selected');
      $script->addRunIvrMenu($p_main_menu, $input_options, $p_invalid_msg);
      $script->addGoto('%ivr_option_selected');

      $script->addLabel('english_version');
      $script->addGosub('pcn_options_script', $options);
      $script->addGoto('hang_up');

      $script->addLabel('spanish_version');
      $options['language'] = 'es';
      $options['voice'] = 'pcn-spanish';
      $script->addGosub('pcn_options_script', $options);
      $script->addGoto('hang_up');

      $script->addLabel('portuguese_version');
      $options['language'] = 'pt';
      $options['voice'] = 'pcn-portuguese';
      $script->addGosub('pcn_options_script', $options);
      $script->addGoto('hang_up');

      $script->addLabel('creole_version');
      $options['language'] = 'ht';
      $options['voice'] = 'pcn-creole';
      $script->addGosub('pcn_options_script', $options);
      $script->addGoto('hang_up');

      $script->addLabel('invalid_option');
      $script->addGoto('hang_up');

      $script->addLabel('hang_up');
      $script->addHangup();
      break;

    case 'pcn_options_script':
      $script = new VoipScript('pcn_options_script');
      //$language = $options['language'];
      $voice = $options['voice'];
      $voipvoice = VoipVoice::getVoice($voice);
      voipvoice_set_current_voice($voipvoice);

      $script->addLabel('main_menu');
      $p_options_menu = v('Main menu. To listen to the latest announcements, press 1. To record a message or a question to the Parent Connectors, press the star key. ');
      
      $input_options = array(
        '1' => 'play_announcements',
        '*' => 'record_message',
        '#' => 'go_back',
        'i' => 'invalid_option',
        't' => 'invalid_option'
      );
      $p_invalid_msg = v('Invalid option selected');
      $script->addRunIvrMenu($p_options_menu, $input_options, $p_invalid_msg);
      $script->addGoto('%ivr_option_selected');

      $script->addLabel('play_announcements');
      $script->addGosub('pcn_play_announcements_script', $options);
      $script->addGoto('main_menu');

      $script->addLabel('record_message');
      $script->addGosub('pcn_record_message_script', $options);
      $script->addGoto('main_menu');

      $script->addLabel('invalid_option');
      $script->addGoto('go_back');

      $script->addLabel('go_back');
      $script->addSay(v('Thank you for calling the Parent Connectors hotline. '));
      $script->addReturn();
      break;

    case 'pcn_play_announcements_script':
      $script = new VoipScript('pcn_play_announcements_script');
      $language = $options['language'];
      $voice = $options['voice'];
      //TODO:
      $announcements = _pcn_get_announcements($language);
      if(!$announcements) {
        $script->addSay(v('There are no announcements at this time. '));
      }
      else {
        $script->addSay(v('During playback, press any key to go to the announcements menu. '));
        foreach($announcements as $index => $announcement) {
          $title = $announcement['title'];
          if(!$title) {
            $options = array('@nid' => $announcement['nid'], '@lang' => $language);
            $text = 'Translation for node @nid in @lang could not be found.';
            watchdog('pcn', $text, $options, WATCHDOG_WARNING);
            continue;
          }
          $body = $announcement['body'];
          $changed = $announcement['changed'];
          $current = "announcement_$index";
          $current_body = "body_$index";
          $next = 'announcement_' . ($index+1);
          $script->addLabel($current);
          $script->addSay($title);
          $p_options_menu = v('To play the current announcement, press 1. To go to the next announcement, press 2. To go back to the main menu, press the pound key. ');
          $input_options = array(
            '1' => $current_body,
            '2' => $next, 
            '#' => 'go_back',
            'i' => 'invalid_option',
            't' => 'invalid_option'
          );
          $p_invalid_msg = v('Invalid option selected');
          $script->addRunIvrMenu($p_options_menu, $input_options, $p_invalid_msg);
          $script->addGoto('%ivr_option_selected');

          $script->addLabel($current_body);
          $script->addGetInput($body, 1, '#', 3);
          $script->addGoto($current); 
        }
      }

      $no_more = count($announcements);
      $script->addLabel("announcement_$no_more");
      $script->addSay(v('No more announcements to be played. '));
      $script->addGoto('go_back');

      $script->addLabel('invalid_option');
      $script->addGoto('go_back');

      $script->addLabel('go_back');
      $script->addReturn();
      break;

    case 'pcn_record_message_script':
      $script = new VoipScript('pcn_record_message_script');
$script->addSay('This is where the message is going to be recorded.');
      $script->addReturn();
      break;

  }

  return $script;
}


/**
 * Internal functions
 */

function _pcn_get_announcements($language) {
  $announcements = array();

  $sql = "SELECT n.nid AS nid FROM {node} n WHERE (n.type = 'announcement') AND (n.status <> 0) AND (n.promote <> 0) ORDER BY n.changed DESC";
  $result = db_query($sql);
  // the following code assumes that there will be only one announcement promoted at a time
  while($o = db_fetch_object($result)) {
    $n = node_load($o->nid);
    $announcement['nid'] = $n->nid;
    $announcement['changed'] = $n->changed;
    $field_audio_title_name = 'field_audio_title_' . $language;
    $field_audio_title = $n->$field_audio_title_name;
    if($field_audio_title[0]) {
      $audio_title_url = url($field_audio_title[0]['filepath'], array('absolute' => TRUE));
      $announcement['title'] = $audio_title_url;
    }
    $field_audio_body_name = 'field_audio_body_' . $language;
    $field_audio_body = $n->$field_audio_body_name;
    if($field_audio_body[0]) {
      $audio_body_url = url($field_audio_body[0]['filepath'], array('absolute' => TRUE));
      $announcement['body'] = $audio_body_url;
    }
    $announcements[] = $announcement;
  }

  return $announcements;
}

