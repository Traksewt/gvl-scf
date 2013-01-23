<?php
/**
 * @file
 * scf_protocols.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function scf_protocols_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'scf_protocols_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'scf_protocols_view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Protocols';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = '';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Stem Cell COREdinates is a group of  Cores from the United States that have come together with the goal to share knowledge, expertise and further the spread of stem cell science. This group was established in 2011 with the assistance of Mahendra Rao (link to his website), Director of NIH CRM and Scott Lipnick (link to his website), Director of Scientific Programs, NYSCF. We are currently working with Stembook to put together and validate a list of current protocols encompassing various methods to generate and differentiate induced pluripotent stem cells into various lineages.

Stem Cell COREdinates is currently composed of ten different Cores headed by:


W. Travis Berggren: Salk Institute- Stem Cell Core Facility, La Jolla, CA.
http://www.salk.edu/stemcell/

Guokai Chen: NHLBI iPSC Core Facility, Bethesda, MD
https://intramural.nhlbi.nih.gov/Cores/iPSC/Pages/Home.aspx

Laurence Daheron: Harvard Stem Cell Institute iPSC Core Facility, Boston, MA.
http://www.hsci.harvard.edu/research/ips-core-facility

Sunita D\'Souza: hESC / iPSC Shared Resource Facility, MSSM, New York, NY.
http://www.mssm.edu/research/resources/shared-resource-facilities/human-embryonic-stem-cell

Richard Gronostajski: Western New York Stem Cell Culture and Analysis Center (WNYSTEM), Buffalo, NY.
http://wnystem.buffalo.edu/

Hyesoo Kim: Stem Cell Core Facility at John Hopkins School of Medicine, Baltimore, MD.
http://www.hopkinsmedicine.org/institute_cell_engineering/resources/stem_cell_core/

Tenneille Ludwig: WiCell Research Institute, Madison, WI.
http://www.wicell.org/home/about-wicell/key-personnel/key-personnel.cmsx

Thorsten Schlaeger: HSCI/CHB human embryonic stem cell core, Boston, MA
http://stemcell.childrenshospital.org/about-us/stem-cell-program-labs/the-hesc-core-facility/hesc-training-opportunities/

Mark Tomishima: MSKCC Stem Cell Research Facility, New York, NY.
http://www.mskcc.org/research/stem-cell-research-facility

Wenli Yang: Director, UPenn iPSC Core Facility, Philadelphia, PA.
http://www.med.upenn.edu/ipsccore/index.shtml

';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Section (scf_f_ptls_section) */
  $handler->display->display_options['arguments']['scf_f_ptls_section_value']['id'] = 'scf_f_ptls_section_value';
  $handler->display->display_options['arguments']['scf_f_ptls_section_value']['table'] = 'field_data_scf_f_ptls_section';
  $handler->display->display_options['arguments']['scf_f_ptls_section_value']['field'] = 'scf_f_ptls_section_value';
  $handler->display->display_options['arguments']['scf_f_ptls_section_value']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['scf_f_ptls_section_value']['exception']['value'] = '';
  $handler->display->display_options['arguments']['scf_f_ptls_section_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['scf_f_ptls_section_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['scf_f_ptls_section_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['scf_f_ptls_section_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['scf_f_ptls_section_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'protocol' => 'protocol',
    'scf_protocol' => 'scf_protocol',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'protocols';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New protocols';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Entity: Rendered entity */
  $handler->display->display_options['empty']['entity']['id'] = 'entity';
  $handler->display->display_options['empty']['entity']['table'] = 'entity__global';
  $handler->display->display_options['empty']['entity']['field'] = 'entity';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['block_description'] = 'SCF New Protocols block';
  $export['scf_protocols_view'] = $view;

  return $export;
}
