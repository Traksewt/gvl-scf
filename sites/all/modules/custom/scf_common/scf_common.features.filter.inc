<?php
/**
 * @file
 * scf_common.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function scf_common_filter_default_formats() {
  $formats = array();

  // Exported format: SCF WYSIWYG filter.
  $formats['scf_wysiwyg_filter'] = array(
    'format' => 'scf_wysiwyg_filter',
    'name' => 'SCF WYSIWYG filter',
    'cache' => '1',
    'status' => '1',
    'weight' => '-3',
    'filters' => array(
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_html' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <img> <p>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
      'caption_filter' => array(
        'weight' => '20',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
