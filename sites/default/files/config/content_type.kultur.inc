<?php
/**
 * @file
 * content_type.kultur.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'kultur',
  'name' => 'kultur',
  'description' => '',
  'has_title' => '1',
  'title_label' => 'Title',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.node_options_kultur' => 'variable.node_options_kultur',
  'variable.node_preview_kultur' => 'variable.node_preview_kultur',
  'variable.node_submitted_kultur' => 'variable.node_submitted_kultur',
  'variable.comment_default_per_page_kultur' => 'variable.comment_default_per_page_kultur',
  'variable.comment_form_location_kultur' => 'variable.comment_form_location_kultur',
  'variable.comment_preview_kultur' => 'variable.comment_preview_kultur',
  'variable.comment_subject_field_kultur' => 'variable.comment_subject_field_kultur',
);

$optional = array(
  'field.node.body.kultur' => 'field.node.body.kultur',
  'permission.create_kultur_content' => 'permission.create_kultur_content',
  'permission.edit_own_kultur_content' => 'permission.edit_own_kultur_content',
  'permission.edit_any_kultur_content' => 'permission.edit_any_kultur_content',
  'permission.delete_own_kultur_content' => 'permission.delete_own_kultur_content',
  'permission.delete_any_kultur_content' => 'permission.delete_any_kultur_content',
);

$modules = array(
  0 => 'node',
);
