<?php
/**
 * @file
 * scf_members.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function scf_members_field_default_fields() {
  $fields = array();

  // Exported field: 'profile2-scf_members_profile-field_scf_members_address'.
  $fields['profile2-scf_members_profile-field_scf_members_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_address',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'addressfield',
      'settings' => array(
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => array(
        0 => array(
          'administrative_area' => '',
          'country' => 'US',
          'element_key' => 'profile2|scf_members_profile|field_scf_members_address|und|0',
          'locality' => '',
          'postal_code' => '',
          'premise' => '',
          'thoroughfare' => '',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_address',
      'label' => 'Address',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(),
          'format_handlers' => array(
            'address' => 'address',
            'name-full' => 0,
            'name-oneline' => 0,
            'organisation' => 0,
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_affiliation'.
  $fields['profile2-scf_members_profile-field_scf_members_affiliation'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_affiliation',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'scf_members_affiliations',
          ),
        ),
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_affiliation',
      'label' => 'Affiliations',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_agree_tc'.
  $fields['profile2-scf_members_profile-field_scf_members_agree_tc'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_agree_tc',
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
          0 => '',
          1 => 'I have read and agree to the Terms and Conditions.',
        ),
        'allowed_values_function' => '',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_agree_tc',
      'label' => 'Terms & Conditions',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 0,
        ),
        'type' => 'options_onoff',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_attachment'.
  $fields['profile2-scf_members_profile-field_scf_members_attachment'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_attachment',
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
        'profile2_private' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_url_plain',
          'weight' => '19',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_attachment',
      'label' => 'Upload CV or Biosketch',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => 'scf_members_attachment',
        'file_extensions' => 'txt pdf doc docx rtf',
        'max_filesize' => '16 MB',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'caption_from_title' => 0,
          'insert' => 0,
          'insert_absolute' => FALSE,
          'insert_class' => '',
          'insert_default' => array(
            0 => 'auto',
          ),
          'insert_styles' => array(
            0 => 'auto',
          ),
          'insert_width' => '',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '23',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_clinical_i'.
  $fields['profile2-scf_members_profile-field_scf_members_clinical_i'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_clinical_i',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'scf_members_clinical_interests',
          ),
        ),
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please list clinical interests, separated by commas, with your primary interest first',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_clinical_i',
      'label' => 'Clinical interests (not used, merged into research interests)',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '19',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_department'.
  $fields['profile2-scf_members_profile-field_scf_members_department'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_department',
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
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_department',
      'label' => 'Department',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_fax'.
  $fields['profile2-scf_members_profile-field_scf_members_fax'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_fax',
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
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_fax',
      'label' => 'Fax',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_feedback'.
  $fields['profile2-scf_members_profile-field_scf_members_feedback'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_feedback',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'scf_members_feedback_types',
          ),
        ),
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_feedback',
      'label' => 'How did you hear about us?',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_feedback_other'.
  $fields['profile2-scf_members_profile-field_scf_members_feedback_other'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_feedback_other',
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
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_feedback_other',
      'label' => 'How did you hear about us? (other)',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_firstname'.
  $fields['profile2-scf_members_profile-field_scf_members_firstname'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_firstname',
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
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_firstname',
      'label' => 'First name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_funding_grant'.
  $fields['profile2-scf_members_profile-field_scf_members_funding_grant'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_funding_grant',
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
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '17',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_funding_grant',
      'label' => 'Funding/Grants',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '18',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_hdegree'.
  $fields['profile2-scf_members_profile-field_scf_members_hdegree'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_hdegree',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'scf_members_degrees',
          ),
        ),
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '10',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_hdegree',
      'label' => 'Highest degree(s) earned',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_lastname'.
  $fields['profile2-scf_members_profile-field_scf_members_lastname'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_lastname',
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
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_lastname',
      'label' => 'Last name',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_phone'.
  $fields['profile2-scf_members_profile-field_scf_members_phone'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_phone',
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
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_phone',
      'label' => 'Phone',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_photo'.
  $fields['profile2-scf_members_profile-field_scf_members_photo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_photo',
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
        'profile2_private' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'deleted' => '0',
      'description' => 'Photos will display as squares, so for best results, please load a square image.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'thumbnail',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_photo',
      'label' => 'Photo',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => '619',
        'file_directory' => 'scf_members_photo',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '10 MB',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'caption_from_title' => 0,
          'insert' => 0,
          'insert_absolute' => FALSE,
          'insert_class' => '',
          'insert_default' => array(
            0 => 'auto',
          ),
          'insert_styles' => array(
            0 => 'auto',
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '22',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_position'.
  $fields['profile2-scf_members_profile-field_scf_members_position'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_position',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'scf_members_positions',
          ),
        ),
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Check all that apply',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '12',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_position',
      'label' => 'Position',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_position_other'.
  $fields['profile2-scf_members_profile-field_scf_members_position_other'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_position_other',
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
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '13',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_position_other',
      'label' => 'Position (other)',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_research_focus'.
  $fields['profile2-scf_members_profile-field_scf_members_research_focus'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_research_focus',
      'field_permissions' => array(
        'type' => '0',
      ),
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
      'settings' => array(
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '16',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_research_focus',
      'label' => 'Research focus',
      'required' => 0,
      'settings' => array(
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
        'weight' => '20',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_research_i'.
  $fields['profile2-scf_members_profile-field_scf_members_research_i'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_research_i',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'scf_members_research_interests',
          ),
        ),
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please list research / clinical interests, separated by commas, with your primary interest first',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'textformatter',
          'settings' => array(
            'textformatter_class' => 'textformatter-list',
            'textformatter_comma_and' => 0,
            'textformatter_comma_full_stop' => 0,
            'textformatter_comma_override' => 0,
            'textformatter_comma_tag' => 'div',
            'textformatter_contrib' => array(),
            'textformatter_separator_custom' => '',
            'textformatter_separator_custom_class' => 'textformatter-separator',
            'textformatter_separator_custom_tag' => 'span',
            'textformatter_term_plain' => 1,
            'textformatter_type' => 'comma',
          ),
          'type' => 'textformatter_list',
          'weight' => '14',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_research_i',
      'label' => 'Research/Clinical interest(s)',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_title'.
  $fields['profile2-scf_members_profile-field_scf_members_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_title',
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
      'settings' => array(
        'max_length' => '255',
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '11',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_title',
      'label' => 'Title',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_vci_statement'.
  $fields['profile2-scf_members_profile-field_scf_members_vci_statement'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_vci_statement',
      'field_permissions' => array(
        'type' => '0',
      ),
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
      'settings' => array(
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '18',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_vci_statement',
      'label' => 'Voluntary conflict of interest statement',
      'required' => 0,
      'settings' => array(
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
        'weight' => '21',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_website_link'.
  $fields['profile2-scf_members_profile-field_scf_members_website_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_website_link',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'profile2_private' => 0,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '8',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_website_link',
      'label' => 'Website',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 0,
        'title' => 'none',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'profile2-scf_members_profile-field_scf_members_work_sector'.
  $fields['profile2-scf_members_profile-field_scf_members_work_sector'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_scf_members_work_sector',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'parent' => '0',
            'vocabulary' => 'scf_members_work_sectors',
          ),
        ),
        'profile2_private' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'scf_members_profile',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '9',
        ),
      ),
      'entity_type' => 'profile2',
      'field_name' => 'field_scf_members_work_sector',
      'label' => 'Work sector',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '17',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Affiliations');
  t('Check all that apply');
  t('Clinical interests (not used, merged into research interests)');
  t('Department');
  t('Fax');
  t('First name');
  t('Funding/Grants');
  t('Highest degree(s) earned');
  t('How did you hear about us?');
  t('How did you hear about us? (other)');
  t('Last name');
  t('Phone');
  t('Photo');
  t('Photos will display as squares, so for best results, please load a square image.');
  t('Please list clinical interests, separated by commas, with your primary interest first');
  t('Please list research / clinical interests, separated by commas, with your primary interest first');
  t('Position');
  t('Position (other)');
  t('Research focus');
  t('Research/Clinical interest(s)');
  t('Terms & Conditions');
  t('Title');
  t('Upload CV or Biosketch');
  t('Voluntary conflict of interest statement');
  t('Website');
  t('Work sector');

  return $fields;
}
