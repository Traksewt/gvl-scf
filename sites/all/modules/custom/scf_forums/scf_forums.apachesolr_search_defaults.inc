<?php
/**
 * @file
 * scf_forums.apachesolr_search_defaults.inc
 */

/**
 * Implements hook_apachesolr_search_default_searchers().
 */
function scf_forums_apachesolr_search_default_searchers() {
  $export = array();

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'scf_forums';
  $searcher->label = 'Search Forums';
  $searcher->description = '';
  $searcher->search_path = 'search/forums';
  $searcher->page_title = 'Forums';
  $searcher->env_id = 'solr';
  $searcher->settings = array(
    'fq' => array(
      0 => 'bundle:(scf_discussion OR scf_webinar)',
    ),
    'apachesolr_search_custom_enable' => 1,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_search_box' => 1,
    'apachesolr_search_per_page' => '10',
    'apachesolr_search_browse' => 'blocks',
    'apachesolr_search_spellcheck' => 1,
    'apachesolr_search_allow_user_input' => 0,
  );
  $export['scf_forums'] = $searcher;

  return $export;
}
