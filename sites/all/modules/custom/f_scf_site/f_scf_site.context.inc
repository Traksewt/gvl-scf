<?php
/**
 * @file
 * f_scf_site.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function f_scf_site_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'f_scf_site';
  $context->description = 'context for v_scf feature. this feature contains settings which are not planned to be part of SCF, so they are left out of scf_common and scf_site';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'pubnode' => 'pubnode',
        'scf_book' => 'scf_book',
        'scf_chapter_new' => 'scf_chapter_new',
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
  t('context for v_scf feature. this feature contains settings which are not planned to be part of SCF, so they are left out of scf_common and scf_site');
  $export['f_scf_site'] = $context;

  return $export;
}
