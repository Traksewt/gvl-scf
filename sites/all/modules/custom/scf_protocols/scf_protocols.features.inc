<?php
/**
 * @file
 * scf_protocols.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function scf_protocols_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function scf_protocols_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function scf_protocols_node_info() {
  $items = array(
    'scf_protocol' => array(
      'name' => t('User submitted protocol'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
