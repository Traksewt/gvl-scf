<?php
/**
 * @file
 * scf_dev_content.features.uuid_menu_links.inc
 */

/**
 * Implements hook_uuid_menu_default_menu_links().
 */
function scf_dev_content_uuid_menu_default_menu_links() {
  $uuid_menu_links = array();

  // Exported menu link: main-menu:node/50983ef4-be18-4049-983f-26ddc1d414b2
  $uuid_menu_links['main-menu:node/50983ef4-be18-4049-983f-26ddc1d414b2'] = array(
    'router_path' => 'node/%',
    'link_title' => 'Journal Stream',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'uuid_link_path' => 'node/50983ef4-be18-4049-983f-26ddc1d414b2',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: main-menu:node/b45bba47-39c9-4ba0-89a2-406f48292660
  $uuid_menu_links['main-menu:node/b45bba47-39c9-4ba0-89a2-406f48292660'] = array(
    'router_path' => 'node/%',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => 'Useful Links',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'uuid_link_path' => 'node/b45bba47-39c9-4ba0-89a2-406f48292660',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => NULL,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Journal Stream');
  t('Resources');


  return $uuid_menu_links;
}
