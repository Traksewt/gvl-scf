<?php
/**
 * @file
 * scfmembers.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function scfmembers_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scfmembers_background|profile2|scfmembers_profile|default';
  $field_group->group_name = 'group_scfmembers_background';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'scfmembers_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '9',
    'children' => array(
      0 => 'field_scfmembers_hdegree',
      1 => 'field_scfmembers_title',
      2 => 'field_scfmembers_attachment',
      3 => 'field_scfmembers_funding_grant',
      4 => 'field_scfmembers_position',
      5 => 'field_scfmembers_position_other',
      6 => 'field_scfmembers_research_focus',
      7 => 'field_scfmembers_research_i',
      8 => 'field_scfmembers_vci_statement',
      9 => 'field_scfmembers_work_sector',
      10 => 'field_scfmembers_website_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Background',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_scfmembers_background|profile2|scfmembers_profile|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scfmembers_background|profile2|scfmembers_profile|form';
  $field_group->group_name = 'group_scfmembers_background';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'scfmembers_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '19',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_scfmembers_background|profile2|scfmembers_profile|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scfmembers_contact|profile2|scfmembers_profile|default';
  $field_group->group_name = 'group_scfmembers_contact';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'scfmembers_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '3',
    'children' => array(
      0 => 'field_scfmembers_address',
      1 => 'field_scfmembers_affiliation',
      2 => 'field_scfmembers_department',
      3 => 'field_scfmembers_fax',
      4 => 'field_scfmembers_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_scfmembers_contact|profile2|scfmembers_profile|default'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scfmembers_contact|profile2|scfmembers_profile|form';
  $field_group->group_name = 'group_scfmembers_contact';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'scfmembers_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '18',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_scfmembers_contact|profile2|scfmembers_profile|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scfmembers_optional_info|profile2|scfmembers_profile|form';
  $field_group->group_name = 'group_scfmembers_optional_info';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'scfmembers_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Optional information',
    'weight' => '9',
    'children' => array(
      0 => 'field_scfmembers_address',
      1 => 'field_scfmembers_department',
      2 => 'field_scfmembers_fax',
      3 => 'field_scfmembers_hdegree',
      4 => 'field_scfmembers_phone',
      5 => 'field_scfmembers_title',
      6 => 'field_scfmembers_attachment',
      7 => 'field_scfmembers_clinical_i',
      8 => 'field_scfmembers_funding_grant',
      9 => 'field_scfmembers_photo',
      10 => 'field_scfmembers_publication',
      11 => 'field_scfmembers_research_focus',
      12 => 'field_scfmembers_vci_statement',
      13 => 'field_scfmembers_work_sector',
      14 => 'field_scfmembers_website_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_scfmembers_optional_info|profile2|scfmembers_profile|form'] = $field_group;

  return $export;
}
