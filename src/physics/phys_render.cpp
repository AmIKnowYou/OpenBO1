//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DebugPatchesAndBrushesProlog() -> void
{
  return Zynamic::Forward<void ()>(L"DebugPatchesAndBrushesProlog")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DebugPatchesAndBrushesEpilog() -> void
{
  return Zynamic::Forward<void ()>(L"DebugPatchesAndBrushesEpilog")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto debug_brush_info_t::find_index_in_brush(const struct cbrush_t* brush, const float* v) -> unsigned short
{
  return Zynamic::Forward<public unsigned short (const struct cbrush_t*, const float*)>(L"debug_brush_info_t::find_index_in_brush")(brush, v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto debug_brush_info_t::add_brush(const struct cbrush_t* brush, const class phys_mat44* mat) -> void
{
  return Zynamic::Forward<public void (const struct cbrush_t*, const class phys_mat44*)>(L"debug_brush_info_t::add_brush")(brush, mat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto debug_patch_info_t::find_index_in_clipmap(const struct CollisionAabbTree* tree, const float* v) -> unsigned int
{
  return Zynamic::Forward<public unsigned int (const struct CollisionAabbTree*, const float*)>(L"debug_patch_info_t::find_index_in_clipmap")(tree, v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto debug_patch_info_t::add_patch(const struct CollisionAabbTree* tree) -> void
{
  return Zynamic::Forward<public void (const struct CollisionAabbTree*)>(L"debug_patch_info_t::add_patch")(tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto clear_debug_brushes_and_patches() -> void
{
  return Zynamic::Forward<void ()>(L"clear_debug_brushes_and_patches")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto add_debug_brush(const struct cbrush_t* brush, const class phys_mat44* mat) -> void
{
  return Zynamic::Forward<void (const struct cbrush_t*, const class phys_mat44*)>(L"add_debug_brush")(brush, mat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto add_debug_patch(const struct CollisionAabbTree* tree) -> void
{
  return Zynamic::Forward<void (const struct CollisionAabbTree*)>(L"add_debug_patch")(tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_debug_brushes() -> void
{
  return Zynamic::Forward<void ()>(L"render_debug_brushes")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_debug_patches_full() -> void
{
  return Zynamic::Forward<void ()>(L"render_debug_patches_full")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_debug_brushes_and_patches() -> void
{
  return Zynamic::Forward<void ()>(L"render_debug_brushes_and_patches")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_brush(const struct cbrush_t* brush, const class phys_mat44* xform, const float* color, bool bLinesOnly, const float* lightPos, bool persistent, bool ztest, const float* edgeColor) -> void
{
  return Zynamic::Forward<void (const struct cbrush_t*, const class phys_mat44*, const float*, bool, const float*, bool, bool, const float*)>(L"render_brush")(brush, xform, color, bLinesOnly, lightPos, persistent, ztest, edgeColor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto calc_color(const void* id, const float alpha, float* color) -> void
{
  return Zynamic::Forward<void (const void*, const float, float*)>(L"calc_color")(id, alpha, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_convex_partition(const struct CollisionAabbTree* tree) -> void
{
  return Zynamic::Forward<void (const struct CollisionAabbTree*)>(L"render_convex_partition")(tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_chull(const struct chull_t* first, const class phys_mat44* xform, const float* color) -> void
{
  return Zynamic::Forward<void (const struct chull_t*, const class phys_mat44*, const float*)>(L"render_chull")(first, xform, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_xmodel_chull(const struct XModel* model, const unsigned int key, const class phys_mat44* xform, const float* color) -> void
{
  return Zynamic::Forward<void (const struct XModel*, const unsigned int, const class phys_mat44*, const float*)>(L"render_xmodel_chull")(model, key, xform, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_brushmodel_chull(int brushmodel, unsigned int key, const class phys_mat44* xform, const float* color) -> void
{
  return Zynamic::Forward<void (int, unsigned int, const class phys_mat44*, const float*)>(L"render_brushmodel_chull")(brushmodel, key, xform, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_line(const float* p0, const float* p1, const float* color, int duration, int ztest) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, int, int)>(L"render_line")(p0, p1, color, duration, ztest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_line(const class phys_vec3& p0, const class phys_vec3& p1, const float* color, int duration, int ztest) -> void
{
  return Zynamic::Forward<void (const class phys_vec3&, const class phys_vec3&, const float*, int, int)>(L"render_line")(p0, p1, color, duration, ztest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_box(const class phys_vec3& mins, const class phys_vec3& maxs, const class phys_mat44& xform, const float* color, int duration) -> void
{
  return Zynamic::Forward<void (const class phys_vec3&, const class phys_vec3&, const class phys_mat44&, const float*, int)>(L"render_box")(mins, maxs, xform, color, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_box(const float* _mn, const float* _mx, const float* color, int duration) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, int)>(L"render_box")(_mn, _mx, color, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_box(const class phys_vec3& mins, const class phys_vec3& maxs, const float* color, int duration) -> void
{
  return Zynamic::Forward<void (const class phys_vec3&, const class phys_vec3&, const float*, int)>(L"render_box")(mins, maxs, color, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_gjk_geom(struct gjk_base_t* geom, const class phys_mat44& cg2w) -> void
{
  return Zynamic::Forward<void (struct gjk_base_t*, const class phys_mat44&)>(L"render_gjk_geom")(geom, cg2w);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto debug_render(struct PhysObjUserData* userData) -> void
{
  return Zynamic::Forward<void (struct PhysObjUserData*)>(L"debug_render")(userData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto clip_winding(class phys_static_array<phys_vec3, 512>& winding, const struct plane_lt& clip) -> void
{
  return Zynamic::Forward<void (class phys_static_array<phys_vec3,512>&, const struct plane_lt&)>(L"clip_winding")(winding, clip);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto init_winding(const struct plane_lt& plane, class phys_static_array<phys_vec3, 512>& winding) -> void
{
  return Zynamic::Forward<void (const struct plane_lt&, class phys_static_array<phys_vec3,512>&)>(L"init_winding")(plane, winding);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto calc_winding(const class phys_static_array<plane_lt, 512>& planes, int plane_index, class phys_static_array<phys_vec3, 512>& winding) -> void
{
  return Zynamic::Forward<void (const class phys_static_array<plane_lt,512>&, int, class phys_static_array<phys_vec3,512>&)>(L"calc_winding")(planes, plane_index, winding);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_DebugPoint(const class phys_vec3& pos, const float radius, const float* color) -> void
{
  return Zynamic::Forward<void (const class phys_vec3&, const float, const float*)>(L"Phys_DebugPoint")(pos, radius, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_DebugBox(const class phys_mat44& mat, const float* color, float scale) -> void
{
  return Zynamic::Forward<void (const class phys_mat44&, const float*, float)>(L"Phys_DebugBox")(mat, color, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_DebugBox(const class phys_mat44& mat, const class phys_vec3& dims, const float* color) -> void
{
  return Zynamic::Forward<void (const class phys_mat44&, const class phys_vec3&, const float*)>(L"Phys_DebugBox")(mat, dims, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_RenderBase(const class phys_mat44& mat, const float scale) -> void
{
  return Zynamic::Forward<void (const class phys_mat44&, const float)>(L"Phys_RenderBase")(mat, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_JointDebugRender(int id) -> void
{
  return Zynamic::Forward<void (int)>(L"Phys_JointDebugRender")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_contact(class rigid_body_constraint_contact* rbc) -> void
{
  return Zynamic::Forward<void (class rigid_body_constraint_contact*)>(L"render_contact")(rbc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_collision_tree(const struct CollisionAabbTree* tree, const float* color) -> void
{
  return Zynamic::Forward<void (const struct CollisionAabbTree*, const float*)>(L"render_collision_tree")(tree, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_prims(struct col_prim_t* prims, int nprims) -> void
{
  return Zynamic::Forward<void (struct col_prim_t*, int)>(L"render_prims")(prims, nprims);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GjkTraceGeom::Render() -> void
{
  return Zynamic::Forward<public void ()>(L"GjkTraceGeom::Render")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'GjkTraceGeom::geoms''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'GjkTraceGeom::geoms''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto render_debug_draw_gjk_trace_geom() -> void
{
  return Zynamic::Forward<void ()>(L"render_debug_draw_gjk_trace_geom")();
}

#endif // __UNIMPLEMENTED__
