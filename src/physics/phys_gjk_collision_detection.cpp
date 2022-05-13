//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto gjk_collision_epilog(const bool is_server_thread) -> void
{
  return Zynamic::Forward<void (const bool)>(L"gjk_collision_epilog")(is_server_thread);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto get_gjk_cache_info(class phys_heap_gjk_cache_system_avl_tree* gjk_cache, const struct gjk_base_t* cg1, const struct gjk_base_t* cg2) -> class phys_gjk_cache_info*
{
  return Zynamic::Forward<class phys_gjk_cache_info* (class phys_heap_gjk_cache_system_avl_tree*, const struct gjk_base_t*, const struct gjk_base_t*)>(L"get_gjk_cache_info")(gjk_cache, cg1, cg2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto gjk_query_output::reset_cache() -> void
{
  return Zynamic::Forward<private void ()>(L"gjk_query_output::reset_cache")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto gjk_query_output::calc_query_aabb(const struct gjk_query_input& input) -> void
{
  return Zynamic::Forward<private void (const struct gjk_query_input&)>(L"gjk_query_output::calc_query_aabb")(input);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::query_prolog(const struct gjk_query_input& input) -> void
{
  return Zynamic::Forward<public void (const struct gjk_query_input&)>(L"gjk_query_output::query_prolog")(input);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::query_epilog() -> void
{
  return Zynamic::Forward<public void ()>(L"gjk_query_output::query_epilog")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::allocate(const int size, const int alignment, const bool no_error) -> void*
{
  return Zynamic::Forward<public void* (const int, const int, const bool)>(L"gjk_query_output::allocate")(size, alignment, no_error);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::get_local_query_aabb(float* local_query_aabb_min, float* local_query_aabb_max) -> void
{
  return Zynamic::Forward<public void (float*, float*)>(L"gjk_query_output::get_local_query_aabb")(local_query_aabb_min, local_query_aabb_max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::query_create_prolog(const void* geom) -> const bool
{
  return Zynamic::Forward<public const bool (const void*)>(L"gjk_query_output::query_create_prolog")(geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::query_create_epilog(struct gjk_base_t* gjk_geom) -> void
{
  return Zynamic::Forward<public void (struct gjk_base_t*)>(L"gjk_query_output::query_create_epilog")(gjk_geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::query_create_prolog_1(const float* local_aabb_min, const float* local_aabb_max, const void* geom) -> const bool
{
  return Zynamic::Forward<public const bool (const float*, const float*, const void*)>(L"gjk_query_output::query_create_prolog_1")(local_aabb_min, local_aabb_max, geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::query_create_epilog_1(struct gjk_base_t* gjk_geom) -> void
{
  return Zynamic::Forward<public void (struct gjk_base_t*)>(L"gjk_query_output::query_create_epilog_1")(gjk_geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto gjk_query_output::get_ent_info(const unsigned int ent_id) -> class broad_phase_environment_info*
{
  return Zynamic::Forward<private class broad_phase_environment_info* (const unsigned int)>(L"gjk_query_output::get_ent_info")(ent_id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto gjk_query_output::set_local_query_info(const struct gjk_query_input& input, struct gjk_entity_info_t* ent_info) -> void
{
  return Zynamic::Forward<private void (const struct gjk_query_input&, struct gjk_entity_info_t*)>(L"gjk_query_output::set_local_query_info")(input, ent_info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::create_geom_info(struct gjk_base_t* cg, struct gjk_entity_info_t* ent_info, const float* aabb_min, const float* aabb_max) -> struct gjk_geom_info_t*
{
  return Zynamic::Forward<public struct gjk_geom_info_t* (struct gjk_base_t*, struct gjk_entity_info_t*, const float*, const float*)>(L"gjk_query_output::create_geom_info")(cg, ent_info, aabb_min, aabb_max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::create_entity_info() -> struct gjk_entity_info_t*
{
  return Zynamic::Forward<public struct gjk_entity_info_t* ()>(L"gjk_query_output::create_entity_info")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::add(const struct gjk_query_input& input, const struct CollisionPartition* partition, const struct CollisionAabbTree* tree) -> void
{
  return Zynamic::Forward<public void (const struct gjk_query_input&, const struct CollisionPartition*, const struct CollisionAabbTree*)>(L"gjk_query_output::add")(input, partition, tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::add(const struct gjk_query_input& input, const struct cbrush_t* brush, const float* query_mins, const float* query_maxs) -> void
{
  return Zynamic::Forward<public void (const struct gjk_query_input&, const struct cbrush_t*, const float*, const float*)>(L"gjk_query_output::add")(input, brush, query_mins, query_maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::add(const struct gjk_query_input& input, struct gentity_s* gent) -> void
{
  return Zynamic::Forward<public void (const struct gjk_query_input&, struct gentity_s*)>(L"gjk_query_output::add")(input, gent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::add(const struct gjk_query_input& input, struct centity_s* cent) -> void
{
  return Zynamic::Forward<public void (const struct gjk_query_input&, struct centity_s*)>(L"gjk_query_output::add")(input, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::add(const struct gjk_query_input& input, const struct Glass* glass) -> void
{
  return Zynamic::Forward<public void (const struct gjk_query_input&, const struct Glass*)>(L"gjk_query_output::add")(input, glass);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::add(const struct gjk_query_input& input, const struct DynEntityDef* dent) -> void
{
  return Zynamic::Forward<public void (const struct gjk_query_input&, const struct DynEntityDef*)>(L"gjk_query_output::add")(input, dent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto gjk_query_prims(const struct gjk_query_input& input, struct gjk_query_output* output) -> void
{
  return Zynamic::Forward<void (const struct gjk_query_input&, struct gjk_query_output*)>(L"gjk_query_prims")(input, output);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto gjk_query_terrain(const struct gjk_query_input& input, struct gjk_query_output* output) -> void
{
  return Zynamic::Forward<void (const struct gjk_query_input&, struct gjk_query_output*)>(L"gjk_query_terrain")(input, output);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto query_should_pass_gentity(const struct gjk_query_input& input, const struct gentity_s* gent) -> const bool
{
  return Zynamic::Forward<const bool (const struct gjk_query_input&, const struct gentity_s*)>(L"query_should_pass_gentity")(input, gent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto gjk_query_gents(const struct gjk_query_input& input, struct gjk_query_output* output) -> void
{
  return Zynamic::Forward<void (const struct gjk_query_input&, struct gjk_query_output*)>(L"gjk_query_gents")(input, output);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto gjk_query_cents(const struct gjk_query_input& input, struct gjk_query_output* output) -> void
{
  return Zynamic::Forward<void (const struct gjk_query_input&, struct gjk_query_output*)>(L"gjk_query_cents")(input, output);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto gjk_query_glass(const struct gjk_query_input& input, struct gjk_query_output* output) -> void
{
  return Zynamic::Forward<void (const struct gjk_query_input&, struct gjk_query_output*)>(L"gjk_query_glass")(input, output);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto gjk_query_dents(const struct gjk_query_input& input, struct gjk_query_output* output) -> void
{
  return Zynamic::Forward<void (const struct gjk_query_input&, struct gjk_query_output*)>(L"gjk_query_dents")(input, output);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto gjk_query(const struct gjk_query_input& input, struct gjk_query_output* output) -> void
{
  return Zynamic::Forward<void (const struct gjk_query_input&, struct gjk_query_output*)>(L"gjk_query")(input, output);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::cached_query_resize(const bool is_server_thread, class colgeom_visitor_inlined_t<200>* proximity_data, const int proximity_mask) -> void
{
  return Zynamic::Forward<public void (const bool, class colgeom_visitor_inlined_t<200>*, const int)>(L"gjk_query_output::cached_query_resize")(is_server_thread, proximity_data, proximity_mask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'CACHED_QUERY_RESIZE_EXTRA''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'CACHED_QUERY_RESIZE_EXTRA''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::cached_query_prolog(const bool is_server_thread, class colgeom_visitor_inlined_t<200>* proximity_data, const int proximity_mask, const class phys_vec3& start_origin) -> void
{
  return Zynamic::Forward<public void (const bool, class colgeom_visitor_inlined_t<200>*, const int, const class phys_vec3&)>(L"gjk_query_output::cached_query_prolog")(is_server_thread, proximity_data, proximity_mask, start_origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::cached_query_epilog() -> void
{
  return Zynamic::Forward<public void ()>(L"gjk_query_output::cached_query_epilog")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_query_output::accum_query_reset(const class phys_vec3& start_origin) -> void
{
  return Zynamic::Forward<public void (const class phys_vec3&)>(L"gjk_query_output::accum_query_reset")(start_origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto query_should_pass_entity(const struct gjk_query_input& input, struct gjk_entity_info_t* ent_info) -> const bool
{
  return Zynamic::Forward<const bool (const struct gjk_query_input&, struct gjk_entity_info_t*)>(L"query_should_pass_entity")(input, ent_info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto gjk_query_cached(const struct gjk_query_input& input, struct gjk_query_output* output) -> void
{
  return Zynamic::Forward<void (const struct gjk_query_input&, struct gjk_query_output*)>(L"gjk_query_cached")(input, output);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto setup_gjk_capsule(const float* mins, const float* maxs, const float radius_adjust, struct gjk_double_sphere_t* gjk_capsule) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float, struct gjk_double_sphere_t*)>(L"setup_gjk_capsule")(mins, maxs, radius_adjust, gjk_capsule);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto setup_gjk_cylinder(const float* mins, const float* maxs, const float radius_adjust, struct gjk_cylinder_t* gjk_cylinder) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float, struct gjk_cylinder_t*)>(L"setup_gjk_cylinder")(mins, maxs, radius_adjust, gjk_cylinder);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto adjust_gjk_polygon_cylinder_query_aabb(float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (float*, float*)>(L"adjust_gjk_polygon_cylinder_query_aabb")(mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_aabb_t::is_walkable(const class phys_vec3& hit_point, const class phys_vec3& up) -> const bool
{
  return Zynamic::Forward<public const bool (const class phys_vec3&, const class phys_vec3&)>(L"gjk_aabb_t::is_walkable")(hit_point, up);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto is_walkable(const struct cbrush_t* brush, const class phys_vec3& hit_point_loc, const class phys_vec3& up_loc) -> bool
{
  return Zynamic::Forward<bool (const struct cbrush_t*, const class phys_vec3&, const class phys_vec3&)>(L"is_walkable")(brush, hit_point_loc, up_loc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto is_walkable(const struct CollisionPartition* partition, const class phys_vec3& hit_point_loc, const class phys_vec3& up_loc) -> bool
{
  return Zynamic::Forward<bool (const struct CollisionPartition*, const class phys_vec3&, const class phys_vec3&)>(L"is_walkable")(partition, hit_point_loc, up_loc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto project(const class phys_vec3& point, class phys_static_array<geom_plane, 128>* list_geom_plane, class phys_vec3* result) -> void
{
  return Zynamic::Forward<void (const class phys_vec3&, class phys_static_array<geom_plane,128>*, class phys_vec3*)>(L"project")(point, list_geom_plane, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto get_material_from_brush(const struct cbrush_t* brush, int& sflags) -> void
{
  return Zynamic::Forward<void (const struct cbrush_t*, int&)>(L"get_material_from_brush")(brush, sflags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto fill_results(const struct gjk_trace_output_t& gto, const bool is_walkable, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct gjk_trace_output_t&, const bool, struct trace_t*)>(L"fill_results")(gto, is_walkable, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto fill_results_type_and_id(const struct gjk_trace_output_t& gto, struct trace_t* results) -> void
{
  return Zynamic::Forward<void (const struct gjk_trace_output_t&, struct trace_t*)>(L"fill_results_type_and_id")(gto, results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto fill_results_no_hit(struct trace_t* results) -> void
{
  return Zynamic::Forward<void (struct trace_t*)>(L"fill_results_no_hit")(results);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto is_walkable(const struct gjk_trace_output_t& gto) -> const bool
{
  return Zynamic::Forward<const bool (const struct gjk_trace_output_t&)>(L"is_walkable")(gto);
}

#endif // __UNIMPLEMENTED__
