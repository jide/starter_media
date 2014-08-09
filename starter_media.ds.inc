<?php
/**
 * @file
 * starter_media.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function starter_media_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'landscape';
  $ds_view_mode->label = 'Landscape';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['landscape'] = $ds_view_mode;

  return $export;
}
