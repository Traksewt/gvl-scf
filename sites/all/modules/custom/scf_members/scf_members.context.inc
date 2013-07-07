<?php
/**
 * @file
 * scf_members.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function scf_members_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scf_members_global';
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
        'scf_members-scf_members_user_top_menu' => array(
          'module' => 'scf_members',
          'delta' => 'scf_members_user_top_menu',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'menu-menu-menu-utility-navigation' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-utility-navigation',
          'region' => 'branding',
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
  $export['scf_members_global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scf_members_members';
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
        'scf_members-scf_members_account_management' => array(
          'module' => 'scf_members',
          'delta' => 'scf_members_account_management',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'scf_members-scf_members_user_welcome' => array(
          'module' => 'scf_members',
          'delta' => 'scf_members_user_welcome',
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
  $export['scf_members_members'] = $context;

  return $export;
}
