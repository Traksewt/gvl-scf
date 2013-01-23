<?php
/**
 * @file
 * scf_protocols.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function scf_protocols_field_default_fields() {
  $fields = array();

  // Exported field: 'node-scf_protocol-scf_f_attachment'.
  $fields['node-scf_protocol-scf_f_attachment'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'scf_f_attachment',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'scf_protocol',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'scf_f_attachment',
      'label' => 'Attachments',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'scf_attachment',
        'file_extensions' => 'txt jpg tif png pdf',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'multiupload_filefield_widget',
        'settings' => array(
          'caption_from_title' => 1,
          'insert' => 1,
          'insert_absolute' => 0,
          'insert_class' => '',
          'insert_default' => 'caption_image_large',
          'insert_styles' => array(
            'auto' => 'auto',
            'caption_image_large' => 'caption_image_large',
            'caption_image_medium' => 'caption_image_medium',
            'caption_image_thumbnail' => 'caption_image_thumbnail',
            'icon_link' => 'icon_link',
            'image' => 0,
            'image_large' => 0,
            'image_medium' => 0,
            'image_thumbnail' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_mfw',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-scf_protocol-scf_f_biblio_reference'.
  $fields['node-scf_protocol-scf_f_biblio_reference'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'scf_f_biblio_reference',
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'biblio' => 'biblio',
          ),
        ),
        'target_type' => 'node',
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'scf_protocol',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'links' => 1,
            'view_mode' => 'full',
          ),
          'type' => 'entityreference_entity_view',
          'weight' => '8',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'scf_f_biblio_reference',
      'label' => 'References',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'entityreference',
        'settings' => array(
          'match_operator' => 'CONTAINS',
          'path' => '',
          'size' => '60',
        ),
        'type' => 'entityreference_autocomplete',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-scf_protocol-scf_f_image'.
  $fields['node-scf_protocol-scf_f_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'scf_f_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'scf_protocol',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'scf_f_image',
      'label' => 'Images',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => 'scf_image',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'multiupload_imagefield_widget',
        'settings' => array(
          'caption_from_title' => 1,
          'insert' => 1,
          'insert_absolute' => 0,
          'insert_class' => '',
          'insert_default' => 'caption_image_large',
          'insert_styles' => array(
            'auto' => 'auto',
            'caption_image_large' => 'caption_image_large',
            'caption_image_medium' => 'caption_image_medium',
            'caption_image_thumbnail' => 'caption_image_thumbnail',
            'icon_link' => 'icon_link',
            'image' => 0,
            'image_large' => 0,
            'image_medium' => 0,
            'image_thumbnail' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_miw',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-scf_protocol-scf_f_ptls_abstract'.
  $fields['node-scf_protocol-scf_f_ptls_abstract'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'scf_f_ptls_abstract',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'scf_protocol',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => '128',
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'scf_f_ptls_abstract',
      'label' => 'Abstract',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'scf_wysiwyg_filter' => 'scf_wysiwyg_filter',
            1 => 0,
            2 => 0,
            3 => 0,
          ),
          'allowed_formats_toggle' => 1,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'scf_wysiwyg_filter' => array(
                'weight' => '-5',
              ),
              1 => array(
                'weight' => '-1',
              ),
              2 => array(
                'weight' => '0',
              ),
              3 => array(
                'weight' => '1',
              ),
            ),
          ),
        ),
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '-1',
      ),
    ),
  );

  // Exported field: 'node-scf_protocol-scf_f_ptls_acknowledgments'.
  $fields['node-scf_protocol-scf_f_ptls_acknowledgments'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'scf_f_ptls_acknowledgments',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'scf_protocol',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'scf_f_ptls_acknowledgments',
      'label' => 'Acknowledgments',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'scf_wysiwyg_filter' => 'scf_wysiwyg_filter',
            1 => 0,
            2 => 0,
            3 => 0,
          ),
          'allowed_formats_toggle' => 1,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'scf_wysiwyg_filter' => array(
                'weight' => '-1',
              ),
              1 => array(
                'weight' => '-1',
              ),
              2 => array(
                'weight' => '0',
              ),
              3 => array(
                'weight' => '1',
              ),
            ),
          ),
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-scf_protocol-scf_f_ptls_affiliations'.
  $fields['node-scf_protocol-scf_f_ptls_affiliations'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'scf_f_ptls_affiliations',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'scf_protocol',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'scf_f_ptls_affiliations',
      'label' => 'Affiliations',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '-3',
      ),
    ),
  );

  // Exported field: 'node-scf_protocol-scf_f_ptls_authors'.
  $fields['node-scf_protocol-scf_f_ptls_authors'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'scf_f_ptls_authors',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'scf_protocol',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'scf_f_ptls_authors',
      'label' => 'Authors',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '-4',
      ),
    ),
  );

  // Exported field: 'node-scf_protocol-scf_f_ptls_citation_fixed'.
  $fields['node-scf_protocol-scf_f_ptls_citation_fixed'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'scf_f_ptls_citation_fixed',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'fixed_field',
      'settings' => array(
        'content' => '*Edited by [node:scf-f-ptls-authors]. Last revised [node:changed]. Published [node:created]. This chapter should be cited as: [node:scf-f-ptls-authors], [node:title] ([node:created]), StemBook, ed. The Stem Cell Research Community, StemBook, doi/10.3824/stembook.10.[node:nid].1, http://www.stembook.org.',
        'text_format' => '1',
      ),
      'translatable' => '0',
      'type' => 'fixed_field',
    ),
    'field_instance' => array(
      'bundle' => 'scf_protocol',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'fixed_field',
          'settings' => array(),
          'type' => 'fixed_field_formatter',
          'weight' => '11',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'scf_f_ptls_citation_fixed',
      'label' => 'Citation (fixed field)',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => NULL,
        'settings' => array(),
        'type' => 'field_extrawidgets_hidden',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-scf_protocol-scf_f_ptls_copyright_fixed'.
  $fields['node-scf_protocol-scf_f_ptls_copyright_fixed'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'scf_f_ptls_copyright_fixed',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'fixed_field',
      'settings' => array(
        'content' => 'Copyright: © [current-date:custom:Y] [node:scf-f-ptls-authors]

This is an open-access article distributed under the terms of the Creative Commons Attribution License, which permits unrestricted use, distribution, and reproduction in any medium, provided the original work is properly cited.',
        'text_format' => '1',
      ),
      'translatable' => '0',
      'type' => 'fixed_field',
    ),
    'field_instance' => array(
      'bundle' => 'scf_protocol',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'fixed_field',
          'settings' => array(),
          'type' => 'fixed_field_formatter',
          'weight' => '9',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'scf_f_ptls_copyright_fixed',
      'label' => 'Copyright (fixed field)',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => NULL,
        'settings' => array(),
        'type' => 'field_extrawidgets_hidden',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-scf_protocol-scf_f_ptls_correspondence'.
  $fields['node-scf_protocol-scf_f_ptls_correspondence'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'scf_f_ptls_correspondence',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'email',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'email',
    ),
    'field_instance' => array(
      'bundle' => 'scf_protocol',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'email',
          'settings' => array(),
          'type' => 'email_default',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'scf_f_ptls_correspondence',
      'label' => 'To whom correspondence should be addressed. E-mail',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'email',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'email_textfield',
        'weight' => '-2',
      ),
    ),
  );

  // Exported field: 'node-scf_protocol-scf_f_ptls_flowchart'.
  $fields['node-scf_protocol-scf_f_ptls_flowchart'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'scf_f_ptls_flowchart',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'scf_protocol',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'scf_f_ptls_flowchart',
      'label' => 'Flowchart',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'scf_wysiwyg_filter' => 'scf_wysiwyg_filter',
            1 => 0,
            2 => 0,
            3 => 0,
          ),
          'allowed_formats_toggle' => 1,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'scf_wysiwyg_filter' => array(
                'weight' => '-1',
              ),
              1 => array(
                'weight' => '-1',
              ),
              2 => array(
                'weight' => '0',
              ),
              3 => array(
                'weight' => '1',
              ),
            ),
          ),
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'node-scf_protocol-scf_f_ptls_procedure'.
  $fields['node-scf_protocol-scf_f_ptls_procedure'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'scf_f_ptls_procedure',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'scf_protocol',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'To insert a figure or attachment, upload your files using the "Attachments" or "Images" fields at the bottom of this form.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'scf_f_ptls_procedure',
      'label' => 'Procedure',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'scf_wysiwyg_filter' => 'scf_wysiwyg_filter',
            1 => 0,
            2 => 0,
            3 => 0,
          ),
          'allowed_formats_toggle' => 1,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'scf_wysiwyg_filter' => array(
                'weight' => '-1',
              ),
              1 => array(
                'weight' => '-1',
              ),
              2 => array(
                'weight' => '0',
              ),
              3 => array(
                'weight' => '1',
              ),
            ),
          ),
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-scf_protocol-scf_f_ptls_reagents'.
  $fields['node-scf_protocol-scf_f_ptls_reagents'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'scf_f_ptls_reagents',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'scf_protocol',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'scf_f_ptls_reagents',
      'label' => 'Reagents',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'scf_wysiwyg_filter' => 'scf_wysiwyg_filter',
            1 => 0,
            2 => 0,
            3 => 0,
          ),
          'allowed_formats_toggle' => 1,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'scf_wysiwyg_filter' => array(
                'weight' => '-1',
              ),
              1 => array(
                'weight' => '-1',
              ),
              2 => array(
                'weight' => '0',
              ),
              3 => array(
                'weight' => '1',
              ),
            ),
          ),
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-scf_protocol-scf_f_ptls_section'.
  $fields['node-scf_protocol-scf_f_ptls_section'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'scf_f_ptls_section',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'pluripotent-cells' => 'Pluripotent Cells',
          'reprogramming' => 'Reprogramming',
          'ectoderm' => 'Ectoderm',
          'endoderm' => 'Endoderm',
          'mesoderm' => 'Mesoderm',
          'cell-imaging' => 'Cell Imaging',
          'engineering' => 'Engineering',
        ),
        'allowed_values_function' => '',
        'allowed_values_php' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'scf_protocol',
      'default_value' => NULL,
      'default_value_function' => '',
      'default_value_php' => '',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'scf_f_ptls_section',
      'label' => 'Section',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-scf_protocol-scf_f_ptls_trouble_shooting'.
  $fields['node-scf_protocol-scf_f_ptls_trouble_shooting'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'scf_f_ptls_trouble_shooting',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'scf_protocol',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'scf_f_ptls_trouble_shooting',
      'label' => 'Trouble shooting',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'scf_wysiwyg_filter' => 'scf_wysiwyg_filter',
            1 => 0,
            2 => 0,
            3 => 0,
          ),
          'allowed_formats_toggle' => 1,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'scf_wysiwyg_filter' => array(
                'weight' => '-1',
              ),
              1 => array(
                'weight' => '-1',
              ),
              2 => array(
                'weight' => '0',
              ),
              3 => array(
                'weight' => '1',
              ),
            ),
          ),
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '3',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abstract');
  t('Acknowledgments');
  t('Affiliations');
  t('Attachments');
  t('Authors');
  t('Citation (fixed field)');
  t('Copyright (fixed field)');
  t('Flowchart');
  t('Images');
  t('Procedure');
  t('Reagents');
  t('References');
  t('Section');
  t('To insert a figure or attachment, upload your files using the "Attachments" or "Images" fields at the bottom of this form.');
  t('To whom correspondence should be addressed. E-mail');
  t('Trouble shooting');

  return $fields;
}
