//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto GlassPhysics::CreateAxis(const float* position, const float* axis[0x3], const float* tVel, const float* aVel, float mass, const float* localBBoxMin, const float* localBBoxMax) -> void
{
  return Zynamic::Forward<public void (const float*, const float*[0x3], const float*, const float*, float, const float*, const float*)>(L"GlassPhysics::CreateAxis")(position, axis, tVel, aVel, mass, localBBoxMin, localBBoxMax);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassPhysics::AddForce(const float* worldPos, const float* impulse) -> void
{
  return Zynamic::Forward<public void (const float*, const float*)>(L"GlassPhysics::AddForce")(worldPos, impulse);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassPhysics::SetVelocity(const float* t_vel) -> void
{
  return Zynamic::Forward<public void (const float*)>(L"GlassPhysics::SetVelocity")(t_vel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassPhysics::SetAngularVelocity(const float* a_vel) -> void
{
  return Zynamic::Forward<public void (const float*)>(L"GlassPhysics::SetAngularVelocity")(a_vel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassPhysics::Step(float deltaTime) -> void
{
  return Zynamic::Forward<public void (float)>(L"GlassPhysics::Step")(deltaTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto GlassPhysics::tensor_transform_principle(const class phys_vec3& diag, const class phys_mat44& mat, class phys_mat44* tensor) -> void
{
  return Zynamic::Forward<private void (const class phys_vec3&, const class phys_mat44&, class phys_mat44*)>(L"GlassPhysics::tensor_transform_principle")(diag, mat, tensor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto GlassPhysics::IntegrateVelocity(float deltaTime) -> void
{
  return Zynamic::Forward<private void (float)>(L"GlassPhysics::IntegrateVelocity")(deltaTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

private auto GlassPhysics::IntegratePos(float deltaTime) -> void
{
  return Zynamic::Forward<private void (float)>(L"GlassPhysics::IntegratePos")(deltaTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassPhysics::GetPosition(float* position, float* axis[0x3]) -> void
{
  return Zynamic::Forward<public void (float*, float*[0x3])>(L"GlassPhysics::GetPosition")(position, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec2IntesectLines(const float* a1, const float* a2, const float* b1, const float* b2, float* ret) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, const float*, const float*, float*)>(L"Vec2IntesectLines")(a1, a2, b1, b2, ret);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSegmentParam(const float* a1, const float* a2, const float* p) -> float
{
  return Zynamic::Forward<float (const float*, const float*, const float*)>(L"GetSegmentParam")(a1, a2, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec2IntersectSegments(const float* a1, const float* a2, const float* b1, const float* b2, float* ret) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, const float*, const float*, float*)>(L"Vec2IntersectSegments")(a1, a2, b1, b2, ret);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Outline::Init(void* ptr, unsigned char num) -> unsigned int
{
  return Zynamic::Forward<public unsigned int (void*, unsigned char)>(L"GlassShard::Outline::Init")(ptr, num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Outline::SetPointers(unsigned char* ptr) -> unsigned int
{
  return Zynamic::Forward<public unsigned int (unsigned char*)>(L"GlassShard::Outline::SetPointers")(ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Outline::operator=(const struct GlassShard::Outline& o) -> struct GlassShard::Outline&
{
  return Zynamic::Forward<public struct GlassShard::Outline& (const struct GlassShard::Outline&)>(L"GlassShard::Outline::operator=")(o);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Outline::Add(const float* pos) -> struct GlassShard::Outline::Vertex&
{
  return Zynamic::Forward<public struct GlassShard::Outline::Vertex& (const float*)>(L"GlassShard::Outline::Add")(pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Outline::Add(const float* dir, float len) -> struct GlassShard::Outline::Vertex&
{
  return Zynamic::Forward<public struct GlassShard::Outline::Vertex& (const float*, float)>(L"GlassShard::Outline::Add")(dir, len);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Outline::CloseOutline() -> bool
{
  return Zynamic::Forward<public bool ()>(L"GlassShard::Outline::CloseOutline")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Outline::GetBBox(float* mn, float* mx) -> void
{
  return Zynamic::Forward<public void (float*, float*)>(L"GlassShard::Outline::GetBBox")(mn, mx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Outline::Extent() -> float
{
  return Zynamic::Forward<public float ()>(L"GlassShard::Outline::Extent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Outline::Recenter(bool flip, float* offset) -> void
{
  return Zynamic::Forward<public void (bool, float*)>(L"GlassShard::Outline::Recenter")(flip, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Outline::HasNarrowAngle() -> bool
{
  return Zynamic::Forward<public bool ()>(L"GlassShard::Outline::HasNarrowAngle")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Outline::IsNarrow() -> bool
{
  return Zynamic::Forward<public bool ()>(L"GlassShard::Outline::IsNarrow")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Outline::Reverse() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassShard::Outline::Reverse")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Outline::GetNumIntersections(const float* start, const float* dir, float& nearestDist, int& nearestedge) -> int
{
  return Zynamic::Forward<public int (const float*, const float*, float&, int&)>(L"GlassShard::Outline::GetNumIntersections")(start, dir, nearestDist, nearestedge);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Outline::DoesIntersect(const float* start, const float* dir, float len, float padding) -> bool
{
  return Zynamic::Forward<public bool (const float*, const float*, float, float)>(L"GlassShard::Outline::DoesIntersect")(start, dir, len, padding);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Outline::GetNearestDistances(const float* p, struct GlassShard::Outline::EdgeDistance* dists, int nDists) -> void
{
  return Zynamic::Forward<public void (const float*, struct GlassShard::Outline::EdgeDistance*, int)>(L"GlassShard::Outline::GetNearestDistances")(p, dists, nDists);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Outline::Verify() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassShard::Outline::Verify")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Mesh::Clear() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassShard::Mesh::Clear")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Mesh::SetTriangles(void* ptr, const unsigned char* triangles, unsigned int numTriIdxs) -> void
{
  return Zynamic::Forward<public void (void*, const unsigned char*, unsigned int)>(L"GlassShard::Mesh::SetTriangles")(ptr, triangles, numTriIdxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Mesh::SetPointers(unsigned char* ptr) -> unsigned int
{
  return Zynamic::Forward<public unsigned int (unsigned char*)>(L"GlassShard::Mesh::SetPointers")(ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Mesh::Init(const struct GlassShard::Outline& outline, float thickness, const float* tangt) -> void
{
  return Zynamic::Forward<public void (const struct GlassShard::Outline&, float, const float*)>(L"GlassShard::Mesh::Init")(outline, thickness, tangt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Mesh::InitVertexList(unsigned char numOutlineVerts, struct GlassShardMeshVertex* verts) -> void
{
  return Zynamic::Forward<public void (unsigned char, struct GlassShardMeshVertex*)>(L"GlassShard::Mesh::InitVertexList")(numOutlineVerts, verts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Mesh::GetMemorySize(unsigned int numOutineVerts) -> unsigned int
{
  return Zynamic::Forward<public unsigned int (unsigned int)>(L"GlassShard::Mesh::GetMemorySize")(numOutineVerts);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Triangles::Triangles(const struct GlassShard::Outline* ol) -> void
{
  return Zynamic::Forward<public void (const struct GlassShard::Outline*)>(L"GlassShard::Triangles::Triangles")(ol);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Triangles::CalcCross(int idx1, int idx2, int idx3) -> float
{
  return Zynamic::Forward<public float (int, int, int)>(L"GlassShard::Triangles::CalcCross")(idx1, idx2, idx3);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Triangles::AddTri(int v1, int v2, int v3) -> bool
{
  return Zynamic::Forward<public bool (int, int, int)>(L"GlassShard::Triangles::AddTri")(v1, v2, v3);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsInside(const float* v1, const float* v2, const float* v3, const float* p) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, const float*, const float*)>(L"IsInside")(v1, v2, v3, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Triangles::Triangulate() -> bool
{
  return Zynamic::Forward<public bool ()>(L"GlassShard::Triangles::Triangulate")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto compareShards(const void* s1, const void* s2) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"compareShards")(s1, s2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Init() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassShard::Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Destroy() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassShard::Destroy")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::EdgeRatio() -> float
{
  return Zynamic::Forward<public float ()>(L"GlassShard::EdgeRatio")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::UnEdge() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassShard::UnEdge")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Create(const struct Glass* glass) -> bool
{
  return Zynamic::Forward<public bool (const struct Glass*)>(L"GlassShard::Create")(glass);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::CanSplit(float maxShardSize, float minShardSize) -> bool
{
  return Zynamic::Forward<public bool (float, float)>(L"GlassShard::CanSplit")(maxShardSize, minShardSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::CanSplit(bool shatter) -> bool
{
  return Zynamic::Forward<public bool (bool)>(L"GlassShard::CanSplit")(shatter);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Shatter(struct GlassShard** newShards, int maxNewShards) -> int
{
  return Zynamic::Forward<public int (struct GlassShard**, int)>(L"GlassShard::Shatter")(newShards, maxNewShards);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::InitPhysics(struct GlassShard** newShards, int numNewShards, float glassExtent, const float* pos, const float* dir) -> void
{
  return Zynamic::Forward<public void (struct GlassShard**, int, float, const float*, const float*)>(L"GlassShard::InitPhysics")(newShards, numNewShards, glassExtent, pos, dir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::InitMesh() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassShard::InitMesh")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::AllocateMemory(unsigned int nHull, const struct GlassShard::Triangles* triangles) -> bool
{
  return Zynamic::Forward<public bool (unsigned int, const struct GlassShard::Triangles*)>(L"GlassShard::AllocateMemory")(nHull, triangles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::FreeMemory() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassShard::FreeMemory")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Defrag() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassShard::Defrag")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::ToWorldPos(const float* pLocal, float* pWorld, bool is3D) -> void
{
  return Zynamic::Forward<public void (const float*, float*, bool)>(L"GlassShard::ToWorldPos")(pLocal, pWorld, is3D);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::ToWorldDir(const float* dLocal, float* dWorld, bool is3D) -> void
{
  return Zynamic::Forward<public void (const float*, float*, bool)>(L"GlassShard::ToWorldDir")(dLocal, dWorld, is3D);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::ToLocal(const float* pos, const float* dir, float* localPos, float* localDir) -> void
{
  return Zynamic::Forward<public void (const float*, const float*, float*, float*)>(L"GlassShard::ToLocal")(pos, dir, localPos, localDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Intersect(const float* pos, const float* dir, float* hitPoint) -> bool
{
  return Zynamic::Forward<public bool (const float*, const float*, float*)>(L"GlassShard::Intersect")(pos, dir, hitPoint);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::ExplosionEvent(const float* expOrigin, const float damageInner, const float damageOuter, const float radius, int mod) -> void
{
  return Zynamic::Forward<public void (const float*, const float, const float, const float, int)>(L"GlassShard::ExplosionEvent")(expOrigin, damageInner, damageOuter, radius, mod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::TracePoint(const float* p0, const float* p1, const float* dir, float length, const float* mins, const float* maxs) -> bool
{
  return Zynamic::Forward<public bool (const float*, const float*, const float*, float, const float*, const float*)>(L"GlassShard::TracePoint")(p0, p1, dir, length, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::GetLocalBBox(float* mins, float* maxs) -> void
{
  return Zynamic::Forward<public void (float*, float*)>(L"GlassShard::GetLocalBBox")(mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::UpdateBBox() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassShard::UpdateBBox")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Update(float deltaTime) -> void
{
  return Zynamic::Forward<public void (float)>(L"GlassShard::Update")(deltaTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::ChangeGroup() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassShard::ChangeGroup")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Remove(enum GlassShard::RemoveReason reason, bool delay) -> void
{
  return Zynamic::Forward<public void (enum GlassShard::RemoveReason, bool)>(L"GlassShard::Remove")(reason, delay);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::GenerateVerts(bool highLod, struct GfxPackedVertex* baseVerts, unsigned short vertsBaseIndex, unsigned short* idxOut) -> void
{
  return Zynamic::Forward<public void (bool, struct GfxPackedVertex*, unsigned short, unsigned short*)>(L"GlassShard::GenerateVerts")(highLod, baseVerts, vertsBaseIndex, idxOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Split(struct GlassShard** newShards, float minShardSize, unsigned int startEdge, float startEdgeParam) -> int
{
  return Zynamic::Forward<public int (struct GlassShard**, float, unsigned int, float)>(L"GlassShard::Split")(newShards, minShardSize, startEdge, startEdgeParam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Chip(const struct GlassShard::Outline::EdgeDistance* dist, const float* hitPoint, struct GlassShard** newShards, float minShardSize) -> int
{
  return Zynamic::Forward<public int (const struct GlassShard::Outline::EdgeDistance*, const float*, struct GlassShard**, float)>(L"GlassShard::Chip")(dist, hitPoint, newShards, minShardSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::InitSplitShards(struct GlassShard::Outline& outline1, struct GlassShard::Outline& outline2, struct GlassShard** newShards, float minShardSize) -> int
{
  return Zynamic::Forward<public int (struct GlassShard::Outline&, struct GlassShard::Outline&, struct GlassShard**, float)>(L"GlassShard::InitSplitShards")(outline1, outline2, newShards, minShardSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Init(const struct GlassShard* other, const struct GlassShard::Outline& newOutline, const float* offset) -> bool
{
  return Zynamic::Forward<public bool (const struct GlassShard*, const struct GlassShard::Outline&, const float*)>(L"GlassShard::Init")(other, newOutline, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::GetMass() -> float
{
  return Zynamic::Forward<public float ()>(L"GlassShard::GetMass")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::InitPhysicsObj(bool enableCollisions) -> bool
{
  return Zynamic::Forward<public bool (bool)>(L"GlassShard::InitPhysicsObj")(enableCollisions);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::DestroyPhysicsObj() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassShard::DestroyPhysicsObj")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::DisableCollisions() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassShard::DisableCollisions")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::AddForce(const float* pos, const float* forceIn) -> void
{
  return Zynamic::Forward<public void (const float*, const float*)>(L"GlassShard::AddForce")(pos, forceIn);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::SetVelocity(const float* t_vel, const float* a_vel) -> void
{
  return Zynamic::Forward<public void (const float*, const float*)>(L"GlassShard::SetVelocity")(t_vel, a_vel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::LeaveOnEdge(float stickiness) -> bool
{
  return Zynamic::Forward<public bool (float)>(L"GlassShard::LeaveOnEdge")(stickiness);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::IsOnBottomEdge() -> bool
{
  return Zynamic::Forward<public bool ()>(L"GlassShard::IsOnBottomEdge")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::Recenter() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassShard::Recenter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::InitPhysics(bool enableCollisions, const float* hitPos, const float* hitDir, float glassSize, float stickiness) -> bool
{
  return Zynamic::Forward<public bool (bool, const float*, const float*, float, float)>(L"GlassShard::InitPhysics")(enableCollisions, hitPos, hitDir, glassSize, stickiness);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto GlassShard::DrawOutline() -> void
{
  return Zynamic::Forward<public void ()>(L"GlassShard::DrawOutline")();
}

#endif // __UNIMPLEMENTED__
