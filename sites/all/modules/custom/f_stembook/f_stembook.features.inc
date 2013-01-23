<?php
/**
 * @file
 * f_stembook.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_stembook_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function f_stembook_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function f_stembook_flag_default_flags() {
  $flags = array();
  // Exported flag: "validation status for user uploaded protocols".
  $flags['validationstatus'] = array(
    'content_type' => 'node',
    'title' => 'validation status for user uploaded protocols',
    'global' => '0',
    'types' => array(
      0 => 'scf_protocol',
    ),
    'flag_short' => 'Validation Pending',
    'flag_long' => 'This protocol is being validated',
    'flag_message' => 'This protocol has been validated',
    'unflag_short' => 'Validated Protocol',
    'unflag_long' => 'This protocol has been validated',
    'unflag_message' => 'This protocol has been switched to validation pending status',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '4',
        1 => '5',
      ),
      'unflag' => array(
        0 => '4',
        1 => '5',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'f_stembook',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function f_stembook_node_info() {
  $items = array(
    'commentary' => array(
      'name' => t('Commentary'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'newsarticle' => array(
      'name' => t('newsarticle'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'protocol' => array(
      'name' => t('Protocol'),
      'base' => 'node_content',
      'description' => t('Protocols and Methods'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pubnode' => array(
      'name' => t('StemBook Chapter'),
      'base' => 'node_content',
      'description' => t('StemBook Chapter'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'stembook_book' => array(
      'name' => t('Book'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'stembook_chapter_new' => array(
      'name' => t('Stembook Chapter (New)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'story' => array(
      'name' => t('Story'),
      'base' => 'node_content',
      'description' => t('A <em>story</em>, similar in form to a <em>page</em>, is ideal for creating and displaying content that informs or engages website visitors. Press releases, site announcements, and informal blog-like entries may all be created with a <em>story</em> entry. By default, a <em>story</em> entry is automatically featured on the site\'s initial home page, and provides the ability to post comments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
