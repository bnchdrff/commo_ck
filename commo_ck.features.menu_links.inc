<?php
/**
 * @file
 * commo_ck.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function commo_ck_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/3459
  $menu_links['main-menu:node/3459'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3459',
    'router_path' => 'node/%',
    'link_title' => 'Commotion Construction Kit',
    'options' => array(
      'attributes' => array(
        'title' => 'The Commotion Construction Kit is a guide to organizing and contructing a community wireless mesh network using Commotion.',
      ),
      'node_type' => 'page',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'node/7180',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Commotion Construction Kit');


  return $menu_links;
}
