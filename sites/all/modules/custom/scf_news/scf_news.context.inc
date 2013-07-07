<?php
/**
 * @file
 * scf_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function scf_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scf_news';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'scf_news' => 'scf_news',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'news' => 'news',
        'news/*' => 'news/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'scf_search-section_search' => array(
          'module' => 'scf_search',
          'delta' => 'section_search',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => 'news',
  );
  $context->condition_mode = 0;
  $export['scf_news'] = $context;

  return $export;
}
