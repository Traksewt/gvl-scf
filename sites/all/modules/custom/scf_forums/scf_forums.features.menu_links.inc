<?php
/**
 * @file
 * scf_forums.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function scf_forums_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:forums
  $menu_links['main-menu:forums'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forums',
    'router_path' => 'forums',
    'link_title' => 'Forums',
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
    'weight' => '-47',
  );
  // Exported menu link: main-menu:forums/scf_discussion
  $menu_links['main-menu:forums/scf_discussion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forums/scf_discussion',
    'router_path' => 'forums',
    'link_title' => 'Discussions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'forums',
  );
  // Exported menu link: main-menu:forums/scf_webinar
  $menu_links['main-menu:forums/scf_webinar'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forums/scf_webinar',
    'router_path' => 'forums',
    'link_title' => 'Webinars',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'forums',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Discussions');
  t('Forums');
  t('Webinars');


  return $menu_links;
}
