<?php

$view = new view;
$view->name = 'ou_sparql_groups';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'sparql_views_2823727186';
$view->human_name = 'Groups';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Groups';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Person (OU Research Hub): Current Project */
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['id'] = 'ou_person_ou_foaf_currentproject';
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['field'] = 'ou_person_ou_foaf_currentproject';
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['label'] = '';
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['alter']['external'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['alter']['trim'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['alter']['html'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['element_default_classes'] = 1;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['hide_empty'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['empty_zero'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['ou_person_ou_foaf_currentproject']['required'] = 1;
/* Contextual filter: Person (OU Research Hub): URI */
$handler->display->display_options['arguments']['ou_person']['id'] = 'ou_person';
$handler->display->display_options['arguments']['ou_person']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['arguments']['ou_person']['field'] = 'ou_person';
$handler->display->display_options['arguments']['ou_person']['default_action'] = 'default';
$handler->display->display_options['arguments']['ou_person']['default_argument_type'] = 'ou_sparql_views_argument_default_user_field';
$handler->display->display_options['arguments']['ou_person']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['ou_person']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['ou_person']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['ou_person']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['ou_person']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['ou_person']['specify_validation'] = 1;
$handler->display->display_options['arguments']['ou_person']['sparql_options'] = array(
  'value_type' => 'uri',
  'language' => '0',
  'code' => '',
);
/* Filter criterion: Person (OU Research Hub): RDF type */
$handler->display->display_options['filters']['ou_person_type']['id'] = 'ou_person_type';
$handler->display->display_options['filters']['ou_person_type']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['filters']['ou_person_type']['field'] = 'ou_person_type';
$handler->display->display_options['filters']['ou_person_type']['value'] = 'foaf:Person';

/* Display: Current Projects */
$handler = $view->new_display('page', 'Current Projects', 'currentproject');
$handler->display->display_options['path'] = 'groups/%/projects';

/* Display: Topics */
$handler = $view->new_display('page', 'Topics', 'topic_interest');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Person (OU Research Hub): Topic of Interest */
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['id'] = 'ou_person_ou_foaf_topic_interest';
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['field'] = 'ou_person_ou_foaf_topic_interest';
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['label'] = '';
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['alter']['external'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['alter']['trim'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['alter']['html'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['element_default_classes'] = 1;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['hide_empty'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['empty_zero'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['ou_person_ou_foaf_topic_interest']['required'] = 1;
$handler->display->display_options['path'] = 'groups/%/topics';
