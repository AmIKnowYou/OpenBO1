//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

public inline auto gjk_collision_visitor::get_local_query_aabb(float* local_query_aabb_min, float* local_query_aabb_max) -> void
{
  return Zynamic::Forward<public void (float*, float*)>(L"gjk_collision_visitor::get_local_query_aabb")(local_query_aabb_min, local_query_aabb_max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto create_gjk_geom_collision_visitor::query_create_prolog_1(const float* local_aabb_min, const float* local_aabb_max, const void* geom) -> const bool
{
  return Zynamic::Forward<public const bool (const float*, const float*, const void*)>(L"create_gjk_geom_collision_visitor::query_create_prolog_1")(local_aabb_min, local_aabb_max, geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_base_t::gjk_base_t() -> void
{
  return Zynamic::Forward<public void ()>(L"gjk_base_t::gjk_base_t")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_base_t::set_geom_id_new(const unsigned int geom_id) -> void
{
  return Zynamic::Forward<public void (const unsigned int)>(L"gjk_base_t::set_geom_id_new")(geom_id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_base_t::get_geom_id() -> const unsigned int
{
  return Zynamic::Forward<public const unsigned int ()>(L"gjk_base_t::get_geom_id")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_base_t::~gjk_base_t() -> void
{
  return Zynamic::Forward<public void ()>(L"gjk_base_t::~gjk_base_t")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_base_t::set_contents(const int contents) -> void
{
  return Zynamic::Forward<public void (const int)>(L"gjk_base_t::set_contents")(contents);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_base_t::get_contents() -> const int
{
  return Zynamic::Forward<public const int ()>(L"gjk_base_t::get_contents")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_base_t::comp_aabb_loc() -> void
{
  return Zynamic::Forward<public void ()>(L"gjk_base_t::comp_aabb_loc")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto bdCreatorBase<bdGameInfo>::create() -> class bdGameInfo*
{
  return Zynamic::Forward<public class bdGameInfo* ()>(L"bdCreatorBase<bdGameInfo>::create")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_base_t::set_xform(const class phys_mat44* xform) -> void
{
  return Zynamic::Forward<public void (const class phys_mat44*)>(L"gjk_base_t::set_xform")(xform);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_base_t::get_xform() -> const class phys_mat44*
{
  return Zynamic::Forward<public const class phys_mat44* ()>(L"gjk_base_t::get_xform")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_base_t::is_foot(const class phys_vec3& hit_point) -> const bool
{
  return Zynamic::Forward<public const bool (const class phys_vec3&)>(L"gjk_base_t::is_foot")(hit_point);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_base_t::is_walkable(const class phys_vec3& hit_point, const class phys_vec3& up) -> const bool
{
  return Zynamic::Forward<public const bool (const class phys_vec3&, const class phys_vec3&)>(L"gjk_base_t::is_walkable")(hit_point, up);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_aabb_t::support(const class phys_vec3& v, class phys_vec3* support_vert, class phys_vec3* support_ind) -> void
{
  return Zynamic::Forward<public void (const class phys_vec3&, class phys_vec3*, class phys_vec3*)>(L"gjk_aabb_t::support")(v, support_vert, support_ind);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_aabb_t::get_simplex(const struct cached_simplex_info& cache_info, const int index_count, class phys_vec3* simplex_verts, class phys_vec3* simplex_inds) -> void
{
  return Zynamic::Forward<public void (const struct cached_simplex_info&, const int, class phys_vec3*, class phys_vec3*)>(L"gjk_aabb_t::get_simplex")(cache_info, index_count, simplex_verts, simplex_inds);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_aabb_t::get_center() -> const class phys_vec3
{
  return Zynamic::Forward<public const class phys_vec3 ()>(L"gjk_aabb_t::get_center")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_aabb_t::get_feature(class phys_contact_manifold* cman) -> void
{
  return Zynamic::Forward<public void (class phys_contact_manifold*)>(L"gjk_aabb_t::get_feature")(cman);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_aabb_t::calc_aabb(const class phys_mat44& xform, class phys_vec3* aabb_min, class phys_vec3* aabb_max) -> void
{
  return Zynamic::Forward<public void (const class phys_mat44&, class phys_vec3*, class phys_vec3*)>(L"gjk_aabb_t::calc_aabb")(xform, aabb_min, aabb_max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_aabb_t::get_brush() -> const struct cbrush_t*
{
  return Zynamic::Forward<public const struct cbrush_t* ()>(L"gjk_aabb_t::get_brush")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private inline auto CCallback<LiveSteamServer, SteamServersConnected_t, 1>::GetCallbackSizeBytes() -> int
{
  return Zynamic::Forward<private int ()>(L"CCallback<LiveSteamServer,SteamServersConnected_t,1>::GetCallbackSizeBytes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_physics_collision_visitor::is_query() -> const bool
{
  return Zynamic::Forward<public const bool ()>(L"gjk_physics_collision_visitor::is_query")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_obb_t::support(const class phys_vec3& v, class phys_vec3* support_vert, class phys_vec3* support_ind) -> void
{
  return Zynamic::Forward<public void (const class phys_vec3&, class phys_vec3*, class phys_vec3*)>(L"gjk_obb_t::support")(v, support_vert, support_ind);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_obb_t::get_simplex(const struct cached_simplex_info& cache_info, const int index_count, class phys_vec3* simplex_verts, class phys_vec3* simplex_inds) -> void
{
  return Zynamic::Forward<public void (const struct cached_simplex_info&, const int, class phys_vec3*, class phys_vec3*)>(L"gjk_obb_t::get_simplex")(cache_info, index_count, simplex_verts, simplex_inds);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_obb_t::get_center() -> const class phys_vec3
{
  return Zynamic::Forward<public const class phys_vec3 ()>(L"gjk_obb_t::get_center")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_obb_t::get_feature(class phys_contact_manifold* cman) -> void
{
  return Zynamic::Forward<public void (class phys_contact_manifold*)>(L"gjk_obb_t::get_feature")(cman);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_obb_t::calc_aabb(const class phys_mat44& xform, class phys_vec3* aabb_min, class phys_vec3* aabb_max) -> void
{
  return Zynamic::Forward<public void (const class phys_mat44&, class phys_vec3*, class phys_vec3*)>(L"gjk_obb_t::calc_aabb")(xform, aabb_min, aabb_max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_obb_t::get_type() -> const unsigned int
{
  return Zynamic::Forward<public const unsigned int ()>(L"gjk_obb_t::get_type")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_brush_t::support(const class phys_vec3& v, class phys_vec3* support_vert, class phys_vec3* support_ind) -> void
{
  return Zynamic::Forward<public void (const class phys_vec3&, class phys_vec3*, class phys_vec3*)>(L"gjk_brush_t::support")(v, support_vert, support_ind);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_brush_t::get_simplex(const struct cached_simplex_info& cache_info, const int index_count, class phys_vec3* simplex_verts, class phys_vec3* simplex_inds) -> void
{
  return Zynamic::Forward<public void (const struct cached_simplex_info&, const int, class phys_vec3*, class phys_vec3*)>(L"gjk_brush_t::get_simplex")(cache_info, index_count, simplex_verts, simplex_inds);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_brush_t::get_center() -> const class phys_vec3
{
  return Zynamic::Forward<public const class phys_vec3 ()>(L"gjk_brush_t::get_center")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_brush_t::get_feature(class phys_contact_manifold* cman) -> void
{
  return Zynamic::Forward<public void (class phys_contact_manifold*)>(L"gjk_brush_t::get_feature")(cman);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_brush_t::calc_aabb(const class phys_mat44& xform, class phys_vec3* aabb_min, class phys_vec3* aabb_max) -> void
{
  return Zynamic::Forward<public void (const class phys_mat44&, class phys_vec3*, class phys_vec3*)>(L"gjk_brush_t::calc_aabb")(xform, aabb_min, aabb_max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_brush_t::get_brush() -> const struct cbrush_t*
{
  return Zynamic::Forward<public const struct cbrush_t* ()>(L"gjk_brush_t::get_brush")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_brush_t::get_type() -> const unsigned int
{
  return Zynamic::Forward<public const unsigned int ()>(L"gjk_brush_t::get_type")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_partition_t::support(const class phys_vec3& v, class phys_vec3* support_vert, class phys_vec3* support_ind) -> void
{
  return Zynamic::Forward<public void (const class phys_vec3&, class phys_vec3*, class phys_vec3*)>(L"gjk_partition_t::support")(v, support_vert, support_ind);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_partition_t::get_simplex(const struct cached_simplex_info& cache_info, const int index_count, class phys_vec3* simplex_verts, class phys_vec3* simplex_inds) -> void
{
  return Zynamic::Forward<public void (const struct cached_simplex_info&, const int, class phys_vec3*, class phys_vec3*)>(L"gjk_partition_t::get_simplex")(cache_info, index_count, simplex_verts, simplex_inds);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_partition_t::get_feature(class phys_contact_manifold* cman) -> void
{
  return Zynamic::Forward<public void (class phys_contact_manifold*)>(L"gjk_partition_t::get_feature")(cman);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_partition_t::calc_aabb(const class phys_mat44& xform, class phys_vec3* aabb_min, class phys_vec3* aabb_max) -> void
{
  return Zynamic::Forward<public void (const class phys_mat44&, class phys_vec3*, class phys_vec3*)>(L"gjk_partition_t::calc_aabb")(xform, aabb_min, aabb_max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_partition_t::get_type() -> const unsigned int
{
  return Zynamic::Forward<public const unsigned int ()>(L"gjk_partition_t::get_type")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_double_sphere_t::support(const class phys_vec3& v, class phys_vec3* support_vert, class phys_vec3* support_ind) -> void
{
  return Zynamic::Forward<public void (const class phys_vec3&, class phys_vec3*, class phys_vec3*)>(L"gjk_double_sphere_t::support")(v, support_vert, support_ind);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_double_sphere_t::get_simplex(const struct cached_simplex_info& cache_info, const int index_count, class phys_vec3* simplex_verts, class phys_vec3* simplex_inds) -> void
{
  return Zynamic::Forward<public void (const struct cached_simplex_info&, const int, class phys_vec3*, class phys_vec3*)>(L"gjk_double_sphere_t::get_simplex")(cache_info, index_count, simplex_verts, simplex_inds);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_double_sphere_t::set_simplex(const class phys_vec3* simplex_inds, const int w_set, const class phys_vec3& normal, struct cached_simplex_info* cache_info) -> void
{
  return Zynamic::Forward<public void (const class phys_vec3*, const int, const class phys_vec3&, struct cached_simplex_info*)>(L"gjk_double_sphere_t::set_simplex")(simplex_inds, w_set, normal, cache_info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_double_sphere_t::get_center() -> const class phys_vec3
{
  return Zynamic::Forward<public const class phys_vec3 ()>(L"gjk_double_sphere_t::get_center")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_double_sphere_t::get_feature(class phys_contact_manifold* cman) -> void
{
  return Zynamic::Forward<public void (class phys_contact_manifold*)>(L"gjk_double_sphere_t::get_feature")(cman);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_double_sphere_t::calc_aabb(const class phys_mat44& xform, class phys_vec3* aabb_min, class phys_vec3* aabb_max) -> void
{
  return Zynamic::Forward<public void (const class phys_mat44&, class phys_vec3*, class phys_vec3*)>(L"gjk_double_sphere_t::calc_aabb")(xform, aabb_min, aabb_max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_double_sphere_t::get_geom_radius() -> const float
{
  return Zynamic::Forward<public const float ()>(L"gjk_double_sphere_t::get_geom_radius")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_double_sphere_t::is_polyhedron() -> bool
{
  return Zynamic::Forward<public bool ()>(L"gjk_double_sphere_t::is_polyhedron")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_cylinder_t::get_dims() -> const class phys_vec3
{
  return Zynamic::Forward<public const class phys_vec3 ()>(L"gjk_cylinder_t::get_dims")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_cylinder_t::support(const class phys_vec3& v, class phys_vec3* support_vert, class phys_vec3* support_ind) -> void
{
  return Zynamic::Forward<public void (const class phys_vec3&, class phys_vec3*, class phys_vec3*)>(L"gjk_cylinder_t::support")(v, support_vert, support_ind);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_cylinder_t::get_simplex(const struct cached_simplex_info& cache_info, const int index_count, class phys_vec3* simplex_verts, class phys_vec3* simplex_inds) -> void
{
  return Zynamic::Forward<public void (const struct cached_simplex_info&, const int, class phys_vec3*, class phys_vec3*)>(L"gjk_cylinder_t::get_simplex")(cache_info, index_count, simplex_verts, simplex_inds);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_cylinder_t::get_center() -> const class phys_vec3
{
  return Zynamic::Forward<public const class phys_vec3 ()>(L"gjk_cylinder_t::get_center")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_cylinder_t::get_feature(class phys_contact_manifold* cman) -> void
{
  return Zynamic::Forward<public void (class phys_contact_manifold*)>(L"gjk_cylinder_t::get_feature")(cman);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_cylinder_t::calc_aabb(const class phys_mat44& xform_, class phys_vec3* aabb_min, class phys_vec3* aabb_max) -> void
{
  return Zynamic::Forward<public void (const class phys_mat44&, class phys_vec3*, class phys_vec3*)>(L"gjk_cylinder_t::calc_aabb")(xform_, aabb_min, aabb_max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_cylinder_t::get_type() -> const unsigned int
{
  return Zynamic::Forward<public const unsigned int ()>(L"gjk_cylinder_t::get_type")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_cylinder_t::is_polyhedron() -> bool
{
  return Zynamic::Forward<public bool ()>(L"gjk_cylinder_t::is_polyhedron")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_cylinder_t::get_geom_radius() -> const float
{
  return Zynamic::Forward<public const float ()>(L"gjk_cylinder_t::get_geom_radius")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_polygon_cylinder_t::poly_verts::poly_verts() -> void
{
  return Zynamic::Forward<public void ()>(L"gjk_polygon_cylinder_t::poly_verts::poly_verts")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_polygon_cylinder_t::poly_verts::support(const class phys_vec3& v) -> const int
{
  return Zynamic::Forward<public const int (const class phys_vec3&)>(L"gjk_polygon_cylinder_t::poly_verts::support")(v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_polygon_cylinder_t::poly_verts::get_co_si(const int i, float* co_, float* si_) -> void
{
  return Zynamic::Forward<public void (const int, float*, float*)>(L"gjk_polygon_cylinder_t::poly_verts::get_co_si")(i, co_, si_);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_polygon_cylinder_t::support(const class phys_vec3& v, class phys_vec3* support_vert, class phys_vec3* support_ind) -> void
{
  return Zynamic::Forward<public void (const class phys_vec3&, class phys_vec3*, class phys_vec3*)>(L"gjk_polygon_cylinder_t::support")(v, support_vert, support_ind);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_polygon_cylinder_t::get_simplex(const struct cached_simplex_info& cache_info, const int index_count, class phys_vec3* simplex_verts, class phys_vec3* simplex_inds) -> void
{
  return Zynamic::Forward<public void (const struct cached_simplex_info&, const int, class phys_vec3*, class phys_vec3*)>(L"gjk_polygon_cylinder_t::get_simplex")(cache_info, index_count, simplex_verts, simplex_inds);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_polygon_cylinder_t::calc_disc_aabb(const class phys_vec3& axis, const float radius, class phys_vec3* aabb_min, class phys_vec3* aabb_max) -> void
{
  return Zynamic::Forward<public void (const class phys_vec3&, const float, class phys_vec3*, class phys_vec3*)>(L"gjk_polygon_cylinder_t::calc_disc_aabb")(axis, radius, aabb_min, aabb_max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_polygon_cylinder_t::calc_aabb(const class phys_mat44& xform, class phys_vec3* aabb_min, class phys_vec3* aabb_max) -> void
{
  return Zynamic::Forward<public void (const class phys_mat44&, class phys_vec3*, class phys_vec3*)>(L"gjk_polygon_cylinder_t::calc_aabb")(xform, aabb_min, aabb_max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_polygon_cylinder_t::get_type() -> const unsigned int
{
  return Zynamic::Forward<public const unsigned int ()>(L"gjk_polygon_cylinder_t::get_type")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_polygon_cylinder_t::get_geom_radius() -> const float
{
  return Zynamic::Forward<public const float ()>(L"gjk_polygon_cylinder_t::get_geom_radius")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_geom_list_t::add_geom(struct gjk_base_t* geom) -> void
{
  return Zynamic::Forward<public void (struct gjk_base_t*)>(L"gjk_geom_list_t::add_geom")(geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_geom_list_t::get_geom_count() -> int
{
  return Zynamic::Forward<public int ()>(L"gjk_geom_list_t::get_geom_count")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto gjk_geom_list_t::comp_aabb_loc(class phys_vec3* aabb_mn_loc, class phys_vec3* aabb_mx_loc) -> void
{
  return Zynamic::Forward<public void (class phys_vec3*, class phys_vec3*)>(L"gjk_geom_list_t::comp_aabb_loc")(aabb_mn_loc, aabb_mx_loc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto create_gjk_geom_collision_visitor::allocate(const int size, const int alignment, const bool no_error) -> void*
{
  return Zynamic::Forward<public void* (const int, const int, const bool)>(L"create_gjk_geom_collision_visitor::allocate")(size, alignment, no_error);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto create_gjk_geom_collision_visitor::query_create_prolog(const void* geom) -> const bool
{
  return Zynamic::Forward<public const bool (const void*)>(L"create_gjk_geom_collision_visitor::query_create_prolog")(geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto create_gjk_geom_collision_visitor::query_create_epilog(struct gjk_base_t* gjk_geom) -> void
{
  return Zynamic::Forward<public void (struct gjk_base_t*)>(L"create_gjk_geom_collision_visitor::query_create_epilog")(gjk_geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto destroy_gjk_geom(struct gjk_geom_list_t* gjk_geom_list) -> void
{
  return Zynamic::Forward<void (struct gjk_geom_list_t*)>(L"destroy_gjk_geom")(gjk_geom_list);
}

#endif // __UNIMPLEMENTED__
