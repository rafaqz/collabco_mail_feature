<?php
/**
 * @file
 * collabco_mail_feature.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function collabco_mail_feature_filter_default_formats() {
  $formats = array();

  // Exported format: Email.
  $formats['email'] = array(
    'format' => 'email',
    'name' => 'Email',
    'cache' => 1,
    'status' => 1,
    'weight' => -5,
    'filters' => array(
      'filter_html' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <img> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <br>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'local_paths' => '',
          'protocol_style' => 'full',
        ),
      ),
    ),
  );

  return $formats;
}
