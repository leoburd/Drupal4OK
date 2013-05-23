<?php
/**
 * @file
 * disaster_response_auto_node_titles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function disaster_response_auto_node_titles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_ride_request';
  $strongarm->value = '';
  $export['ant_pattern_ride_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_ride_request';
  $strongarm->value = 0;
  $export['ant_php_ride_request'] = $strongarm;

  return $export;
}
