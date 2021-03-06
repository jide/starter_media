<?php
/**
 * @file
 * starter_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function starter_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_filter_default_formats_alter().
 */
function starter_media_filter_default_formats_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['filters']['media_filter'] = array(
      'settings' => array(),
      'status' => 1,
      'weight' => 2,
    ); /* WAS: '' */
  }
  if (isset($data['full_html'])) {
    $data['full_html']['filters']['media_filter'] = array(
      'settings' => array(),
      'status' => 1,
      'weight' => 2,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function starter_media_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['filtered_html'])) {
    $data['filtered_html']['settings']['buttons']['drupal']['media'] = 1; /* WAS: '' */
  }
  if (isset($data['full_html'])) {
    $data['full_html']['settings']['buttons']['drupal']['media'] = 1; /* WAS: '' */
  }
}

/**
 * Implements hook_image_default_styles().
 */
function starter_media_image_default_styles() {
  $styles = array();

  // Exported image style: landscape.
  $styles['landscape'] = array(
    'name' => 'landscape',
    'label' => 'Landscape (1140x400)',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1140,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
