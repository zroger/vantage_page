<?php
/**
 * @file
 * Helper functions for installation and updates.
 */

/**
 * Field configuration for the page content field.
 */
function vantage_page_content_field_config() {
  return array(
    'field_name' => 'page_content',
    'type' => 'template_field',
    'cardinality' => FIELD_CARDINALITY_UNLIMITED,
    'settings' => array(),
  );
}

/**
 * Field instance configuration for the page content field.
 */
function vantage_page_content_field_instance($entity_type, $bundle) {
  return array(
    'description' => t('TODO: Add a description for this field instance.'),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(
          'formatter_field' => 'page_content_formatter',
        ),
        'type' => 'from_field',
        'weight' => '2',
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'label' => t('Page content'),
    'required' => 0,
    'settings' => array(),
    'widget' => array(
      'weight' => '-4',
      'type' => 'template_widget',
      'settings' => array(
        'template_tags' => array(
          'page-template' => 'page-template',
        ),
      ),
    ),
    'field_name' => 'page_content',
    'entity_type' => $entity_type,
    'bundle' => $bundle,
  );
}

/**
 * Field configuration for the page content formatter field.
 */
function vantage_page_content_formatter_field_config() {
  return array(
    'field_name' => 'page_content_formatter',
    'type' => 'formatter',
    'cardinality' => '1',
    'settings' => array(),
  ) ;
}

/**
 * Field instance configuration for the page content field.
 */
function vantage_page_content_formatter_field_instance($entity_type, $bundle) {
  return array(
    'description' => t('TODO: Add a description for this field instance.'),
    "display" => array(
      "default" => array(
        "label" => "hidden",
        "settings" => array(),
        "type" => "hidden",
        "weight" => "1",
      ),
      "teaser" => array(
        "label" => "hidden",
        "settings" => array(),
        "type" => "hidden",
        "weight" => 0,
      ),
    ),
    "label" => t("Content formatter"),
    "required" => 0,
    "settings" => array(
      "field_name" => "page_content",
    ),
    "widget" => array(
      "settings" => array(),
      "type" => "formatter_select",
      "weight" => "-3",
    ),
    "field_name" => "field_content_formatter",
    "entity_type" => $entity_type,
    "bundle" => $bundle,
  );
}
