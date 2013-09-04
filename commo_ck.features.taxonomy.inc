<?php
/**
 * @file
 * commo_ck.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function commo_ck_taxonomy_default_vocabularies() {
  return array(
    'commo_ck_tags' => array(
      'name' => 'commo ck tags',
      'machine_name' => 'commo_ck_tags',
      'description' => 'Tags used in the Commotion Construction Kit',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
