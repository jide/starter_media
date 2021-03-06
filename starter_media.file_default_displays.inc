<?php
/**
 * @file
 * starter_media.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function starter_media_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__landscape__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'landscape',
    'image_link' => '',
  );
  $export['image__landscape__file_field_image'] = $file_display;

  return $export;
}
