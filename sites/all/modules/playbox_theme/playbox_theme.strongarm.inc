<?php
/**
 * @file
 * playbox_theme.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function playbox_theme_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_kalatheme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bootstrap_library' => 'default',
    'fontawesome' => 1,
    'bootstrap_upload' => '',
    'build_subtheme' => 0,
    'magic' => 1,
    'subtheme_name' => '',
    'subtheme_base' => 'kalatheme',
    'always_show_page_title' => 0,
    'responsive_toggle' => 1,
    'pane_styles_toggle' => 1,
    'pane_classes' => array(),
  );
  $export['theme_kalatheme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_playbox_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => '0',
    'toggle_comment_user_verification' => '0',
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'sites/all/themes/playbox_theme/logo.svg',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bootstrap_library' => 'custom',
    'fontawesome' => 1,
    'bootstrap_upload' => '',
    'build_subtheme' => 0,
    'magic' => 1,
    'subtheme_name' => '',
    'subtheme_base' => 'kalatheme',
    'always_show_page_title' => 0,
    'responsive_toggle' => 1,
    'pane_styles_toggle' => 1,
    'pane_classes' => array(
      'battler-title' => 'Battler Title',
      'battler-nickname' => 'Battler Nickname',
    ),
  );
  $export['theme_playbox_theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'waypoints_always_add_js';
  $strongarm->value = 1;
  $export['waypoints_always_add_js'] = $strongarm;

  return $export;
}
