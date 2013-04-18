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
  // Exported menu link: main-menu:node/387
  $menu_links['main-menu:node/387'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/387',
    'router_path' => 'node/%',
    'link_title' => 'Epigenetics',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'chapters',
  );
  // Exported menu link: main-menu:node/391
  $menu_links['main-menu:node/391'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/391',
    'router_path' => 'node/%',
    'link_title' => 'Renewal',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'chapters',
  );
  // Exported menu link: main-menu:node/392
  $menu_links['main-menu:node/392'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/392',
    'router_path' => 'node/%',
    'link_title' => 'Niche biology, homing, and migration',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'chapters',
  );
  // Exported menu link: main-menu:node/393
  $menu_links['main-menu:node/393'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/393',
    'router_path' => 'node/%',
    'link_title' => 'Ectoderm specification and differentiation',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'chapters',
  );
  // Exported menu link: main-menu:node/394
  $menu_links['main-menu:node/394'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/394',
    'router_path' => 'node/%',
    'link_title' => 'Mesoderm specification and differentiation',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'chapters',
  );
  // Exported menu link: main-menu:node/395
  $menu_links['main-menu:node/395'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/395',
    'router_path' => 'node/%',
    'link_title' => 'Endoderm specification and differentiation',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'chapters',
  );
  // Exported menu link: main-menu:node/396
  $menu_links['main-menu:node/396'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/396',
    'router_path' => 'node/%',
    'link_title' => 'Tissue engineering',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'chapters',
  );
  // Exported menu link: main-menu:node/397
  $menu_links['main-menu:node/397'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/397',
    'router_path' => 'node/%',
    'link_title' => 'Stem cell immunology',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'chapters',
  );
  // Exported menu link: main-menu:node/398
  $menu_links['main-menu:node/398'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/398',
    'router_path' => 'node/%',
    'link_title' => 'Cellular and nuclear reprogramming',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'chapters',
  );
  // Exported menu link: main-menu:node/399
  $menu_links['main-menu:node/399'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/399',
    'router_path' => 'node/%',
    'link_title' => 'Therapeutic prospects',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'chapters',
  );
  // Exported menu link: main-menu:node/412
  $menu_links['main-menu:node/412'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/412',
    'router_path' => 'node/%',
    'link_title' => 'Germ cell and somatic stem cell biology in reproduction',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'chapters',
  );
  // Exported menu link: main-menu:node/488
  $menu_links['main-menu:node/488'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/488',
    'router_path' => 'node/%',
    'link_title' => 'Genomics and proteomics',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'chapters',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Cellular and nuclear reprogramming');
  t('Ectoderm specification and differentiation');
  t('Endoderm specification and differentiation');
  t('Epigenetics');
  t('Genomics and proteomics');
  t('Germ cell and somatic stem cell biology in reproduction');
  t('Mesoderm specification and differentiation');
  t('Niche biology, homing, and migration');
  t('Renewal');
  t('Review Chapters');
  t('Stem cell immunology');
  t('Therapeutic prospects');
  t('Tissue engineering');


  return $menu_links;
}
