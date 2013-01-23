<?php
/**
 * @file
 * scf_common.menu_block.inc
 */

/**
 * Implements hook_menu_block_defaults().
 */
function scf_common_menu_block_defaults() {
  $export = array();

  $menu_block = new stdClass();
  $menu_block->disabled = FALSE; /* Edit this to true to make a default menu_block disabled initially */
  $menu_block->api_version = 1;
  $menu_block->name = 'scf_main_menu_block';
  $menu_block->label = 'Main menu block';
  $menu_block->description = '';
  $menu_block->depth = 0;
  $menu_block->expanded = 0;
  $menu_block->follow = '0';
  $menu_block->level = 2;
  $menu_block->parent = 'main-menu:0';
  $menu_block->sort = 0;
  $menu_block->title_link = 1;
  $export['scf_main_menu_block'] = $menu_block;

  return $export;
}
