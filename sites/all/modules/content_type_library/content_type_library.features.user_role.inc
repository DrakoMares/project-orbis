<?php
/**
 * @file
 * content_type_library.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function content_type_library_user_default_roles() {
  $roles = array();

  // Exported role: Bibliotecario.
  $roles['Bibliotecario'] = array(
    'name' => 'Bibliotecario',
    'weight' => 3,
  );

  return $roles;
}
