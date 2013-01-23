<?php
/**
 * @file
 * scf_forums.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function scf_forums_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scf_forums';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'scf_discussion' => 'scf_discussion',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'forums' => 'forums',
        'forums/*' => 'forums/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'scf_nodeblock_export-scf_content_search_placeholder' => array(
          'module' => 'scf_nodeblock_export',
          'delta' => 'scf_content_search_placeholder',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'menu' => 'forums',
  );
  $context->condition_mode = 0;
  $export['scf_forums'] = $context;

  return $export;
}
