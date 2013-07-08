<?php
/**
 * @file
 * scfmembers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function scfmembers_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function scfmembers_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function scfmembers_flag_default_flags() {
  $flags = array();
  // Exported flag: "Bookmark".
  $flags['scfmembers_bookmark'] = array(
    'content_type' => 'node',
    'title' => 'Bookmark',
    'global' => '0',
    'types' => array(
      0 => 'blogs',
      1 => 'discussion',
      2 => 'essays_opinions',
      3 => 'new_findings',
      4 => 'new_synthesis',
      5 => 'webinar',
      6 => 'scfpr_event',
      7 => 'scfrr_animal_model',
      8 => 'scfrr_protocols_best_practices',
      9 => 'biblio',
    ),
    'flag_short' => 'Bookmark',
    'flag_long' => 'Add this post to your bookmarks',
    'flag_message' => 'This post has been added to your bookmarks',
    'unflag_short' => 'Unbookmark',
    'unflag_long' => 'Remove this post from your bookmarks',
    'unflag_message' => 'This post has been removed from your bookmarks',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'scfmembers',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Recommend".
  $flags['scfmembers_recommend'] = array(
    'content_type' => 'node',
    'title' => 'Recommend',
    'global' => '0',
    'types' => array(
      0 => 'blogs',
      1 => 'discussion',
      2 => 'essays_opinions',
      3 => 'new_findings',
      4 => 'new_synthesis',
      5 => 'webinar',
      6 => 'scfpr_event',
      7 => 'scfrr_animal_model',
      8 => 'scfrr_protocols_best_practices',
      9 => 'biblio',
    ),
    'flag_short' => 'Recommend',
    'flag_long' => 'Recommend this post',
    'flag_message' => '',
    'unflag_short' => 'Unrecommend',
    'unflag_long' => 'Cancel your recommendation',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'scfmembers',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}

/**
 * Implements hook_image_default_styles().
 */
function scfmembers_image_default_styles() {
  $styles = array();

  // Exported image style: scfmembers_thumbnail
  $styles['scfmembers_thumbnail'] = array(
    'name' => 'scfmembers_thumbnail',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '100',
          'height' => '100',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_default_profile2_type().
 */
function scfmembers_default_profile2_type() {
  $items = array();
  $items['scfmembers_profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "scfmembers_profile",
    "label" : "Profile",
    "weight" : "0",
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
