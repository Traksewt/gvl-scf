<?php
/**
 * @file
 * f_stembook.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function f_stembook_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['1'] = array(
    'format' => '1',
    'name' => 'Filtered HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '-1',
    'filters' => array(
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
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
    ),
  );

  // Exported format: Full HTML.
  $formats['2'] = array(
    'format' => '2',
    'name' => 'Full HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_url' => array(
        'weight' => '-50',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      '_stembook_filter_html_entrezgene' => array(
        'weight' => '-49',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => '-48',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-46',
        'status' => '1',
        'settings' => array(),
      ),
      '_stembook_filter_html_a_name' => array(
        'weight' => '-45',
        'status' => '1',
        'settings' => array(),
      ),
      '_stembook_filter_html_dev_links' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['3'] = array(
    'format' => '3',
    'name' => 'Plain text',
    'cache' => '1',
    'status' => '1',
    'weight' => '1',
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '1',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => '2',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
