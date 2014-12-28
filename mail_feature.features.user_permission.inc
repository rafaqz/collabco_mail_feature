<?php
/**
 * @file
 * mail_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mail_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer mail templates'.
  $permissions['administer mail templates'] = array(
    'name' => 'administer mail templates',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'mail_edit',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer mandrill'.
  $permissions['administer mandrill'] = array(
    'name' => 'administer mandrill',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'mandrill',
  );

  // Exported permission: 'administer views_send'.
  $permissions['administer views_send'] = array(
    'name' => 'administer views_send',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'views_send',
  );

  // Exported permission: 'attachments with views_send'.
  $permissions['attachments with views_send'] = array(
    'name' => 'attachments with views_send',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'views_send',
  );

  // Exported permission: 'configure mandrill templates'.
  $permissions['configure mandrill templates'] = array(
    'name' => 'configure mandrill templates',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'mandrill_template',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'mass mailing with views_send'.
  $permissions['mass mailing with views_send'] = array(
    'name' => 'mass mailing with views_send',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'views_send',
  );

  // Exported permission: 'send arbitrary files'.
  $permissions['send arbitrary files'] = array(
    'name' => 'send arbitrary files',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'view mandrill reports'.
  $permissions['view mandrill reports'] = array(
    'name' => 'view mandrill reports',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'mandrill_reports',
  );

  return $permissions;
}
