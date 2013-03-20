<?php
/**
 * @file
 * scf_common.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function scf_common_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scf_homepage';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-scf_news-block_1' => array(
          'module' => 'views',
          'delta' => 'scf_news-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-cf8db2583d8e553b315c14ae5905fb86' => array(
          'module' => 'views',
          'delta' => 'cf8db2583d8e553b315c14ae5905fb86',
          'region' => 'header_first',
          'weight' => '-10',
        ),
        'views-scf_forums-block_1' => array(
          'module' => 'views',
          'delta' => 'scf_forums-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-scf_protocols_view-block_1' => array(
          'module' => 'views',
          'delta' => 'scf_protocols_view-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-book_chapters-block_1' => array(
          'module' => 'views',
          'delta' => 'book_chapters-block_1',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-scf_most_popular-block_1' => array(
          'module' => 'views',
          'delta' => 'scf_most_popular-block_1',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'scf_homepage_template',
    ),
  );
  $context->condition_mode = 0;
  $export['scf_homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scf_sitewide';
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
        'stembook_site-user_top_menu' => array(
          'module' => 'stembook_site',
          'delta' => 'user_top_menu',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'masquerade-masquerade' => array(
          'module' => 'masquerade',
          'delta' => 'masquerade',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'scf_nodeblock_export-scf_common_copyright_block' => array(
          'module' => 'scf_nodeblock_export',
          'delta' => 'scf_common_copyright_block',
          'region' => 'footer_first',
          'weight' => '1',
        ),
        'scf_nodeblock_export-scf_common_collaborators_block' => array(
          'module' => 'scf_nodeblock_export',
          'delta' => 'scf_common_collaborators_block',
          'region' => 'footer_first',
          'weight' => '2',
        ),
        'scf_nodeblock_export-scf_common_license_block' => array(
          'module' => 'scf_nodeblock_export',
          'delta' => 'scf_common_license_block',
          'region' => 'footer_first',
          'weight' => '3',
        ),
        'nice_menus-1' => array(
          'module' => 'nice_menus',
          'delta' => '1',
          'region' => 'menu',
          'weight' => '-22',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['scf_sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scf_sitewide_non_homepage';
  $context->description = 'Used primarily for the main menu block on the left bar displayed everywhere except on the homepage';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-scf_main_menu_block' => array(
          'module' => 'menu_block',
          'delta' => 'scf_main_menu_block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Used primarily for the main menu block on the left bar displayed everywhere except on the homepage');
  $export['scf_sitewide_non_homepage'] = $context;

  return $export;
}
