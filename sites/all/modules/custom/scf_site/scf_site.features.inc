<?php
/**
 * @file
 * scf_site.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function scf_site_ctools_plugin_api() {
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
function scf_site_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function scf_site_image_default_styles() {
  $styles = array();

  // Exported image style: homepage_slideshow.
  $styles['homepage_slideshow'] = array(
    'name' => 'homepage_slideshow',
    'effects' => array(
      2 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '885',
          'height' => '410',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: scf_thumbnail.
  $styles['scf_thumbnail'] = array(
    'name' => 'scf_thumbnail',
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
 * Implements hook_node_info().
 */
function scf_site_node_info() {
  $items = array(
    'nodeblock' => array(
      'name' => t('nodeblock'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
