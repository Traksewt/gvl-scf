<?php

/**
 * @file - API Functions for scf_members module
*/

/**
 * Define Constants
*/
define('RECOMMEND_FLAG','scf_members_recommend');

/**
 * Hook for rendering users that recommended a particlar node.
 * @param $nid - Node id to search by
 * @param $format - HTML or JSON format. Defaults to json
 * @return void - Prints Output
*/
function scf_members_get_recommended_users($nid, $format = 'json') {
  $flags = flag_get_content_flags('node', $nid, RECOMMEND_FLAG);
  $users = array();
  if(!$flags) {
    $results = array('results' => 'false');
  }
  else {
    foreach($flags as $key => $val) {
      $user = user_load($key);
      if(isset($user) && !empty($user->realname)) {
        $users[] = $user->realname;
      }
    }
    $results = array('results' => $users);
  }
  switch($format) {
    case 'json':
      print json_encode($results);
      exit();
      break;
    case 'html':
      if(!empty($users)) {
        $output = '<ul>';
        foreach($users as $user) {
          $output .= '<li>' . $user . '</li>';
        }
        $output .= '</ul>';
      }
      else {
        $output = "";
      }
      print $output;
      exit();
      break;
  }
}

