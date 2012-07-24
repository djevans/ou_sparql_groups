<?php

function ou_sparql_groups_views_plugins() {
  $plugins = array(
    'argument default' => array(
      'ou_sparql_groups_argument_default_group_name' => array(
        'title' => t('Current OG title from context'),
        'help' => t('Get the title of the current context\'s OG Group'),
        'handler' => 'ou_sparql_groups_argument_default_group_name',
      ),
    ),
  );
  return $plugins;
}
