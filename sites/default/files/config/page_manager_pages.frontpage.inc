<?php
/**
 * @file
 * page_manager_pages.frontpage.inc
 */

$api = '2.0.0';

$data = $page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'frontpage';
$page->task = 'page';
$page->admin_title = 'frontpage';
$page->admin_description = '';
$page->path = 'frontpage';
$page->access = array();
$page->menu = array();
$page->arguments = array();
$page->conf = array(
  'admin_paths' => FALSE,
);


$dependencies = array(
  'page_manager_handlers.page_frontpage_panel_context' => 'page_manager_handlers.page_frontpage_panel_context',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
