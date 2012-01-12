<?php

/**
 * Implementation of hook_views_default_views().
 */
function pcn_views_default_views() {
  $views = array();

  // Exported view: announcements
  $view = new view;
  $view->name = 'announcements';
  $view->description = 'List of announcements in the system';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'field_audio_body_ht_fid' => array(
      'id' => 'field_audio_body_ht_fid',
      'table' => 'node_data_field_audio_body_ht',
      'field' => 'field_audio_body_ht_fid',
    ),
    'field_audio_body_en_fid' => array(
      'id' => 'field_audio_body_en_fid',
      'table' => 'node_data_field_audio_body_en',
      'field' => 'field_audio_body_en_fid',
    ),
    'field_audio_body_pt_fid' => array(
      'id' => 'field_audio_body_pt_fid',
      'table' => 'node_data_field_audio_body_pt',
      'field' => 'field_audio_body_pt_fid',
    ),
    'field_audio_body_es_fid' => array(
      'id' => 'field_audio_body_es_fid',
      'table' => 'node_data_field_audio_body_es',
      'field' => 'field_audio_body_es_fid',
    ),
    'field_audio_title_ht_fid' => array(
      'id' => 'field_audio_title_ht_fid',
      'table' => 'node_data_field_audio_title_ht',
      'field' => 'field_audio_title_ht_fid',
    ),
    'field_audio_title_en_fid' => array(
      'id' => 'field_audio_title_en_fid',
      'table' => 'node_data_field_audio_title_en',
      'field' => 'field_audio_title_en_fid',
    ),
    'field_audio_title_pt_fid' => array(
      'id' => 'field_audio_title_pt_fid',
      'table' => 'node_data_field_audio_title_pt',
      'field' => 'field_audio_title_pt_fid',
    ),
    'field_audio_title_es_fid' => array(
      'id' => 'field_audio_title_es_fid',
      'table' => 'node_data_field_audio_title_es',
      'field' => 'field_audio_title_es_fid',
    ),
    'created' => array(
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
    ),
    'promote' => array(
      'id' => 'promote',
      'table' => 'node',
      'field' => 'promote',
    ),
    'edit_node' => array(
      'id' => 'edit_node',
      'table' => 'node',
      'field' => 'edit_node',
    ),
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
    ),
    'type' => array(
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
    ),
  ));
  $handler->override_option('sorts', array(
    'created' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'promote' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'promote',
      'table' => 'node',
      'field' => 'promote',
      'relationship' => 'none',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'announcement' => 'announcement',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      '5' => 5,
      '3' => 3,
      '4' => 4,
    ),
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'PCN Announcements');
  $handler->override_option('use_pager', '1');
  $handler->override_option('distinct', 1);
  $handler->override_option('row_plugin', 'node');
  $handler = $view->new_display('page', 'Announcements page', 'page_1');
  $handler->override_option('path', 'announcements');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Announcements list',
    'description' => 'List of all the announcements in the system',
    'weight' => '1',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
