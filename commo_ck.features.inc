<?php
/**
 * @file
 * commo_ck.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function commo_ck_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function commo_ck_node_info() {
  $items = array(
    'commo_ck_page' => array(
      'name' => t('commo_ck_page'),
      'base' => 'node_content',
      'description' => t('Commotion Construciton Kit page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
