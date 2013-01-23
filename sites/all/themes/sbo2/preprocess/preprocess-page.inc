<?php

if (drupal_is_front_page()) {
  drupal_add_js(drupal_get_path('theme', 'sbo2') . '/js/slidorion/js/jquery.easing.js');
  drupal_add_js(drupal_get_path('theme', 'sbo2') . '/js/slidorion/js/jquery.slidorion.min.js');
  drupal_add_js(drupal_get_path('theme', 'sbo2') . '/js/sbo2.js');
  drupal_add_css(drupal_get_path('theme', 'sbo2') . '/js/slidorion/css/slidorion.css');
}
