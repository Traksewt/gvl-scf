<?php
/**
 * @file
 * stembook_site.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function stembook_site_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link:
  // This is a hack to force feature to create a top parent link item that will
  // contain the node/384 as first child and the directory as second child item.
  $menu_links['main-menu:node/384-top-menu-link'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/384/top-menu-link',
    'router_path' => 'node/%',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => 'Resources',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:node/382
  $menu_links['main-menu:node/382'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/382',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => 'About StemBook',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:node/383
  $menu_links['main-menu:node/383'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/383',
    'router_path' => 'node/%',
    'link_title' => 'Contributor Info',
    'options' => array(
      'attributes' => array(
        'title' => 'Contributor Info',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'node/382',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:node/384
  $menu_links['main-menu:node/384'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/384',
    'router_path' => 'node/%',
    'link_title' => 'Useful Links',
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
    'weight' => '-50',
    'parent_path' => 'node/384/top-menu-link',
  );
  // Exported menu link: main-menu:node/712
  $menu_links['main-menu:node/712'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/712',
    'router_path' => 'node/%',
    'link_title' => 'E-Alerts',
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
    'weight' => '-44',
    'parent_path' => 'node/382',
  );
  // Exported menu link: main-menu:node/750
  $menu_links['main-menu:node/750'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/750',
    'router_path' => 'node/%',
    'link_title' => 'Image Credits',
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
    'weight' => '-50',
    'parent_path' => 'node/382',
  );
  // Exported menu link: main-menu:resources/directory
  $menu_links['main-menu:resources/directory'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/directory',
    'router_path' => 'resources/directory',
    'link_title' => 'Directory',
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
    'weight' => '-49',
    'parent_path' => 'node/384/top-menu-link',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Contributor Info');
  t('Directory');
  t('E-Alerts');
  t('Image Credits');
  t('Useful Links');


  return $menu_links;
}
