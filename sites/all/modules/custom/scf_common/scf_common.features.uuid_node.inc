<?php
/**
 * @file
 * scf_common.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function scf_common_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => 'A Collaborative Effort by',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '3ab9125c-2e0f-492c-8d81-3959b8f5c0e7',
  'type' => 'nodeblock',
  'language' => 'und',
  'created' => '1352395673',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '010d8e63-3906-4d6b-b6ad-b70223e2a412',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<img src="/sites/all/themes/sbo2/images/1-HSCI.jpg" alt="HSCI logo" />
<img src="/sites/all/themes/sbo2/images/3-NIH.jpg" alt="NIH logo" />
<img src="/sites/all/themes/sbo2/images/4-MIND.jpg" alt="MIND logo" />',
        'summary' => '',
        'format' => '2',
        'safe_value' => '<p><img src="/sites/all/themes/sbo2/images/1-HSCI.jpg" alt="HSCI logo" /><img src="/sites/all/themes/sbo2/images/3-NIH.jpg" alt="NIH logo" /><img src="/sites/all/themes/sbo2/images/4-MIND.jpg" alt="MIND logo" /></p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'scf_f_machine_name' => array(
    'und' => array(
      0 => array(
        'human' => 'scf_common_collaborators_block',
        'machine' => 'scf_common_collaborators_block',
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
  'date' => '2012-11-08 12:27:53 -0500',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Copyright block',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '5fc68e75-b24a-4b56-9278-68f090df2dae',
  'type' => 'nodeblock',
  'language' => 'und',
  'created' => '1352395462',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '58c6ebec-2e2c-47a9-9621-bcb586b304f8',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Copyright 2013 by the Massachusetts General Hospital. Some sections copyright 2008-2009 by The President and Fellows of Harvard College.',
        'summary' => '',
        'format' => '1',
        'safe_value' => '<p>Copyright 2013 by the Massachusetts General Hospital. Some sections copyright 2008-2009 by The President and Fellows of Harvard College.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'scf_f_machine_name' => array(
    'und' => array(
      0 => array(
        'human' => 'scf_common_copyright_block',
        'machine' => 'scf_common_copyright_block',
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
  'date' => '2012-11-08 12:24:22 -0500',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'License block',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'd17f6f67-ac1e-44d6-b7cd-270eac79a1b5',
  'type' => 'nodeblock',
  'language' => 'und',
  'created' => '1352395757',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'eb376dd0-2f8a-4a50-82c1-49035fa268f4',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<a id="cc_image" href="http://creativecommons.org/licenses/by/3.0/" rel="license">
<img src="http://i.creativecommons.org/l/by/3.0/88x31.png" style="border-width:0" alt="Creative Commons License">
</a>
  All content unless otherwise noted is licensed under a <a href="http://creativecommons.org/licenses/by/3.0/" rel="license">Creative Commons Attribution 3.0 Unported License</a>',
        'summary' => '',
        'format' => '2',
        'safe_value' => '<p><a id="cc_image" href="http://creativecommons.org/licenses/by/3.0/" rel="license"><br /><img src="http://i.creativecommons.org/l/by/3.0/88x31.png" style="border-width:0" alt="Creative Commons License" /></a>
  All content unless otherwise noted is licensed under a <a href="http://creativecommons.org/licenses/by/3.0/" rel="license">Creative Commons Attribution 3.0 Unported License</a></p>',
        'safe_summary' => '',
      ),
    ),
  ),
  'scf_f_machine_name' => array(
    'und' => array(
      0 => array(
        'human' => 'scf_common_license_block',
        'machine' => 'scf_common_license_block',
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
  'date' => '2012-11-08 12:29:17 -0500',
);
  return $nodes;
}
