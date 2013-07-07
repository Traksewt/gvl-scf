<?php
/**
 * @file
 * scf_protocols.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function scf_protocols_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => 'About Protocols',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '9144d119-3600-471a-a18a-241a829652b3',
  'type' => 'nodeblock',
  'language' => 'und',
  'created' => '1350612318',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '8dd948c6-f03d-4895-8af7-1235f23ad268',
  'revision_uid' => '0',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'SCF Protocols are a collection of protocols collected by [TODO] . We welcome your input on these protocols through our discussion forums and comments section.',
        'summary' => '',
        'format' => '1',
        'safe_value' => '<p>SCF Protocols are a collection of protocols collected by [TODO] . We welcome your input on these protocols through our discussion forums and comments section.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'scf_f_machine_name' => array(
    'und' => array(
      0 => array(
        'human' => 'scf_protocols_about_block',
        'machine' => 'scf_protocols_about_block',
      ),
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:9:{s:13:"form_build_id";s:37:"form-c2ea52f537c4c5998da4b3db77d9efdf";s:14:"picture_delete";s:0:"";s:14:"picture_upload";s:0:"";s:5:"block";a:1:{s:5:"devel";a:1:{i:1;i:1;}}s:19:"biblio_show_profile";i:0;s:19:"biblio_my_pubs_menu";i:0;s:15:"biblio_lastname";s:0:"";s:18:"biblio_profile_uid";s:8:"lastname";s:7:"contact";i:0;}',
  'date' => '2012-10-18 22:05:18 -0400',
);
  return $nodes;
}
