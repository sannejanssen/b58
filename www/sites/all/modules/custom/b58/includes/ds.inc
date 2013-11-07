<?php

/**
 * @file
 * Display Suite functions.
 */

/**
 * Show the contact details.
 */
function b58_ds_contact_details($field) {
  $node = $field['entity'];
  $output = '<div class="contact-details">';

  if ($node->type == 'founder') {
    $expertise = field_get_items('node', $node, 'body');

    // Add expertise.
    $output .= '<div class="expertise">';
    $output .= '<h3>' . t('Expertise') . '</h3>';

    if ($expertise) {
      $output .= '<div class="content">';
      $output .= '<div class="icon"></div>';
      $output .= '<div class="value">' . $expertise[0]['safe_value'] . '</div>';
      $output .= '</div>';
    }

    $output .= '</div>'; // end expertise
  }

  $twitter = field_get_items('node', $node, 'field_twitter_link');
  $linkedin = field_get_items('node', $node, 'field_linkedin_link');
  $googleplus = field_get_items('node', $node, 'field_googleplus_link');
  $email = field_get_items('node', $node, 'field_email');
  $skype = field_get_items('node', $node, 'field_skype');
  $phone = field_get_items('node', $node, 'field_phone');

  // Add contact details.
  $output .= '<div class="contact">';
  $output .= '<h3>' . t('Get in touch') . '</h3>';

  if ($twitter || $linkedin) {
    $output .= '<div class="content">';
    $output .= '<div class="icon"></div>';
    $output .= '<div class="value">';

    if ($twitter) {
      $output .= '<div class="link twitter">';
      $output .= l('Twitter ' . $node->title, $twitter[0]['value'], array('attributes' => array('target' => '_blank')));
      $output .= '<span class="hover-block">' . t('Follow me on Twitter' ) . '</span>';
      $output .= '</div>'; // end twitter link.
    }

    if ($linkedin) {
      $output .= '<div class="link linkedin">';
      $output .= l('LinkedIn ' . $node->title, $linkedin[0]['value'], array('attributes' => array('target' => '_blank')));
      $output .= '<span class="hover-block">' . t('Follow me on LinkedIn' ) . '</span>';
      $output .= '</div>'; // end linkedin link.
    }

    if ($googleplus) {
      $output .= '<div class="link googleplus">';
      $output .= l('Google Plus ' . $node->title, $googleplus[0]['value'], array('attributes' => array('target' => '_blank')));
      $output .= '<span class="hover-block">' . t('Follow me on Google Plus' ) . '</span>';
      $output .= '</div>'; // end linkedin link.
    }

    if ($email) {
      $output .= '<div class="link email">';
      $output .= l(t('E-mail ') . $node->title, 'mailto:' . $email[0]['email']);
      $output .= '<span class="hover-block">' . t('E-mail me') . '</span>';
      $output .= '</div>'; // end linkedin link.
    }

    if ($skype) {
      $output .= '<div class="link skype">';
      $output .= '<a href="skype:' . $skype[0]['value'] . '?call">skype</a>';
      $output .= '<span class="hover-block">' . t('Skype me') . '</span>';
      $output .= '</div>'; // end linkedin link.
    }

    if ($phone) {
      $output .= '<div class="link phone">';
      $output .= l(t('Call ') . $node->title, 'tel:' . $phone[0]['value']);
      $output .= '<span class="hover-block">' . t('Call me') . '</span>';
      $output .= '</div>'; // end linkedin link.
    }


    $output .= '</div>'; // end value
    $output .= '</div>'; // end content
  }

  $output .= '</div>'; // end contact
  $output .= '</div>'; // end contact details

  return $output;
}

/**
 * DS field: return all campusses separated by comma's.
 */
/*
function thomas_more_ds_campus_list($field) {
  $campus_entities = field_get_items('node', $field['entity'], 'field_campus');
  if (!empty($campus_entities)) {
    $campus_list = array();
    foreach ($campus_entities as $campus_entity) {
      $campus = node_load($campus_entity['target_id']);
      $campus_list[] = $campus->title;
    }
    return implode(', ', $campus_list);
  }
}
*/