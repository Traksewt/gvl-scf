<?php
/**
 * @file
 * scf_members.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function scf_members_default_rules_configuration() {
  $items = array();
  $items['rules_scf_members_comments_notify_admin'] = entity_import('rules_config', '{ "rules_scf_members_comments_notify_admin" : {
      "LABEL" : "Notify editor of new comments",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : [ "comment_insert" ],
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "comment:author" ],
            "roles" : { "value" : { "4" : "4" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "A member has submitted a new comment on the [site:name] website",
            "message" : "The following comment was submitted on the [site:name] website:\\r\\n\\r\\n[comment:body]\\r\\n\\r\\nComment URL: [comment:url]\\r\\n",
            "from" : "[site:mail]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
