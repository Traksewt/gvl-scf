<?php
/**
 * @file - SCF Utilities for working with member data
*/

/**
 * Helper function for rendering most active commenters block content
 */
function scfmembers_most_active_block_content() {
  $interval = strtotime('-5 year');
  $count = 999;
  $commenters = scfmembers_most_active_commenters($count,$interval);
  $output = "";
  $output .= '<ul>';
  foreach($commenters as $commenter) {
    $username = theme('username', array('account' => user_load($commenter->uid)));
    $output .= '<li>' . $username . '</li>';
  }
  $output .= '</ul>';
  $output .= l(t('See Full List'),'members-most_active',array('attributes' => array('class' => array('more-link'))));
  return array('#type' => 'markup', '#markup' => $output);
}

/**
 * Helper function for rendering most active commenters page content
 */
function scfmembers_most_active_page_content() {
  //drupal_set_title('Most Active Commentators');
  $interval = (arg(2)) ? strtotime('-1 year') : strtotime('-1 month');
  // Force interval to be 1 year
  $interval = strtotime('-5 year');
  $count = 999;
  $output = '';
  $commenters = scfmembers_most_active_commenters($count,$interval);
  $output .= '<div id="most-active-commenters">';
//   //Create Interval Menu
//   $output .= '<ul class="tabs primary">';
//   $output .= '<li>' . l(t('Last 30 Days'), 'members/most_active') . '</li>'; //Monthly is default
//   $output .= '<li>' . l(t('All Time'), 'members/most_active/yearly') . '</li>';
//   $output .= '</ul>';
//   $output .= '<ul>';
  foreach($commenters as $commenter) {
    $username = theme('username', array('account' => user_load($commenter->uid)));
    $output .= '<li>' . $username . '</li>';
  }
  $output .= '</ul>';
  $output .= '</div>';
  return array('#type' => 'markup', '#markup' => $output);
}

/**
 * Helper function to get the most active commenters (users)
 * @param $count
 *    The number of results to return
 * @param $time
 *    The comment start date
 *
 * @return $results
 *     An object of UID's and comment counts
 */
function scfmembers_most_active_commenters($count = 5,$time = null) {
  if(!$time) {
    $time = strtotime('-1 month');
  }
  $count = intval($count);
  $results = db_query("select users.uid, count(cid) as comments
    from comment, users
    where comment.uid = users.uid
    and comment.created > :time
    group by uid
    order by count(cid) desc
    limit $count", array(":time" => $time));
  return $results->fetchAll();
}
