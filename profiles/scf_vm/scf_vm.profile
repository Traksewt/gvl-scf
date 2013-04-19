<?php
function scf_vm_install_tasks($install_state) {
  $tasks = array (
    'scf_vm_configure' => array(),
  );
  return $tasks;
}

/**
 * Set up base config
 */
function scf_vm_configure() {
  // Set default SCF VM variables
  variable_set('cache', 1);
  variable_set('block_cache', 1);
  variable_set('cache_lifetime', '0');
  variable_set('page_cache_maximum_age', '900');
  variable_set('page_compression', 0);
  variable_set('preprocess_css', 1);
  variable_set('preprocess_js', 1);
  $search_active_modules = array(
    'apachesolr_search' => 'apachesolr_search',
    'user' => 'user',
    'node' => 0
  );
  variable_set('search_active_modules', $search_active_modules);
  variable_set('search_default_module', 'apachesolr_search');
  drupal_set_message(t('SCF VM defaults configured.'));
}
