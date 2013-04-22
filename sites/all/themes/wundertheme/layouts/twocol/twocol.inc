<?php

/**
 * @file
 * Implementation for the main pages.
 */

// Plugin definition
$plugin = array(
  'title' => t('Responsive twocol layout'),
  'category' => t('B58'),
  'icon' => 'main.png',
  'theme' => 'twocol',
  'css' => 'twocol.css',
  'regions' => array(
    'top' => t('Top row'),
    'col_first' => t('First column'),
    'col_second' => t('Second column'),
    'bottom' => t('Bottom row'),
  ),
);
