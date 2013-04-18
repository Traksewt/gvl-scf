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
  // Exported menu link: main-menu:protocols/cell-imaging
  $menu_links['main-menu:protocols/cell-imaging'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'protocols/cell-imaging',
    'router_path' => 'protocols',
    'link_title' => 'Cell Imaging',
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
    'parent_path' => 'protocols',
  );
  // Exported menu link: main-menu:protocols/ectoderm
  $menu_links['main-menu:protocols/ectoderm'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'protocols/ectoderm',
    'router_path' => 'protocols',
    'link_title' => 'Ectoderm',
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
    'parent_path' => 'protocols',
  );
  // Exported menu link: main-menu:protocols/endoderm
  $menu_links['main-menu:protocols/endoderm'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'protocols/endoderm',
    'router_path' => 'protocols',
    'link_title' => 'Endoderm',
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
    'parent_path' => 'protocols',
  );
  // Exported menu link: main-menu:protocols/engineering
  $menu_links['main-menu:protocols/engineering'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'protocols/engineering',
    'router_path' => 'protocols',
    'link_title' => 'Engineering',
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
    'weight' => '-43',
    'parent_path' => 'protocols',
  );
  // Exported menu link: main-menu:protocols/mesoderm
  $menu_links['main-menu:protocols/mesoderm'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'protocols/mesoderm',
    'router_path' => 'protocols',
    'link_title' => 'Mesoderm',
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
    'weight' => '-46',
    'parent_path' => 'protocols',
  );
  // Exported menu link: main-menu:protocols/pluripotent-cells
  $menu_links['main-menu:protocols/pluripotent-cells'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'protocols/pluripotent-cells',
    'router_path' => 'protocols',
    'link_title' => 'Pluripotent Cells',
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
    'parent_path' => 'protocols',
  );
  // Exported menu link: main-menu:protocols/reprogramming
  $menu_links['main-menu:protocols/reprogramming'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'protocols/reprogramming',
    'router_path' => 'protocols',
    'link_title' => 'Reprogramming',
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
    'parent_path' => 'protocols',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Cell Imaging');
  t('Ectoderm');
  t('Endoderm');
  t('Engineering');
  t('Mesoderm');
  t('Pluripotent Cells');
  t('Protocols');
  t('Reprogramming');


  return $menu_links;
}
