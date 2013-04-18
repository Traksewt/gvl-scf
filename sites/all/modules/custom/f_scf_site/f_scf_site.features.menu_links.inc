<?php
/**
 * @file
 * f_scf_site.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_scf_site_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:chapters
  $menu_links['main-menu:chapters'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'chapters',
    'router_path' => 'chapters',
    'link_title' => 'Review Chapters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Review Chapters');


  return $menu_links;
}
