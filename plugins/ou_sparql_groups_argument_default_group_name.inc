<?php

class ou_sparql_groups_argument_default_group_name extends views_plugin_argument_default {
  function get_argument() {
    $return = FALSE;
    if ($group = og_context()) {
      $return = $group->label; // @TODO allow for double quotes
    }
    return $return;
  }
}
