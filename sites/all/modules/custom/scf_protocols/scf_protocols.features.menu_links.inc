<?php
/**
 * @file
 * scf_protocols.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function scf_protocols_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:protocols
  $menu_links['main-menu:protocols'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'protocols',
    'router_path' => 'protocols',
    'link_title' => 'Protocols',
    'options' => array(
      'attributes' => array(
        'title' => 'SCF Protocols',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Protocols');


  return $menu_links;
}
