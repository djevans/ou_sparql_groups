<?php

$view = new view;
$view->name = 'ou_sparql_groups_authored_content';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'sparql_views_2823727186';
$view->human_name = 'Group-Authored Content';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Group-Authored Content';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Post (OU Research Hub): URI */
$handler->display->display_options['fields']['ou_post']['id'] = 'ou_post';
$handler->display->display_options['fields']['ou_post']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['fields']['ou_post']['field'] = 'ou_post';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'group-authored-content/%';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
