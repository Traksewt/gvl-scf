<?php
/**
 * @file
 * scf_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function scf_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scf_search';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-vqQeCVguSf10j0YCPxUJlI0wMToBXs2K' => array(
          'module' => 'facetapi',
          'delta' => 'vqQeCVguSf10j0YCPxUJlI0wMToBXs2K',
          'region' => 'sidebar_first',
          'weight' => '-29',
        ),
        'facetapi-Zjjb7dC3dovHYvatmMj67Li8CrsbT0Ee' => array(
          'module' => 'facetapi',
          'delta' => 'Zjjb7dC3dovHYvatmMj67Li8CrsbT0Ee',
          'region' => 'sidebar_first',
          'weight' => '-29',
        ),
        'facetapi-n18E4x0qRRaIP7nV6I0SDYiCJsq77HCB' => array(
          'module' => 'facetapi',
          'delta' => 'n18E4x0qRRaIP7nV6I0SDYiCJsq77HCB',
          'region' => 'sidebar_first',
          'weight' => '-29',
        ),
        'facetapi-GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu' => array(
          'module' => 'facetapi',
          'delta' => 'GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu',
          'region' => 'sidebar_first',
          'weight' => '-29',
        ),
        'views-scf_news-block_2' => array(
          'module' => 'views',
          'delta' => 'scf_news-block_2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-book_chapters-block_1' => array(
          'module' => 'views',
          'delta' => 'book_chapters-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['scf_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scf_search_sitewide';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'menu',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['scf_search_sitewide'] = $context;

  return $export;
}
