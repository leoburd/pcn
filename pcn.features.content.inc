<?php

/**
 * Implementation of hook_content_default_fields().
 */
function pcn_content_default_fields() {
  $fields = array();

  // Exported field: field_audio_body_en
  $fields['announcement-field_audio_body_en'] = array(
    'field_name' => 'field_audio_body_en',
    'type_name' => 'announcement',
    'display_settings' => array(
      'weight' => '32',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'mp3 wav',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'phonerecorderfield_number' => array(
        'type' => 'type',
      ),
      'phonerecorderfield_script' => 'phonerecorderfield_default',
      'phonerecorderfield_text' => 'Record audio by having system call you on this number',
      'filefield_sources' => array(
        'recorder' => 'recorder',
        'phonerecorder' => 'phonerecorder',
        'remote' => 0,
        'reference' => 0,
        'attach' => 0,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'label' => 'Audio body (English)',
      'weight' => '32',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_audio_body_es
  $fields['announcement-field_audio_body_es'] = array(
    'field_name' => 'field_audio_body_es',
    'type_name' => 'announcement',
    'display_settings' => array(
      'weight' => '34',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'mp3 wav',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'phonerecorderfield_number' => array(
        'type' => 'type',
      ),
      'phonerecorderfield_script' => 'phonerecorderfield_default',
      'phonerecorderfield_text' => 'Record audio by having system call you on this number',
      'filefield_sources' => array(
        'recorder' => 'recorder',
        'phonerecorder' => 'phonerecorder',
        'remote' => 0,
        'reference' => 0,
        'attach' => 0,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'label' => 'Audio body (Spanish)',
      'weight' => '34',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_audio_body_ht
  $fields['announcement-field_audio_body_ht'] = array(
    'field_name' => 'field_audio_body_ht',
    'type_name' => 'announcement',
    'display_settings' => array(
      'weight' => '38',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'mp3 wav',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'phonerecorderfield_number' => array(
        'type' => 'type',
      ),
      'phonerecorderfield_script' => 'phonerecorderfield_default',
      'phonerecorderfield_text' => 'Record audio by having system call you on this number',
      'filefield_sources' => array(
        'recorder' => 'recorder',
        'phonerecorder' => 'phonerecorder',
        'remote' => 0,
        'reference' => 0,
        'attach' => 0,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'label' => 'Audio body (Creole)',
      'weight' => '38',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_audio_body_pt
  $fields['announcement-field_audio_body_pt'] = array(
    'field_name' => 'field_audio_body_pt',
    'type_name' => 'announcement',
    'display_settings' => array(
      'weight' => '36',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'mp3 wav',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'phonerecorderfield_number' => array(
        'type' => 'type',
      ),
      'phonerecorderfield_script' => 'phonerecorderfield_default',
      'phonerecorderfield_text' => 'Record audio by having system call you on this number',
      'filefield_sources' => array(
        'recorder' => 'recorder',
        'phonerecorder' => 'phonerecorder',
        'remote' => 0,
        'reference' => 0,
        'attach' => 0,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'label' => 'Audio body (Portuguese)',
      'weight' => '36',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_audio_title_en
  $fields['announcement-field_audio_title_en'] = array(
    'field_name' => 'field_audio_title_en',
    'type_name' => 'announcement',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'mp3 wav',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'phonerecorderfield_number' => array(
        'type' => 'type',
      ),
      'phonerecorderfield_script' => 'phonerecorderfield_default',
      'phonerecorderfield_text' => 'Record audio by having system call you on this number',
      'filefield_sources' => array(
        'recorder' => 'recorder',
        'phonerecorder' => 'phonerecorder',
        'remote' => 0,
        'reference' => 0,
        'attach' => 0,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'label' => 'Audio title (English)',
      'weight' => '31',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_audio_title_es
  $fields['announcement-field_audio_title_es'] = array(
    'field_name' => 'field_audio_title_es',
    'type_name' => 'announcement',
    'display_settings' => array(
      'weight' => '33',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'mp3 wav',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'phonerecorderfield_number' => array(
        'type' => 'type',
      ),
      'phonerecorderfield_script' => 'phonerecorderfield_default',
      'phonerecorderfield_text' => 'Record audio by having system call you on this number',
      'filefield_sources' => array(
        'recorder' => 'recorder',
        'phonerecorder' => 'phonerecorder',
        'remote' => 0,
        'reference' => 0,
        'attach' => 0,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'label' => 'Audio title (Spanish)',
      'weight' => '33',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_audio_title_ht
  $fields['announcement-field_audio_title_ht'] = array(
    'field_name' => 'field_audio_title_ht',
    'type_name' => 'announcement',
    'display_settings' => array(
      'weight' => '37',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'mp3 wav',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'phonerecorderfield_number' => array(
        'type' => 'type',
      ),
      'phonerecorderfield_script' => 'phonerecorderfield_default',
      'phonerecorderfield_text' => 'Record audio by having system call you on this number',
      'filefield_sources' => array(
        'recorder' => 'recorder',
        'phonerecorder' => 'phonerecorder',
        'remote' => 0,
        'reference' => 0,
        'attach' => 0,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'label' => 'Audio title (Creole)',
      'weight' => '37',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_audio_title_pt
  $fields['announcement-field_audio_title_pt'] = array(
    'field_name' => 'field_audio_title_pt',
    'type_name' => 'announcement',
    'display_settings' => array(
      'weight' => '35',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'mp3 wav',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'phonerecorderfield_number' => array(
        'type' => 'type',
      ),
      'phonerecorderfield_script' => 'phonerecorderfield_default',
      'phonerecorderfield_text' => 'Record audio by having system call you on this number',
      'filefield_sources' => array(
        'recorder' => 'recorder',
        'phonerecorder' => 'phonerecorder',
        'remote' => 0,
        'reference' => 0,
        'attach' => 0,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '0',
      'label' => 'Audio title (Portuguese)',
      'weight' => '35',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Audio body (Creole)');
  t('Audio body (English)');
  t('Audio body (Portuguese)');
  t('Audio body (Spanish)');
  t('Audio title (Creole)');
  t('Audio title (English)');
  t('Audio title (Portuguese)');
  t('Audio title (Spanish)');

  return $fields;
}
