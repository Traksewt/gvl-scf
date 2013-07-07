<?php
/**
 * @file
 * scf_members.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function scf_members_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scf_members_background|profile2|scf_members_profile|default';
  $field_group->group_name = 'group_scf_members_background';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'scf_members_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '9',
    'children' => array(
      0 => 'field_scf_members_attachment',
      1 => 'field_scf_members_funding_grant',
      2 => 'field_scf_members_hdegree',
      3 => 'field_scf_members_position',
      4 => 'field_scf_members_position_other',
      5 => 'field_scf_members_research_focus',
      6 => 'field_scf_members_research_i',
      7 => 'field_scf_members_title',
      8 => 'field_scf_members_vci_statement',
      9 => 'field_scf_members_website_link',
      10 => 'field_scf_members_work_sector',
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
  $export['group_scf_members_background|profile2|scf_members_profile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scf_members_background|profile2|scf_members_profile|form';
  $field_group->group_name = 'group_scf_members_background';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'scf_members_profile';
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
  $export['group_scf_members_background|profile2|scf_members_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scf_members_contact|profile2|scf_members_profile|default';
  $field_group->group_name = 'group_scf_members_contact';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'scf_members_profile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '3',
    'children' => array(
      0 => 'field_scf_members_address',
      1 => 'field_scf_members_affiliation',
      2 => 'field_scf_members_department',
      3 => 'field_scf_members_fax',
      4 => 'field_scf_members_phone',
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
  $export['group_scf_members_contact|profile2|scf_members_profile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scf_members_contact|profile2|scf_members_profile|form';
  $field_group->group_name = 'group_scf_members_contact';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'scf_members_profile';
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
  $export['group_scf_members_contact|profile2|scf_members_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_scf_members_optional_info|profile2|scf_members_profile|form';
  $field_group->group_name = 'group_scf_members_optional_info';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'scf_members_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Optional information',
    'weight' => '9',
    'children' => array(
      0 => 'field_scf_members_address',
      1 => 'field_scf_members_attachment',
      2 => 'field_scf_members_clinical_i',
      3 => 'field_scf_members_department',
      4 => 'field_scf_members_fax',
      5 => 'field_scf_members_funding_grant',
      6 => 'field_scf_members_hdegree',
      7 => 'field_scf_members_phone',
      8 => 'field_scf_members_photo',
      9 => 'field_scf_members_research_focus',
      10 => 'field_scf_members_title',
      11 => 'field_scf_members_vci_statement',
      12 => 'field_scf_members_website_link',
      13 => 'field_scf_members_work_sector',
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
  $export['group_scf_members_optional_info|profile2|scf_members_profile|form'] = $field_group;

  return $export;
}
