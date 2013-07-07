<?php
/**
 * @file
 * scf_news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function scf_news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:news
  $menu_links['main-menu:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News & Commentaries',
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
    'weight' => '-46',
  );
  // Exported menu link: main-menu:news/latest-news
  $menu_links['main-menu:news/latest-news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news/latest-news',
    'router_path' => 'news',
    'link_title' => 'Latest News',
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
    'weight' => '-48',
    'parent_path' => 'news',
  );
  // Exported menu link: main-menu:news/protocols
  $menu_links['main-menu:news/protocols'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news/protocols',
    'router_path' => 'news',
    'link_title' => 'Protocols',
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
    'parent_path' => 'news',
  );
  // Exported menu link: main-menu:news/research
  $menu_links['main-menu:news/research'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news/research',
    'router_path' => 'news',
    'link_title' => 'Research',
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
    'weight' => '-47',
    'parent_path' => 'news',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Latest News');
  t('News & Commentaries');
  t('Protocols');
  t('Research');


  return $menu_links;
}
