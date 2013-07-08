<?php
/**
 * @file provides custom functionality for customizing comments functionality
 */

/**
 * Hook for generating the html content for the "Invite Colleagues to Comment Form"
 */
function scfmembers_comment_invite_form($form, &$form_state, $nid = null) {
  global $user;
  global $base_url;
  $node = null;
  if(!function_exists('_scfmembers_user_first_name')) {
    module_load_include('inc','scfmembers','scfmembers.user');
  }
  $username = format_username($user);
  if($nid) {
    $node = node_load($nid);
  }
  $node_url = $base_url . '/' . 'node/' . $nid;
  $default_name = $user->uid ? format_username($user) : '';
  $default_mail = $user->uid ? $user->mail : '';
  $default_subject = sprintf("PRF member %s invited you to comment on this forum", $username);
  $default_body = (!empty($node)) ? $node_url . " - " . $node->title : '';

  $form['nid'] = array(
    '#type' => 'value',
    '#value' => $nid,
  );

  $form['name'] = array(
    '#type' => 'textfield',
    '#title' => t('Your name'),
    '#maxlength' => 255,
    '#default_value' => $default_name,
    '#required' => TRUE,
    '#weight' => .001
  );

  $form['mail'] = array(
    '#type' => 'textfield',
    '#title' => t('Your e-mail address'),
    '#maxlength' => 255,
    '#default_value' => $default_mail,
    '#required' => TRUE,
    '#weight' => .002
  );

  $form['recipients'] = array(
    '#type' => 'textfield',
    '#title' => t('Recipients'),
    '#required' => TRUE,
    '#weight' => '0.003',
  );

  $form['subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
    '#maxlength' => 255,
    '#default_value' => $default_subject,
    '#required' => TRUE,
  );

  $form['message'] = array(
    '#type' => 'text_format',
    '#title' => t('Message'),
    '#required' => TRUE,
    '#default_value' => $default_body,
    '#text_format' => filter_default_format($user),
  );

  $form['copy'] = array(
    '#type' => 'checkbox',
    '#title' => t('Send yourself a copy.'),
    '#access' => $user->uid,
  );

  $form['actions'] = array('#type' => 'actions');

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Send message'),
  );

  return $form;
}

/**
 * Implements hook_form_validate();
 * validates the comment_invite_form
 */
function scfmembers_comment_invite_form_validate($form, &$form_state) {
  if (!valid_email_address($form_state['values']['mail'])) {
    form_set_error('mail', t('You must enter a valid e-mail address.'));
  }
  $recipients = explode(",", $form_state['values']['recipients']);
  foreach ($recipients as $recipient) {
    $recipient = trim($recipient);
    if (!valid_email_address($recipient)) {
      form_set_error('recipients', t('Recipient list contains an invalid e-mail address.'));
    }
  }
  if(strlen(trim($form_state['values']['subject'])) == 0) {
    form_set_error('subject', t('E-mail subject is required.'));
  }
}

/**
 * Implements hook_form_submit()
 */
function scfmembers_comment_invite_form_submit($form, &$form_state) {
  global $language;
  global $user;
  $nid = $form_state['values']['nid'];
  $to = $form_state['values']['recipients'];
  $from = $form_state['values']['mail'];
  $subject = $form_state['values']['subject'];
  $body = array();
  $body[] = check_markup($form_state['values']['message']['value'], $form_state['values']['message']['format']);
  $body = implode("\n\n",$body); //No longer needed but keeping in the event additional body elements are appended
  $params = array(
    'subject' => $subject,
    'message' => $body ,
  );
  $module = 'scfmembers';
  $key = 'comments';

  $message = drupal_mail($module, $key, $to, $language, $params, $from, TRUE);
  if($form_state['values']['copy']) {
    $key = 'comments_copy';
    drupal_mail($module, $key, $from, $language, $params, $from, TRUE);
  }

  drupal_set_message(t('Colleagues have been e-mailed.'));
  flood_register_event('scfmembers_comment',30); //Limit inviting to once every 30 seconds.

  watchdog('scfmembers', 'User %user invited colleagues to comment on node %nid', array('%user' => $user->uid, '%nid' => $nid));
  $form_state['redirect'] = (!empty($nid)) ? "node/$nid" : '';
}

/**
 * Hook for generating the html content for the "Invite Colleagues Form"
 * Uses the same form as the comment form
 */
function scfmembers_invite_form($form, &$form_state, $nid = null) {
  global $user;
  global $base_url;
  drupal_set_title('Invite colleagues to join the ' . variable_get('site_name'));
  $registration_url = $base_url . '/user/register';
  $username = format_username($user);
  $default_subject = $username . ' would like to invite you to join the ' . variable_get('site_name');
  $default_message = "<p>Dear Colleague,</p>\n";
  $default_message .= "<p>" . sprintf("%s is sending you this email to encourage you to join the <a href=\"%s\">" . variable_get('site_name') . "</a>, an online web community that aims to accelerate progress toward cures for multiple sclerosis and related disorders by sparking new ideas and catalyzing unforeseen connections.",$username, $base_url) . "</p>\n";
  $default_message .= "<p>" . "Anyone can view the site's content, but only members can:" . "</p>\n";
  $default_message .= "<ul>\n" .
    "<li>Post comments and participate in discussions;</li>\n" .
    "<li>View full profiles of other members;</li>\n" .
    "<li>Post bulletin board notices;</li>\n" .
    "<li>Contact fellow members through email links on the site.</li>\n" .
    "</ul> \n";
  $default_message .= "<p>" . sprintf("Registering also demonstrates your support for the Multiple Sclerosis Discovery Forum and will contribute to the site's long-term success. It’s free and simple to become an MSDF member. Please <a href=\"%s\">join the Forum</a> and add your voice to this new conversation about multiple sclerosis and other demyelinating disorders of the central nervous system.", $registration_url) . "</p>";
  $default_message .= "<p>" . "Thank you,<br/><br/> The Multiple Sclerosis Discovery Forum team" . "</p>\n";
  $form = scfmembers_comment_invite_form($form, $form_state, $nid = null);
  $form['subject']['#default_value'] = $default_subject;
  $form['message']['#default_value'] = $default_message;
  return $form;
}

/**
 * Implements hook_form_validate
 */
function scfmembers_invite_form_validate($form, &$form_state, $nid = null) {
  return scfmembers_comment_invite_form_validate($form, $form_state, $nid = null);
}

/**
 * Implements hook_form_submit
 */
function scfmembers_invite_form_submit($form, &$form_state, $nid = null) {
  scfmembers_comment_invite_form_submit($form, $form_state, $nid = null);
}

/**
 * Implements hook_form()
 * Admin Comment settings
 */
function scfmembers_comments_admin_form($form, &$form_state) {
  drupal_set_title('SCF Comment Settings');
  $default_invite_colleague_footer_message = variable_get('scfmembers_comments_invite_footer_message','');
  $form['invite_colleagues_footer_message'] = array(
    '#type' => 'textarea',
    '#title' => t('Footer Message for Invite Colleague E-mail'),
    '#description' => t('This message will be displayed on the bottom of all e-mails used to invite colleagues to comment.'),
    '#default_value' => $default_invite_colleague_footer_message,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  return $form;
}

/**
 * Implements hook_validate()
 */
function scfmembers_comments_admin_form_validate($form, &$form_state) {
  //No validation currently needed.
}

/**
 * Implements hook_submit()
 */
function scfmembers_comments_admin_form_submit($form, &$form_state) {
  //No validation currently needed.
  variable_set('scfmembers_comments_invite_footer_message', $form_state['values']['invite_colleagues_footer_message']);
  drupal_set_message(t('Footer message saved.'));
  $form_state['redirect'] = '/admin/scfmembers';
}
