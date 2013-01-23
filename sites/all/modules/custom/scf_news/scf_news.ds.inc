<?php
/**
 * @file
 * scf_news.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function scf_news_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|scf_news|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'scf_news';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
  );
  $export['node|scf_news|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|scf_news|scf_homepage_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'scf_news';
  $ds_fieldsetting->view_mode = 'scf_homepage_teaser';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|scf_news|scf_homepage_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|scf_news|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'scf_news';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
  );
  $export['node|scf_news|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function scf_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|scf_news|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'scf_news';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'scf_f_news_type',
        1 => 'post_date',
        2 => 'scf_f_news_content_image',
        3 => 'scf_f_news_subhead',
        4 => 'scf_f_news_byline',
        5 => 'body',
        6 => 'scf_f_news_attachment',
      ),
    ),
    'fields' => array(
      'scf_f_news_type' => 'ds_content',
      'post_date' => 'ds_content',
      'scf_f_news_content_image' => 'ds_content',
      'scf_f_news_subhead' => 'ds_content',
      'scf_f_news_byline' => 'ds_content',
      'body' => 'ds_content',
      'scf_f_news_attachment' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|scf_news|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|scf_news|scf_homepage_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'scf_news';
  $ds_layout->view_mode = 'scf_homepage_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'post_date',
        1 => 'scf_f_news_type',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'post_date' => 'ds_content',
      'scf_f_news_type' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|scf_news|scf_homepage_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|scf_news|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'scf_news';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'scf_f_news_type',
        1 => 'post_date',
        2 => 'scf_f_news_image',
        3 => 'scf_f_news_subhead',
        4 => 'scf_f_news_byline',
        5 => 'body',
        6 => 'scf_f_news_attachment',
      ),
    ),
    'fields' => array(
      'scf_f_news_type' => 'ds_content',
      'post_date' => 'ds_content',
      'scf_f_news_image' => 'ds_content',
      'scf_f_news_subhead' => 'ds_content',
      'scf_f_news_byline' => 'ds_content',
      'body' => 'ds_content',
      'scf_f_news_attachment' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|scf_news|teaser'] = $ds_layout;

  return $export;
}
