<?php
/**
 * @file
 * f_stembook.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_stembook_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'f_stembook';
  $context->description = 'context for v_stembook feature. this feature contains settings which are not planned to be part of SCF, so they are left out of scf_common and stembook_site';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'pubnode' => 'pubnode',
        'stembook_book' => 'stembook_book',
        'stembook_chapter_new' => 'stembook_chapter_new',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'chapters' => 'chapters',
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
    'menu' => 'chapters',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('context for v_stembook feature. this feature contains settings which are not planned to be part of SCF, so they are left out of scf_common and stembook_site');
  $export['f_stembook'] = $context;

  return $export;
}
