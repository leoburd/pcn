<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function pcn_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:announcements
  $menu_links['navigation:announcements'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'announcements',
    'router_path' => 'announcements',
    'link_title' => 'Announcements list',
    'options' => array(
      'attributes' => array(
        'title' => 'List of all the announcements in the system',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Announcements list');


  return $menu_links;
}
