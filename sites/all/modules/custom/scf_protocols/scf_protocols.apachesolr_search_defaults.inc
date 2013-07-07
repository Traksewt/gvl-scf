<?php
/**
 * @file
 * scf_protocols.apachesolr_search_defaults.inc
 */

/**
 * Implements hook_apachesolr_search_default_searchers().
 */
function scf_protocols_apachesolr_search_default_searchers() {
  $export = array();

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'scf_protocols';
  $searcher->label = 'Search Protocols';
  $searcher->description = '';
  $searcher->search_path = 'search/protocols';
  $searcher->page_title = 'Protocols';
  $searcher->env_id = 'solr';
  $searcher->settings = array(
    'fq' => array(
      0 => 'bundle:(scf_protocol OR protocol)',
    ),
    'apachesolr_search_custom_enable' => 1,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_search_box' => 1,
    'apachesolr_search_per_page' => '10',
    'apachesolr_search_browse' => 'blocks',
    'apachesolr_search_spellcheck' => 1,
    'apachesolr_search_allow_user_input' => 0,
  );
  $export['scf_protocols'] = $searcher;

  return $export;
}
