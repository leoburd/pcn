<?php

/**
 * Implementation of hook_node_info().
 */
function pcn_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('PCN Announcement'),
      'module' => 'features',
      'description' => t('An audio announcement from the Parent Connectors Network (PCN).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('Please record or upload your audio announcement below.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function pcn_views_api() {
  return array(
    'api' => '2',
  );
}
