//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

public inline auto gjk_entity_info_t::get_gent() -> const struct gentity_s*
{
  return Zynamic::Forward<public const struct gentity_s* ()>(L"gjk_entity_info_t::get_gent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_entity_info_t::get_cent() -> const struct centity_s*
{
  return Zynamic::Forward<public const struct centity_s* ()>(L"gjk_entity_info_t::get_cent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_entity_info_t::get_dent() -> const struct DynEntityDef*
{
  return Zynamic::Forward<public const struct DynEntityDef* ()>(L"gjk_entity_info_t::get_dent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_entity_info_t::get_glass() -> const struct Glass*
{
  return Zynamic::Forward<public const struct Glass* ()>(L"gjk_entity_info_t::get_glass")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_entity_info_t::get_ent() -> const void*
{
  return Zynamic::Forward<public const void* ()>(L"gjk_entity_info_t::get_ent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_geom_info_t::get_xform() -> const class phys_mat44&
{
  return Zynamic::Forward<public const class phys_mat44& ()>(L"gjk_geom_info_t::get_xform")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_geom_info_t::calc_aabb() -> void
{
  return Zynamic::Forward<public void ()>(L"gjk_geom_info_t::calc_aabb")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_query_input::is_in_skip_list(struct gjk_geom_info_t* gi_) -> const bool
{
  return Zynamic::Forward<public const bool (struct gjk_geom_info_t*)>(L"gjk_query_input::is_in_skip_list")(gi_);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_query_input::visit_skip_list(const int query_visitor_count) -> void
{
  return Zynamic::Forward<public void (const int)>(L"gjk_query_input::visit_skip_list")(query_visitor_count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto cached_query_info_t::is_empty() -> bool
{
  return Zynamic::Forward<public bool ()>(L"cached_query_info_t::is_empty")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto cached_query_info_t::aabb_is_valid() -> bool
{
  return Zynamic::Forward<public bool ()>(L"cached_query_info_t::aabb_is_valid")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto cached_query_info_t::init_query(const class phys_vec3& query_aabb_min, const class phys_vec3& query_aabb_max, const class phys_vec3& extra, const int query_contents, const unsigned int query_flags) -> void
{
  return Zynamic::Forward<public void (const class phys_vec3&, const class phys_vec3&, const class phys_vec3&, const int, const unsigned int)>(L"cached_query_info_t::init_query")(query_aabb_min, query_aabb_max, extra, query_contents, query_flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto cached_query_info_t::add_query(const class phys_vec3& query_aabb_min, const class phys_vec3& query_aabb_max, const class phys_vec3& extra, const int query_contents, const unsigned int query_flags) -> void
{
  return Zynamic::Forward<public void (const class phys_vec3&, const class phys_vec3&, const class phys_vec3&, const int, const unsigned int)>(L"cached_query_info_t::add_query")(query_aabb_min, query_aabb_max, extra, query_contents, query_flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto cached_query_info_t::is_subset_aabb(const class phys_vec3& query_aabb_min, const class phys_vec3& query_aabb_max) -> bool
{
  return Zynamic::Forward<public bool (const class phys_vec3&, const class phys_vec3&)>(L"cached_query_info_t::is_subset_aabb")(query_aabb_min, query_aabb_max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto cached_query_info_t::is_subset(const class phys_vec3& query_aabb_min, const class phys_vec3& query_aabb_max, const int query_contents, const unsigned int query_flags) -> bool
{
  return Zynamic::Forward<public bool (const class phys_vec3&, const class phys_vec3&, const int, const unsigned int)>(L"cached_query_info_t::is_subset")(query_aabb_min, query_aabb_max, query_contents, query_flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_query_output::gjk_query_output() -> void
{
  return Zynamic::Forward<public void ()>(L"gjk_query_output::gjk_query_output")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_query_output::verify_empty() -> void
{
  return Zynamic::Forward<public void ()>(L"gjk_query_output::verify_empty")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto gjk_trace_plane_1d(float d1, float d2, float& min_t, float& max_t, const bool use_iw_logic) -> const bool
{
  return Zynamic::Forward<const bool (float, float, float&, float&, const bool)>(L"gjk_trace_plane_1d")(d1, d2, min_t, max_t, use_iw_logic);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto gjk_trace_aabb(const class phys_vec3& p0, const class phys_vec3& dir, const class phys_vec3& aabb_min, const class phys_vec3& aabb_max, float* t_) -> const bool
{
  return Zynamic::Forward<const bool (const class phys_vec3&, const class phys_vec3&, const class phys_vec3&, const class phys_vec3&, float*)>(L"gjk_trace_aabb")(p0, dir, aabb_min, aabb_max, t_);
}

#endif // __UNIMPLEMENTED__
