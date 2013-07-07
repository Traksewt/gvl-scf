<?php
/**
 * @file
 * scf_news.apachesolr_search_defaults.inc
 */

/**
 * Implements hook_apachesolr_search_default_searchers().
 */
function scf_news_apachesolr_search_default_searchers() {
  $export = array();

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'scf_news';
  $searcher->label = 'Search News';
  $searcher->description = '';
  $searcher->search_path = 'search/news';
  $searcher->page_title = 'News';
  $searcher->env_id = 'solr';
  $searcher->settings = array(
    'fq' => array(
      0 => 'bundle:scf_news',
    ),
    'apachesolr_search_custom_enable' => 1,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_search_box' => 1,
    'apachesolr_search_per_page' => '10',
    'apachesolr_search_browse' => 'blocks',
    'apachesolr_search_spellcheck' => 1,
    'apachesolr_search_allow_user_input' => 0,
  );
  $export['scf_news'] = $searcher;

  return $export;
}
