//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto path_constraint_update(class rigid_body_constraint_custom_path* vpc, struct gentity_s* veh) -> void
{
  return Zynamic::Forward<void (class rigid_body_constraint_custom_path*, struct gentity_s*)>(L"path_constraint_update")(vpc, veh);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto path_constraint_create(struct gentity_s* veh) -> class rigid_body_constraint_custom_path*
{
  return Zynamic::Forward<class rigid_body_constraint_custom_path* (struct gentity_s*)>(L"path_constraint_create")(veh);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto path_constraint_destroy(class rigid_body_constraint_custom_path* vpc) -> void
{
  return Zynamic::Forward<void (class rigid_body_constraint_custom_path*)>(L"path_constraint_destroy")(vpc);
}

#endif // __UNIMPLEMENTED__
