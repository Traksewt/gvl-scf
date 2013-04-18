<?php
/**
 * @file
 * scf_site.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function scf_site_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scf_pages';
  $context->description = 'Information pages like About us';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
        'credits' => 'credits',
        'ealerts' => 'ealerts',
        'contributor-info' => 'contributor-info',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-book_chapters-block_1' => array(
          'module' => 'views',
          'delta' => 'book_chapters-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-scf_news-block_2' => array(
          'module' => 'views',
          'delta' => 'scf_news-block_2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Information pages like About us');
  $export['scf_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scf_resources';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resources' => 'resources',
        'resources/*' => 'resources/*',
        'user/*' => 'user/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-book_chapters-block_1' => array(
          'module' => 'views',
          'delta' => 'book_chapters-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-scf_news-block_2' => array(
          'module' => 'views',
          'delta' => 'scf_news-block_2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['scf_resources'] = $context;

  return $export;
}
