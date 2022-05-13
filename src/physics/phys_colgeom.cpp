//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_empty_collision_visitor''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_empty_collision_visitor''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto xmodel_get_geomlist(const struct XModel* model, int bone_index) -> struct PhysGeomList*
{
  return Zynamic::Forward<struct PhysGeomList* (const struct XModel*, int)>(L"xmodel_get_geomlist")(model, bone_index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_aabb_t::create(const class phys_vec3& center, const class phys_vec3& dims, int stype, class gjk_collision_visitor* allocator) -> struct gjk_aabb_t*
{
  return Zynamic::Forward<public struct gjk_aabb_t* (const class phys_vec3&, const class phys_vec3&, int, class gjk_collision_visitor*)>(L"gjk_aabb_t::create")(center, dims, stype, allocator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_aabb_t::destroy(struct gjk_aabb_t* geom) -> void
{
  return Zynamic::Forward<public void (struct gjk_aabb_t*)>(L"gjk_aabb_t::destroy")(geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_obb_t::create(const class phys_mat44& xform, const class phys_vec3& dims, int stype, class gjk_collision_visitor* allocator) -> struct gjk_obb_t*
{
  return Zynamic::Forward<public struct gjk_obb_t* (const class phys_mat44&, const class phys_vec3&, int, class gjk_collision_visitor*)>(L"gjk_obb_t::create")(xform, dims, stype, allocator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_obb_t::destroy(struct gjk_obb_t* geom) -> void
{
  return Zynamic::Forward<public void (struct gjk_obb_t*)>(L"gjk_obb_t::destroy")(geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_brush_t::create(const struct cbrush_t* brush, const int stype, class gjk_collision_visitor* allocator) -> struct gjk_base_t*
{
  return Zynamic::Forward<public struct gjk_base_t* (const struct cbrush_t*, const int, class gjk_collision_visitor*)>(L"gjk_brush_t::create")(brush, stype, allocator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_brush_t::destroy(struct gjk_brush_t* geom) -> void
{
  return Zynamic::Forward<public void (struct gjk_brush_t*)>(L"gjk_brush_t::destroy")(geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_partition_t::create(const struct CollisionAabbTree* tree, class gjk_collision_visitor* allocator) -> struct gjk_partition_t*
{
  return Zynamic::Forward<public struct gjk_partition_t* (const struct CollisionAabbTree*, class gjk_collision_visitor*)>(L"gjk_partition_t::create")(tree, allocator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_partition_t::destroy(struct gjk_partition_t* geom) -> void
{
  return Zynamic::Forward<public void (struct gjk_partition_t*)>(L"gjk_partition_t::destroy")(geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_double_sphere_t::create(const class phys_vec3& c0, const class phys_vec3& c1, const float r, int stype, class gjk_collision_visitor* allocator) -> struct gjk_double_sphere_t*
{
  return Zynamic::Forward<public struct gjk_double_sphere_t* (const class phys_vec3&, const class phys_vec3&, const float, int, class gjk_collision_visitor*)>(L"gjk_double_sphere_t::create")(c0, c1, r, stype, allocator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_double_sphere_t::destroy(struct gjk_double_sphere_t* geom) -> void
{
  return Zynamic::Forward<public void (struct gjk_double_sphere_t*)>(L"gjk_double_sphere_t::destroy")(geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_cylinder_t::create(int _direction, float _halfHeight, float _radius, const class phys_mat44& _xform, int stype, class gjk_collision_visitor* allocator) -> struct gjk_cylinder_t*
{
  return Zynamic::Forward<public struct gjk_cylinder_t* (int, float, float, const class phys_mat44&, int, class gjk_collision_visitor*)>(L"gjk_cylinder_t::create")(_direction, _halfHeight, _radius, _xform, stype, allocator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_cylinder_t::destroy(struct gjk_cylinder_t* geom) -> void
{
  return Zynamic::Forward<public void (struct gjk_cylinder_t*)>(L"gjk_cylinder_t::destroy")(geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'gjk_polygon_cylinder_t::s_poly_verts''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'gjk_polygon_cylinder_t::s_poly_verts''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto setup_gjk_polygon_cylinder(const float* mins, const float* maxs, const float radius_adjust, struct gjk_polygon_cylinder_t* gjk_cylinder) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float, struct gjk_polygon_cylinder_t*)>(L"setup_gjk_polygon_cylinder")(mins, maxs, radius_adjust, gjk_cylinder);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_polygon_cylinder_t::create(const float& mins[0x3], const float& maxs[0x3], const float radius_adjust, const int stype, class gjk_collision_visitor* allocator) -> struct gjk_polygon_cylinder_t*
{
  return Zynamic::Forward<public struct gjk_polygon_cylinder_t* (const float&[0x3], const float&[0x3], const float, const int, class gjk_collision_visitor*)>(L"gjk_polygon_cylinder_t::create")(mins, maxs, radius_adjust, stype, allocator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto gjk_polygon_cylinder_t::destroy(struct gjk_polygon_cylinder_t* geom) -> void
{
  return Zynamic::Forward<public void (struct gjk_polygon_cylinder_t*)>(L"gjk_polygon_cylinder_t::destroy")(geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_phys_vec3_box_sgn''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_phys_vec3_box_sgn''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto destroy_gjk_geom(struct gjk_base_t* geom) -> void
{
  return Zynamic::Forward<void (struct gjk_base_t*)>(L"destroy_gjk_geom")(geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_aabb_gjk_geom(const float* mn, const float* mx, int stype, class gjk_collision_visitor* allocator) -> struct gjk_base_t*
{
  return Zynamic::Forward<struct gjk_base_t* (const float*, const float*, int, class gjk_collision_visitor*)>(L"create_aabb_gjk_geom")(mn, mx, stype, allocator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_obb_gjk_geom(const float* orientation[0x3], const float* offset, const float* halfLengths, int stype, class gjk_collision_visitor* allocator) -> struct gjk_base_t*
{
  return Zynamic::Forward<struct gjk_base_t* (const float*[0x3], const float*, const float*, int, class gjk_collision_visitor*)>(L"create_obb_gjk_geom")(orientation, offset, halfLengths, stype, allocator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_brush_gjk_geom(const struct cbrush_t* brush, int stype, class gjk_collision_visitor* allocator) -> struct gjk_base_t*
{
  return Zynamic::Forward<struct gjk_base_t* (const struct cbrush_t*, int, class gjk_collision_visitor*)>(L"create_brush_gjk_geom")(brush, stype, allocator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_capsule_gjk_geom(const float* center, float radius, float halfHeight, int direction, int stype, class gjk_collision_visitor* allocator) -> struct gjk_base_t*
{
  return Zynamic::Forward<struct gjk_base_t* (const float*, float, float, int, int, class gjk_collision_visitor*)>(L"create_capsule_gjk_geom")(center, radius, halfHeight, direction, stype, allocator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_cylinder_gjk_geom(const float* rot[0x3], const float* trans, float radius, float halfHeight, int stype, class gjk_collision_visitor* allocator) -> struct gjk_base_t*
{
  return Zynamic::Forward<struct gjk_base_t* (const float*[0x3], const float*, float, float, int, class gjk_collision_visitor*)>(L"create_cylinder_gjk_geom")(rot, trans, radius, halfHeight, stype, allocator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_brush_model_gjk_geom_r(struct cLeafBrushNode_s* node, int& index_base, class gjk_collision_visitor* allocator, const int contents_mask) -> void
{
  return Zynamic::Forward<void (struct cLeafBrushNode_s*, int&, class gjk_collision_visitor*, const int)>(L"create_brush_model_gjk_geom_r")(node, index_base, allocator, contents_mask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto query_brush_model_gjk_geom_visitor::visit(const struct cbrush_t* brush) -> void
{
  return Zynamic::Forward<public void (const struct cbrush_t*)>(L"query_brush_model_gjk_geom_visitor::visit")(brush);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto query_brush_model_gjk_geom_visitor::update(const float* _mn, const float* _mx, int _mask, const float* expand_vec) -> void
{
  return Zynamic::Forward<public void (const float*, const float*, int, const float*)>(L"query_brush_model_gjk_geom_visitor::update")(_mn, _mx, _mask, expand_vec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto query_brush_model_gjk_geom(unsigned short brushModel, const int contents_mask, class gjk_collision_visitor* allocator) -> void
{
  return Zynamic::Forward<void (unsigned short, const int, class gjk_collision_visitor*)>(L"query_brush_model_gjk_geom")(brushModel, contents_mask, allocator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_brush_model_gjk_geom(unsigned short brushModel, const int contents_mask, class gjk_collision_visitor* allocator) -> void
{
  return Zynamic::Forward<void (unsigned short, const int, class gjk_collision_visitor*)>(L"create_brush_model_gjk_geom")(brushModel, contents_mask, allocator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_xmodel_gjk_geom(const struct XModel* model, class gjk_collision_visitor* allocator, int bone_index, unsigned int brush_mask, bool b_fallback_to_bounding_box, const int contents_for_proxy_collision, class phys_mat44* worldMat) -> void
{
  return Zynamic::Forward<void (const struct XModel*, class gjk_collision_visitor*, int, unsigned int, bool, const int, class phys_mat44*)>(L"create_xmodel_gjk_geom")(model, allocator, bone_index, brush_mask, b_fallback_to_bounding_box, contents_for_proxy_collision, worldMat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_gjk_dobj_geom(struct DObj* obj, const struct cpose_t* pose, struct gentity_s* gent, const bool calc_bone_mats, unsigned int brush_mask, bool b_fallback_to_bounding_box, const int contents_for_proxy_collision, class gjk_collision_visitor* allocator) -> void
{
  return Zynamic::Forward<void (struct DObj*, const struct cpose_t*, struct gentity_s*, const bool, unsigned int, bool, const int, class gjk_collision_visitor*)>(L"create_gjk_dobj_geom")(obj, pose, gent, calc_bone_mats, brush_mask, b_fallback_to_bounding_box, contents_for_proxy_collision, allocator);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_gjk_geom(int localClientNum, const struct centity_s* cent, class gjk_collision_visitor* allocator, const bool calc_bone_mats, unsigned int brush_mask, bool b_fallback_to_bounding_box, bool b_use_smallerbox_for_characters) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*, class gjk_collision_visitor*, const bool, unsigned int, bool, bool)>(L"create_gjk_geom")(localClientNum, cent, allocator, calc_bone_mats, brush_mask, b_fallback_to_bounding_box, b_use_smallerbox_for_characters);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_gjk_geom(struct gentity_s* gent, class gjk_collision_visitor* allocator, const bool calc_bone_mats, unsigned int brush_mask, bool b_fallback_to_bounding_box) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, class gjk_collision_visitor*, const bool, unsigned int, bool)>(L"create_gjk_geom")(gent, allocator, calc_bone_mats, brush_mask, b_fallback_to_bounding_box);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_gjk_geom(const struct Glass* glass, class gjk_collision_visitor* allocator, unsigned int brush_mask) -> void
{
  return Zynamic::Forward<void (const struct Glass*, class gjk_collision_visitor*, unsigned int)>(L"create_gjk_geom")(glass, allocator, brush_mask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_gjk_geom(const struct DynEntityDef* dynEntDef, class gjk_collision_visitor* allocator, unsigned int brush_mask) -> void
{
  return Zynamic::Forward<void (const struct DynEntityDef*, class gjk_collision_visitor*, unsigned int)>(L"create_gjk_geom")(dynEntDef, allocator, brush_mask);
}

#endif // __UNIMPLEMENTED__
