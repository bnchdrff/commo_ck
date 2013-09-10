<?php
/**
 * @file
 * commo_ck.menu_block.inc
 */

/**
 * Implements hook_menu_block_defaults().
 */
function commo_ck_menu_block_defaults() {
  $export = array();

  $menu_block = new stdClass();
  $menu_block->disabled = FALSE; /* Edit this to true to make a default menu_block disabled initially */
  $menu_block->api_version = 1;
  $menu_block->name = '11';
  $menu_block->label = 'commo ck module menu';
  $menu_block->description = '';
  $menu_block->depth = 0;
  $menu_block->expanded = 0;
  $menu_block->follow = '0';
  $menu_block->level = 3;
  $menu_block->parent = '_active:0';
  $menu_block->sort = 0;
  $menu_block->title_link = 0;
  $export['11'] = $menu_block;

  return $export;
}
