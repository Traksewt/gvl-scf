<?php
/**
 * @file
 * scf_members.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function scf_members_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'member_comments';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Member Comments';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_414b273212f19f3fcf2ea1eafb3802d6',
      'hide_title' => 1,
      'title' => 'Recent',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'scf_members_delta_scf_members_most_active',
      'hide_title' => 1,
      'title' => 'Most Active Commentator',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Member Comments');
  t('Most Active Commentator');
  t('Recent');

  $export['member_comments'] = $quicktabs;

  return $export;
}
