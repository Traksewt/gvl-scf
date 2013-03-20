<?php
/**
 * @file
 * scf_protocols.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function scf_protocols_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scf_protocols';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'protocol' => 'protocol',
        'scf_protocol' => 'scf_protocol',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'protocols' => 'protocols',
        'protocols/*' => 'protocols/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'scf_nodeblock_export-scf_protocols_about_block' => array(
          'module' => 'scf_nodeblock_export',
          'delta' => 'scf_protocols_about_block',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'scf_search-section_search' => array(
          'module' => 'scf_search',
          'delta' => 'section_search',
          'region' => 'sidebar_second',
          'weight' => '-2',
        ),
      ),
    ),
    'menu' => 'protocols',
  );
  $context->condition_mode = 0;
  $export['scf_protocols'] = $context;

  return $export;
}
