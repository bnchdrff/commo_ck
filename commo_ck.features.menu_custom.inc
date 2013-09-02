<?php
/**
 * @file
 * commo_ck.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function commo_ck_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-commo_ck.
  $menus['menu-commo_ck'] = array(
    'menu_name' => 'menu-commo_ck',
    'title' => 'Commotion Construction Kit',
    'description' => 'Commotion Construction Kit',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Commotion Construction Kit');


  return $menus;
}
