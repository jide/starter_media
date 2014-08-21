<?php
/**
 * @file
 * starter_media.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function starter_media_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'title_file';
  $strongarm->value = array(
    'auto_attach' => array(
      'filename' => 'filename',
    ),
    'hide_label' => array(
      'page' => 'page',
      'entity' => 'entity',
    ),
  );
  $export['title_file'] = $strongarm;

  return $export;
}
