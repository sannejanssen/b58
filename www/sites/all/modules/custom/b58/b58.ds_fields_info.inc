<?php

/**
 * @file
 * Display Suite fields.
 */

/**
 * Implements hook_ds_fields_info().
 */
function b58_ds_fields_info($entity_type) {
  $fields = array();
  $file = drupal_get_path('module', 'b58') . '/includes/ds.inc';

  $fields['node']['contact-details'] = array(
    'title' => t('Contact details'),
    'field_type' => DS_FIELD_TYPE_FUNCTION,
    'function' => 'b58_ds_contact_details',
    'file' => $file,
    'ui_limit' => array(
      'founder|*', 'contact|*',
      ),
  );

  if (isset($fields[$entity_type])) {
    return array($entity_type => $fields[$entity_type]);
  }
}
