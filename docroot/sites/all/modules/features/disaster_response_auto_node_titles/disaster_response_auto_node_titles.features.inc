<?php
/**
 * @file
 * disaster_response_auto_node_titles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function disaster_response_auto_node_titles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
