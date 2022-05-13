//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'proftimer_physics_frame_advance''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'proftimer_physics_frame_advance''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'physGlob''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'physGlob''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Nitrous_ForEachBody<void (__cdecl*)(PhysObjUserData&, float)>(function* func, float t) -> void
{
  return Zynamic::Forward<void (function *, float)>(L"Nitrous_ForEachBody<void (__cdecl*)(PhysObjUserData &,float)>")(func, t);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_Init() -> void
{
  return Zynamic::Forward<void ()>(L"Phys_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_broad_phase_info(class rigid_body* body) -> void
{
  return Zynamic::Forward<void (class rigid_body*)>(L"create_broad_phase_info")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto destroy_broad_phase_info(class rigid_body* body) -> void
{
  return Zynamic::Forward<void (class rigid_body*)>(L"destroy_broad_phase_info")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CreateUserData(int worldIndex) -> struct PhysObjUserData*
{
  return Zynamic::Forward<struct PhysObjUserData* (int)>(L"Phys_CreateUserData")(worldIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_DestroyUserData(int worldIndex, struct PhysObjUserData* userData) -> void
{
  return Zynamic::Forward<void (int, struct PhysObjUserData*)>(L"Phys_DestroyUserData")(worldIndex, userData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CreateUserBody(float* position, const int id, enum PhysicsGeomType geomType) -> int
{
  return Zynamic::Forward<int (float*, const int, enum PhysicsGeomType)>(L"Phys_CreateUserBody")(position, id, geomType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CreateBodyFromState(int worldIndex, const struct BodyState* state, struct gjk_geom_list_t* gjk_geom_list, const bool do_collision_test) -> int
{
  return Zynamic::Forward<int (int, const struct BodyState*, struct gjk_geom_list_t*, const bool)>(L"Phys_CreateBodyFromState")(worldIndex, state, gjk_geom_list, do_collision_test);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjCreateAxis(int worldIndex, const float* position, const float* axis[0x3], const float* velocity, const struct PhysPreset* physPreset, struct gjk_geom_list_t* gjk_geom_list, int id, const bool do_collision_test) -> int
{
  return Zynamic::Forward<int (int, const float*, const float*[0x3], const float*, const struct PhysPreset*, struct gjk_geom_list_t*, int, const bool)>(L"Phys_ObjCreateAxis")(worldIndex, position, axis, velocity, physPreset, gjk_geom_list, id, do_collision_test);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjCreate(int worldIndex, const float* position, const float* quat, const float* velocity, const struct PhysPreset* physPreset, struct gjk_geom_list_t* gjk_geom_list, const bool do_collision_test, int id) -> int
{
  return Zynamic::Forward<int (int, const float*, const float*, const float*, const struct PhysPreset*, struct gjk_geom_list_t*, const bool, int)>(L"Phys_ObjCreate")(worldIndex, position, quat, velocity, physPreset, gjk_geom_list, do_collision_test, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetPosition(int id, const float* newPosition) -> void
{
  return Zynamic::Forward<void (int, const float*)>(L"Phys_ObjSetPosition")(id, newPosition);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetOrientation(int id, const float* newPosition, const float* newOrientation) -> void
{
  return Zynamic::Forward<void (int, const float*, const float*)>(L"Phys_ObjSetOrientation")(id, newPosition, newOrientation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetAngularVelocity(int id, const float* angularVel) -> void
{
  return Zynamic::Forward<void (int, const float*)>(L"Phys_ObjSetAngularVelocity")(id, angularVel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetVelocity(int id, const float* velocity) -> void
{
  return Zynamic::Forward<void (int, const float*)>(L"Phys_ObjSetVelocity")(id, velocity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjSetAngularVelocityRaw(int id, const float* angularVel) -> void
{
  return Zynamic::Forward<void (int, const float*)>(L"Phys_ObjSetAngularVelocityRaw")(id, angularVel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetPosition(int id, float* outPosition, float* outRotation[0x3]) -> void
{
  return Zynamic::Forward<void (int, float*, float*[0x3])>(L"Phys_ObjGetPosition")(id, outPosition, outRotation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetVelocities(int id, float* tvel, float* avel) -> void
{
  return Zynamic::Forward<void (int, float*, float*)>(L"Phys_ObjGetVelocities")(id, tvel, avel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetCenterOfMass(int id, float* outPosition) -> void
{
  return Zynamic::Forward<void (int, float*)>(L"Phys_ObjGetCenterOfMass")(id, outPosition);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjAddCollFlags(int physObjId, int collFlags) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Phys_ObjAddCollFlags")(physObjId, collFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjRemoveCollFlags(int physObjId, int collFlags) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Phys_ObjRemoveCollFlags")(physObjId, collFlags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto fixup_wheel_constraints(class rigid_body* rb) -> void
{
  return Zynamic::Forward<void (class rigid_body*)>(L"fixup_wheel_constraints")(rb);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjDestroy(int worldIndex, int id) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Phys_ObjDestroy")(worldIndex, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_AddCacheImpulses() -> void
{
  return Zynamic::Forward<void ()>(L"Phys_AddCacheImpulses")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjAddCustomForce(int physObjId, const float* hitPos, const float* hitDir, const int mod, struct PhysPreset* physPreset) -> void
{
  return Zynamic::Forward<void (int, const float*, const float*, const int, struct PhysPreset*)>(L"Phys_ObjAddCustomForce")(physObjId, hitPos, hitDir, mod, physPreset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjAddForce(int id, const float* worldPos, const float* impulse, const bool relative) -> void
{
  return Zynamic::Forward<void (int, const float*, const float*, const bool)>(L"Phys_ObjAddForce")(id, worldPos, impulse, relative);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjAddTorque(int id, const float* torque) -> void
{
  return Zynamic::Forward<void (int, const float*)>(L"Phys_ObjAddTorque")(id, torque);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_TweakBulletImpact(float* worldPos, float* bulletDir, const float* centerOfMass) -> void
{
  return Zynamic::Forward<void (float*, float*, const float*)>(L"Phys_TweakBulletImpact")(worldPos, bulletDir, centerOfMass);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjBulletImpact(int id, const float* worldPosRaw, const float* bulletDirRaw, float bulletSpeed, float scale) -> void
{
  return Zynamic::Forward<void (int, const float*, const float*, float, float)>(L"Phys_ObjBulletImpact")(id, worldPosRaw, bulletDirRaw, bulletSpeed, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_DebugRender(struct PhysObjUserData& userData, float deltaT) -> void
{
  return Zynamic::Forward<void (struct PhysObjUserData&, float)>(L"Phys_DebugRender")(userData, deltaT);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_BodyGrabSnapshotNitrous(struct PhysObjUserData& userData, float deltaT) -> void
{
  return Zynamic::Forward<void (struct PhysObjUserData&, float)>(L"Phys_BodyGrabSnapshotNitrous")(userData, deltaT);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetSnapshot(int id, float* outPos, float* outMat[0x3]) -> int
{
  return Zynamic::Forward<int (int, float*, float*[0x3])>(L"Phys_ObjGetSnapshot")(id, outPos, outMat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_RenderBulletMeshInfo(float* pos, const struct XModel* model, const char* type, int numTriangles, float avgArea) -> void
{
  return Zynamic::Forward<void (float*, const struct XModel*, const char*, int, float)>(L"Phys_RenderBulletMeshInfo")(pos, model, type, numTriangles, avgArea);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ComputeStringPosition(const float* start, const float* end, float* position) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"Phys_ComputeStringPosition")(start, end, position);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_FindAndRenderBulletMesh(const float* start, const float* end, int contentmask, bool showNormals) -> void
{
  return Zynamic::Forward<void (const float*, const float*, int, bool)>(L"Phys_FindAndRenderBulletMesh")(start, end, contentmask, showNormals);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto create_chull(class phys_convex_hull& pch) -> struct chull_t*
{
  return Zynamic::Forward<struct chull_t* (class phys_convex_hull&)>(L"create_chull")(pch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto free_chull(struct chull_t* first) -> void
{
  return Zynamic::Forward<void (struct chull_t*)>(L"free_chull")(first);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'entities_map''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'entities_map''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto chull_list_add(struct chull_t* chull, const unsigned int key) -> void
{
  return Zynamic::Forward<void (struct chull_t*, const unsigned int)>(L"chull_list_add")(chull, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto free_chull_lists() -> void
{
  return Zynamic::Forward<void ()>(L"free_chull_lists")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_hull''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_hull''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'TRACKINST_g_hull''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'TRACKINST_g_hull''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto generate_brush_chull(const struct cbrush_t* brush) -> struct chull_t*
{
  return Zynamic::Forward<struct chull_t* (const struct cbrush_t*)>(L"generate_brush_chull")(brush);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto generate_partition_chull(const struct CollisionAabbTree* tree) -> struct chull_t*
{
  return Zynamic::Forward<struct chull_t* (const struct CollisionAabbTree*)>(L"generate_partition_chull")(tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto generate_brushmodel_chull_r(struct cLeafBrushNode_s* node, struct chull_t** hull) -> void
{
  return Zynamic::Forward<void (struct cLeafBrushNode_s*, struct chull_t**)>(L"generate_brushmodel_chull_r")(node, hull);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto generate_brushmodel_chull(int brushmodel) -> struct chull_t*
{
  return Zynamic::Forward<struct chull_t* (int)>(L"generate_brushmodel_chull")(brushmodel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto generate_collmap_chull(struct PhysGeomList* geomList) -> struct chull_t*
{
  return Zynamic::Forward<struct chull_t* (struct PhysGeomList*)>(L"generate_collmap_chull")(geomList);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto get_collmap_chull(struct PhysGeomList* geomList, unsigned int key) -> struct chull_t*
{
  return Zynamic::Forward<struct chull_t* (struct PhysGeomList*, unsigned int)>(L"get_collmap_chull")(geomList, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto get_brushmodel_chull(int brushmodel, unsigned int key) -> struct chull_t*
{
  return Zynamic::Forward<struct chull_t* (int, unsigned int)>(L"get_brushmodel_chull")(brushmodel, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto get_brush_chull(const struct cbrush_t* brush) -> struct chull_t*
{
  return Zynamic::Forward<struct chull_t* (const struct cbrush_t*)>(L"get_brush_chull")(brush);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto get_partition_chull(const struct CollisionAabbTree* tree) -> struct chull_t*
{
  return Zynamic::Forward<struct chull_t* (const struct CollisionAabbTree*)>(L"get_partition_chull")(tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SortDEntsByDist(const void* a, const void* b) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"SortDEntsByDist")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_FindAndRenderEntityBrushes(const float* pos, int contentmask) -> void
{
  return Zynamic::Forward<void (const float*, int)>(L"Phys_FindAndRenderEntityBrushes")(pos, contentmask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto colgeom_debug_renderer_t::reset() -> void
{
  return Zynamic::Forward<public void ()>(L"colgeom_debug_renderer_t::reset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto colgeom_debug_renderer_t::visit(const struct CollisionAabbTree* tree) -> void
{
  return Zynamic::Forward<public void (const struct CollisionAabbTree*)>(L"colgeom_debug_renderer_t::visit")(tree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto colgeom_debug_renderer_t::visit(const struct cbrush_t* brush) -> void
{
  return Zynamic::Forward<public void (const struct cbrush_t*)>(L"colgeom_debug_renderer_t::visit")(brush);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto colgeom_debug_renderer_t::update(const float* _mn, const float* _mx, int mask, const float* expand_vec) -> void
{
  return Zynamic::Forward<public void (const float*, const float*, int, const float*)>(L"colgeom_debug_renderer_t::update")(_mn, _mx, mask, expand_vec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_DebugRenderChanged() -> bool
{
  return Zynamic::Forward<bool ()>(L"Phys_DebugRenderChanged")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GetMaskFromDVar() -> int
{
  return Zynamic::Forward<int ()>(L"Phys_GetMaskFromDVar")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_RenderWorldCollMesh(const float* pos, bool bRenderStaticCollision, bool bRenderBrushes) -> void
{
  return Zynamic::Forward<void (const float*, bool, bool)>(L"Phys_RenderWorldCollMesh")(pos, bRenderStaticCollision, bRenderBrushes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto debug_loop() -> void
{
  return Zynamic::Forward<void ()>(L"debug_loop")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SortModelsFunc(const void* a, const void* b) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"SortModelsFunc")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto print_smodel(struct cStaticModel_s* smodel, int refcount, const float* dims) -> void
{
  return Zynamic::Forward<void (struct cStaticModel_s*, int, const float*)>(L"print_smodel")(smodel, refcount, dims);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto print_static_models_stats() -> void
{
  return Zynamic::Forward<void ()>(L"print_static_models_stats")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto draw_static_models_bounds() -> void
{
  return Zynamic::Forward<void ()>(L"draw_static_models_bounds")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_pop_iter''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_pop_iter''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'g_pop_iter_end''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'g_pop_iter_end''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto buoyancy_worker(struct jqBatch* pBatch) -> int
{
  return Zynamic::Forward<int (struct jqBatch*)>(L"buoyancy_worker")(pBatch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'buoyancyModule''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'buoyancyModule''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UpdateRigidBody(float delta_t) -> void
{
  return Zynamic::Forward<void (float)>(L"UpdateRigidBody")(delta_t);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CollisionCallback() -> void
{
  return Zynamic::Forward<void ()>(L"Phys_CollisionCallback")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ShouldCollideCallback(const class broad_phase_base* bpi1, const class broad_phase_base* bpi2) -> bool
{
  return Zynamic::Forward<bool (const class broad_phase_base*, const class broad_phase_base*)>(L"Phys_ShouldCollideCallback")(bpi1, bpi2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PhysicsSystem_Update() -> void
{
  return Zynamic::Forward<void ()>(L"PhysicsSystem_Update")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_RunToTime(int timeNow) -> void
{
  return Zynamic::Forward<void (int)>(L"Phys_RunToTime")(timeNow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjGetInterpolatedState(int id, float* outPos, float* outQuat) -> void
{
  return Zynamic::Forward<void (int, float*, float*)>(L"Phys_ObjGetInterpolatedState")(id, outPos, outQuat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_SetUserBody(int id, float* position) -> void
{
  return Zynamic::Forward<void (int, float*)>(L"Phys_SetUserBody")(id, position);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjIsAsleep(int id) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Phys_ObjIsAsleep")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ObjIsAsleepSingle(int id) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Phys_ObjIsAsleepSingle")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_SetHingeParams(int id, float motorSpeed, float damp, float lowStop, float highStop) -> void
{
  return Zynamic::Forward<void (int, float, float, float, float)>(L"Phys_SetHingeParams")(id, motorSpeed, damp, lowStop, highStop);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CreateHinge(int obj1, int obj2, const float* anchor, const float* axis, float motorSpeed, float damp, float lowStop, float highStop) -> int
{
  return Zynamic::Forward<int (int, int, const float*, const float*, float, float, float, float)>(L"Phys_CreateHinge")(obj1, obj2, anchor, axis, motorSpeed, damp, lowStop, highStop);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_SetAngularMotorParams(int id, const float* motorSpeeds, const float* damp, const float* lowStops, const float* highStops) -> void
{
  return Zynamic::Forward<void (int, const float*, const float*, const float*, const float*)>(L"Phys_SetAngularMotorParams")(id, motorSpeeds, damp, lowStops, highStops);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CreateSwivel(int obj1, int obj2, const float* anchor, int numAxes, const float* axes[0x3], const float* motorSpeeds, const float* motorFMaxs, const float* lowStops, const float* highStops) -> int
{
  return Zynamic::Forward<int (int, int, const float*, int, const float*[0x3], const float*, const float*, const float*, const float*)>(L"Phys_CreateSwivel")(obj1, obj2, anchor, numAxes, axes, motorSpeeds, motorFMaxs, lowStops, highStops);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CalcPreset(struct PhysPreset* physPreset, float* dims, int surfaceType) -> void
{
  return Zynamic::Forward<void (struct PhysPreset*, float*, int)>(L"Phys_CalcPreset")(physPreset, dims, surfaceType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GetCurrentTime() -> int
{
  return Zynamic::Forward<int ()>(L"Phys_GetCurrentTime")();
}

#endif // __UNIMPLEMENTED__
