<?php
/**
 * @file
 * scf_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function scf_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_search_facet_pages' => '',
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'biblio',
      1 => 'protocol',
      2 => 'pubnode',
      3 => 'scf_discussion',
      4 => 'scf_news',
      5 => 'scf_protocol',
      6 => 'stembook_chapter_new',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
