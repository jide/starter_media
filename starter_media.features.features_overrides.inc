<?php
/**
 * @file
 * starter_media.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function starter_media_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: filter
  $overrides["filter.filtered_html.filters|media_filter"] = array(
    'settings' => array(),
    'status' => 1,
    'weight' => 2,
  );
  $overrides["filter.full_html.filters|media_filter"] = array(
    'settings' => array(),
    'status' => 1,
    'weight' => 2,
  );

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.filtered_html.settings|buttons|drupal|media"] = 1;
  $overrides["wysiwyg.full_html.settings|buttons|drupal|media"] = 1;

 return $overrides;
}
