//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto set_cpi_params(class contact_point_info* cpi, class phys_collision_pair* pcp) -> void
{
  return Zynamic::Forward<void (class contact_point_info*, class phys_collision_pair*)>(L"set_cpi_params")(cpi, pcp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto process_dynent_hits() -> void
{
  return Zynamic::Forward<void ()>(L"process_dynent_hits")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dynamic_ent_aa::has_auto_activated() -> bool
{
  return Zynamic::Forward<public bool ()>(L"dynamic_ent_aa::has_auto_activated")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dynamic_ent_aa::auto_activate(class broad_phase_info* bpi_impactor) -> void
{
  return Zynamic::Forward<public void (class broad_phase_info*)>(L"dynamic_ent_aa::auto_activate")(bpi_impactor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto process_destructible_hits() -> void
{
  return Zynamic::Forward<void ()>(L"process_destructible_hits")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto destructible_ent_aa::auto_activate(class broad_phase_info* bpi_impactor) -> void
{
  return Zynamic::Forward<public void (class broad_phase_info*)>(L"destructible_ent_aa::auto_activate")(bpi_impactor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_physics_collision_visitor::allocate(const int size, const int alignment, const bool no_error) -> void*
{
  return Zynamic::Forward<public void* (const int, const int, const bool)>(L"gjk_physics_collision_visitor::allocate")(size, alignment, no_error);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_physics_collision_visitor::get_local_query_aabb(float* local_query_aabb_min, float* local_query_aabb_max) -> void
{
  return Zynamic::Forward<public void (float*, float*)>(L"gjk_physics_collision_visitor::get_local_query_aabb")(local_query_aabb_min, local_query_aabb_max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_physics_collision_visitor::query_create_prolog(const void* geom) -> const bool
{
  return Zynamic::Forward<public const bool (const void*)>(L"gjk_physics_collision_visitor::query_create_prolog")(geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_physics_collision_visitor::query_create_epilog(struct gjk_base_t* gjk_geom) -> void
{
  return Zynamic::Forward<public void (struct gjk_base_t*)>(L"gjk_physics_collision_visitor::query_create_epilog")(gjk_geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_physics_collision_visitor::query_create_prolog_1(const float* local_aabb_min, const float* local_aabb_max, const void* geom) -> const bool
{
  return Zynamic::Forward<public const bool (const float*, const float*, const void*)>(L"gjk_physics_collision_visitor::query_create_prolog_1")(local_aabb_min, local_aabb_max, geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_physics_collision_visitor::set_local_query_info(const void* entity) -> void
{
  return Zynamic::Forward<public void (const void*)>(L"gjk_physics_collision_visitor::set_local_query_info")(entity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_ent_mat(class gjk_physics_collision_visitor* collision_visitor) -> class phys_mat44*
{
  return Zynamic::Forward<class phys_mat44* (class gjk_physics_collision_visitor*)>(L"create_ent_mat")(collision_visitor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_ent_aac(class gjk_physics_collision_visitor* collision_visitor) -> class phys_auto_activate_callback*
{
  return Zynamic::Forward<class phys_auto_activate_callback* (class gjk_physics_collision_visitor*)>(L"create_ent_aac")(collision_visitor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto get_entity(class gjk_physics_collision_visitor* collision_visitor) -> const void*
{
  return Zynamic::Forward<const void* (class gjk_physics_collision_visitor*)>(L"get_entity")(collision_visitor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto get_database_id(class gjk_physics_collision_visitor* collision_visitor) -> const class bpei_database_id
{
  return Zynamic::Forward<const class bpei_database_id (class gjk_physics_collision_visitor*)>(L"get_database_id")(collision_visitor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_entity_bpi(class gjk_physics_collision_visitor* collision_visitor, const int mask) -> void
{
  return Zynamic::Forward<void (class gjk_physics_collision_visitor*, const int)>(L"create_entity_bpi")(collision_visitor, mask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto are_intersecting(const class broad_phase_environment_query_input& bpeqi, const class phys_vec3& aabb_min, const class phys_vec3& aabb_max, const class phys_vec3& aabb_trans) -> bool
{
  return Zynamic::Forward<bool (const class broad_phase_environment_query_input&, const class phys_vec3&, const class phys_vec3&, const class phys_vec3&)>(L"are_intersecting")(bpeqi, aabb_min, aabb_max, aabb_trans);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_render_mutex''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_render_mutex''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto get_physics_contents_mask(const int phys_env_collision_flags) -> int
{
  return Zynamic::Forward<int (const int)>(L"get_physics_contents_mask")(phys_env_collision_flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto standard_query::query(const class broad_phase_environment_query_input& bpeqi, class broad_phase_environement_query_results* bpeqr) -> void
{
  return Zynamic::Forward<public void (const class broad_phase_environment_query_input&, class broad_phase_environement_query_results*)>(L"standard_query::query")(bpeqi, bpeqr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_standard_query''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_standard_query''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto set_bp_standard_query() -> void
{
  return Zynamic::Forward<void ()>(L"set_bp_standard_query")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto debug_callback(void* data) -> void
{
  return Zynamic::Forward<void (void*)>(L"debug_callback")(data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto set_debug_callback() -> void
{
  return Zynamic::Forward<void ()>(L"set_debug_callback")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_wpop_iter''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_wpop_iter''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_wpop_iter_end''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_wpop_iter_end''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto wheel_collision_worker(struct jqBatch* pBatch) -> int
{
  return Zynamic::Forward<int (struct jqBatch*)>(L"wheel_collision_worker")(pBatch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'wheelCollisionModule''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'wheelCollisionModule''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto prop_system_collision_process() -> void
{
  return Zynamic::Forward<void ()>(L"prop_system_collision_process")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GetUserData(int id) -> struct PhysObjUserData*
{
  return Zynamic::Forward<struct PhysObjUserData* (int)>(L"Phys_GetUserData")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTraceResultsRigidBody(const struct trace_t& traceResults) -> class rigid_body*
{
  return Zynamic::Forward<class rigid_body* (const struct trace_t&)>(L"GetTraceResultsRigidBody")(traceResults);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto collide_vehicle_wheels(struct PhysObjUserData& userData) -> void
{
  return Zynamic::Forward<void (struct PhysObjUserData&)>(L"collide_vehicle_wheels")(userData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_generic_avl_map_node_allocator''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_generic_avl_map_node_allocator''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto generic_avl_map_add(class phys_inplace_avl_tree<unsigned int, generic_avl_map_node_t, generic_avl_map_node_t>* gam, void* data, const unsigned int avl_key) -> struct generic_avl_map_node_t*
{
  return Zynamic::Forward<struct generic_avl_map_node_t* (class phys_inplace_avl_tree<unsigned int,generic_avl_map_node_t,generic_avl_map_node_t>*, void*, const unsigned int)>(L"generic_avl_map_add")(gam, data, avl_key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto generic_avl_map_destroy(class phys_inplace_avl_tree<unsigned int, generic_avl_map_node_t, generic_avl_map_node_t>* gam, const unsigned int avl_key) -> void*
{
  return Zynamic::Forward<void* (class phys_inplace_avl_tree<unsigned int,generic_avl_map_node_t,generic_avl_map_node_t>*, const unsigned int)>(L"generic_avl_map_destroy")(gam, avl_key);
}

#endif // __UNIMPLEMENTED__
