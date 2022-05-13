//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto PlaneEqual(const float* p1, const float* p2) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*)>(L"PlaneEqual")(p1, p2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RemoveDuplicateBrushPlanes(float* planes[0x4], unsigned int* sideCount, const char* mapname, unsigned int brushnum) -> bool
{
  return Zynamic::Forward<bool (float*[0x4], unsigned int*, const char*, unsigned int)>(L"RemoveDuplicateBrushPlanes")(planes, sideCount, mapname, brushnum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SnapAxialVector(float* normal) -> bool
{
  return Zynamic::Forward<bool (float*)>(L"SnapAxialVector")(normal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SnapPlane(float* plane) -> void
{
  return Zynamic::Forward<void (float*)>(L"SnapPlane")(plane);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddSimplePoint(const float* planes[0x4], unsigned int planeCount, const unsigned int* planeIndex, const float* xyz, struct SimplePlaneIntersection* pts, int ptCount, int maxPtCount) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const float*[0x4], unsigned int, const unsigned int*, const float*, struct SimplePlaneIntersection*, int, int)>(L"AddSimplePoint")(planes, planeCount, planeIndex, xyz, pts, ptCount, maxPtCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPlaneIntersections(const float* planes[0x4], unsigned int planeCount, struct SimplePlaneIntersection* OutPts, unsigned int maxPtCount) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const float*[0x4], unsigned int, struct SimplePlaneIntersection*, unsigned int)>(L"GetPlaneIntersections")(planes, planeCount, OutPts, maxPtCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Map_SkipOptionalArg(const char** file, const char* argName) -> void
{
  return Zynamic::Forward<void (const char**, const char*)>(L"Map_SkipOptionalArg")(file, argName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Map_SkipNamedFlags(const char** file, const char* key) -> bool
{
  return Zynamic::Forward<bool (const char**, const char*)>(L"Map_SkipNamedFlags")(file, key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCollisionMaterial(const char* name, struct collision_material_t& cmat) -> const void
{
  return Zynamic::Forward<const void (const char*, struct collision_material_t&)>(L"GetCollisionMaterial")(name, cmat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsAxisAligned(float* normal) -> int
{
  return Zynamic::Forward<int (float*)>(L"IsAxisAligned")(normal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xmodel_ParsePhysicsBrush(const char** file, const char* mapname, unsigned int brushCount, struct PhysGeomInfo* geom, unsigned int boneHash, struct DObjAnimMat* boneMat, function* Alloc) -> bool
{
  return Zynamic::Forward<bool (const char**, const char*, unsigned int, struct PhysGeomInfo*, unsigned int, struct DObjAnimMat*, function *)>(L"Xmodel_ParsePhysicsBrush")(file, mapname, brushCount, geom, boneHash, boneMat, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xmodel_ParsePhysicsBox(const char** file, struct PhysGeomInfo* geom) -> bool
{
  return Zynamic::Forward<bool (const char**, struct PhysGeomInfo*)>(L"Xmodel_ParsePhysicsBox")(file, geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xmodel_ParsePhysicsCylinder(const char** file, struct PhysGeomInfo* geom) -> bool
{
  return Zynamic::Forward<bool (const char**, struct PhysGeomInfo*)>(L"Xmodel_ParsePhysicsCylinder")(file, geom);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SkipEpair(const char* token, const char** file) -> bool
{
  return Zynamic::Forward<bool (const char*, const char**)>(L"SkipEpair")(token, file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetGeomAABB(const struct PhysGeomInfo* geom, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (const struct PhysGeomInfo*, float*, float*)>(L"GetGeomAABB")(geom, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddBoneName(unsigned int* boneNameArray, const int boneNameLen, const char* boneName) -> bool
{
  return Zynamic::Forward<bool (unsigned int*, const int, const char*)>(L"AddBoneName")(boneNameArray, boneNameLen, boneName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xmodel_CountPhysicsCollMaps(const char** file, const char* name, unsigned int* boneHashes, const int boneNameLen) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char**, const char*, unsigned int*, const int)>(L"Xmodel_CountPhysicsCollMaps")(file, name, boneHashes, boneNameLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xmodel_CountPhysicsCollMapGeoms(const char** file, const char* name, unsigned int boneHash) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char**, const char*, unsigned int)>(L"Xmodel_CountPhysicsCollMapGeoms")(file, name, boneHash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Xmodel_ParsePhysicsCollMap(const char** file, const char* name, unsigned int geomCount, unsigned int boneHash, struct DObjAnimMat* boneMat, function* Alloc) -> struct PhysGeomList*
{
  return Zynamic::Forward<struct PhysGeomList* (const char**, const char*, unsigned int, unsigned int, struct DObjAnimMat*, function *)>(L"Xmodel_ParsePhysicsCollMap")(file, name, geomCount, boneHash, boneMat, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModel_LoadCollMap(const char* name, function* Alloc, struct XModel* model, const char* xmodelName) -> void
{
  return Zynamic::Forward<void (const char*, function *, struct XModel*, const char*)>(L"XModel_LoadCollMap")(name, Alloc, model, xmodelName);
}

#endif // __UNIMPLEMENTED__
