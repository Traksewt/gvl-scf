<?php
/**
 * @file
 * scfmembers.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function scfmembers_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scfmembers_global';
  $context->description = 'context always valid for display of the top user menu';
  $context->tag = 'section';
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
        'scfmembers-scfmembers_user_top_menu' => array(
          'module' => 'scfmembers',
          'delta' => 'scfmembers_user_top_menu',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'menu-menu-menu-utility-navigation' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-utility-navigation',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'msdfsite-msdfsite_addtoany' => array(
          'module' => 'msdfsite',
          'delta' => 'msdfsite_addtoany',
          'region' => 'menu',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('context always valid for display of the top user menu');
  t('section');
  $export['scfmembers_global'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scfmembers_members';
  $context->description = 'SCF Members section';
  $context->tag = 'section';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user' => 'user',
        'user/*' => 'user/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'scfmembers-scfmembers_account_management' => array(
          'module' => 'scfmembers',
          'delta' => 'scfmembers_account_management',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'scfmembers-scfmembers_user_welcome' => array(
          'module' => 'scfmembers',
          'delta' => 'scfmembers_user_welcome',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'context_magic_menus' => array(
      'magic_menus' => 1,
    ),
    'menu' => 'professional-resources',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('SCF Members section');
  t('section');
  $export['scfmembers_members'] = $context;

  return $export;
}
