<?php
/**
 * @file
 * commo_ck.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function commo_ck_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'commo_ck';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'commo_ck_page' => 'commo_ck_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-11' => array(
          'module' => 'menu_block',
          'delta' => '11',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu_block-5' => array(
          'module' => 'menu_block',
          'delta' => '5',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-commo_ck_tags-block' => array(
          'module' => 'views',
          'delta' => 'commo_ck_tags-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['commo_ck'] = $context;

  return $export;
}
