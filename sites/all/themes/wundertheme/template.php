<?php
/**
 * @file
 * Provides overrides and additions to aid the theme.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Adds a placeholder to the search block.
 */
function wundertheme_form_search_block_form_alter(&$form, &$form_state, $form_id) {
  $form['search_block_form']['#attributes']['placeholder'] = t('Search…');
}

/**
 * Implements hook_css_alter().
 */
function wundertheme_css_alter(&$css) {

  /* Remove some default Drupal css */
  unset($css['modules/system/system.menus.css']);

  /* Get rid of some default panel css */
  foreach ($css as $path => $meta) {
    if (strpos($path, 'threecol_33_34_33_stacked') !== FALSE || strpos($path, 'threecol_25_50_25_stacked') !== FALSE) {
      unset($css[$path]);
    }
  }
}

/**
 * Override or insert variables into the html template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered. This is usually "html", but can
 *   also be "maintenance_page" since zen_preprocess_maintenance_page() calls
 *   this function to have consistent variables.
 */
function wundertheme_preprocess_html(&$variables, $hook) {

  $theme_path = drupal_get_path('theme', 'wundertheme');

  drupal_add_css( $theme_path . '/stylesheets/ie.css',
    array(
      'group' => CSS_THEME,
      'browsers' => array(
        'IE' => 'lt IE 9',
        '!IE' => FALSE,
      ),
      'weight' => 999,
      'every_page' => TRUE,
      'media' => 'screen, projection'
    )
  );
  drupal_add_css( $theme_path . '/stylesheets/style.css',
    array(
      'group' => CSS_THEME,
      'browsers' => array(
        'IE' => 'gt IE 8',
        '!IE' => TRUE,
      ),
      'weight' => 999,
      'every_page' => TRUE,
      'media' => 'screen, projection'
    )
  );
  drupal_add_css( $theme_path . '/stylesheets/print.css',
    array(
      'group' => CSS_THEME,
      'weight' => 999,
      'every_page' => TRUE,
      'media' => 'print'
    )
  );
}

/**
 * Implements theme_breadcrumb()
 *
 * Return a themed breadcrumb trail.
 *
 * @param $breadcrumb
 *   An array containing the breadcrumb links.
 * @return a string containing the breadcrumb output.
 */
function wundertheme_breadcrumb($variables) {
  $item = menu_get_item();
  $variables['breadcrumb'][] = drupal_get_title();
  $breadcrumb = $variables['breadcrumb'];

  if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    $output .= '<div class="breadcrumb">' . implode(' > ', $breadcrumb) . '</div>';

    return $output;
  }
}

function wundertheme_preprocess_page(&$variables){

  //custom 404
  $headers = drupal_get_http_header();

  if (isset($headers['status'])) {
    if($headers['status'] == '404 Not Found'){
      $variables['theme_hook_suggestions'][] = 'page__404';
    }
  }
}