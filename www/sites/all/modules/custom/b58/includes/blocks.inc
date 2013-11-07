<?php

/**
 * @file
 * Block callbacks.
 */

/**
 * Return the international contacts map.
 */
function b58_international_contacts_map() {
  global $base_path;

  $block = array();
  $block['subject'] = 'The block title';

  $image_url = $base_path . drupal_get_path('theme', 'wundertheme') . '/images/international-contacts/b58-world-map.png';

  $block['content'] = '<div class="ic-map">';

  // The map for mobile users.
  $block['content'] .= '<img src="' . $image_url . '" width="1079" alt="' . t('International contacts') . '" class="mobile" />';

  // The image-map image.
  $block['content'] .= '<img src="' . $image_url . '" width="1079" alt="' . t('International contacts') . '" class="image-map" usemap="#i-contacts" />';

  // The maps.
  $block['content'] .= '<map id="i-contacts" name="i-contacts">';

  // area: top, left, top + height, left + width

  // Area 1.
  $block['content'] .= '<area id="contact-25" shape="rect" coords="210,100,265,160" href="http://www.google.com" alt="" title="" />';

  // Close the map.
  $block['content'] .= '</map>';

  // $block['content'] .= '<div id="area-test"></div>';

  // Close international contacts map wrapper.
  $block['content'] .= '</div>';



  return $block;
}