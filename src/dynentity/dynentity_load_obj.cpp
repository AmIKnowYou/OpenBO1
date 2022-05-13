//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DynEnt_IsValidClassName(const char* className) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"DynEnt_IsValidClassName")(className);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_IsValidConstraintName(const char* className) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"DynEnt_IsValidConstraintName")(className);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetType(const char* typeName) -> enum DynEntityType
{
  return Zynamic::Forward<enum DynEntityType (const char*)>(L"DynEnt_GetType")(typeName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetEntityCountFromString(const char* entityString, int& entCount, int& constraintCount) -> void
{
  return Zynamic::Forward<void (const char*, int&, int&)>(L"DynEnt_GetEntityCountFromString")(entityString, entCount, constraintCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LoadRopeParams() -> void
{
  return Zynamic::Forward<void ()>(L"LoadRopeParams")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_CreateConstraint(struct PhysConstraint& constraint, struct DynEntityConstraintCreateParams& params) -> bool
{
  return Zynamic::Forward<bool (struct PhysConstraint&, struct DynEntityConstraintCreateParams&)>(L"DynEnt_CreateConstraint")(constraint, params);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetEntityConstraintParams(struct DynEntityConstraintCreateParams* constraintParams, struct PhysConstraint* constraints, int dynEntConstraintCount) -> void
{
  return Zynamic::Forward<void (struct DynEntityConstraintCreateParams*, struct PhysConstraint*, int)>(L"DynEnt_GetEntityConstraintParams")(constraintParams, constraints, dynEntConstraintCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_AllocXModel(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"DynEnt_AllocXModel")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_AllocXModelColl(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"DynEnt_AllocXModelColl")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_XModelPrecache(const char* modelName) -> struct XModel*
{
  return Zynamic::Forward<struct XModel* (const char*)>(L"DynEnt_XModelPrecache")(modelName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_AllocPhysPreset(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"DynEnt_AllocPhysPreset")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_AllocXModelPieces(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"DynEnt_AllocXModelPieces")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_PhysPresetPrecache(const char* name) -> struct PhysPreset*
{
  return Zynamic::Forward<struct PhysPreset* (const char*)>(L"DynEnt_PhysPresetPrecache")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_XModelPiecesPrecache(const char* name) -> struct XModelPieces*
{
  return Zynamic::Forward<struct XModelPieces* (const char*)>(L"DynEnt_XModelPiecesPrecache")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FindConstraints(const char* targetname, const float* origin, const float* angles, enum AttachPointType attach_type, struct DynEntityConstraintCreateParams* constraintParams, int numConstraints, int* outConstraints) -> bool
{
  return Zynamic::Forward<bool (const char*, const float*, const float*, enum AttachPointType, struct DynEntityConstraintCreateParams*, int, int*)>(L"FindConstraints")(targetname, origin, angles, attach_type, constraintParams, numConstraints, outConstraints);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_Strcpy(const char** memberString, const char* keyValue) -> void
{
  return Zynamic::Forward<void (const char**, const char*)>(L"DynEnt_Strcpy")(memberString, keyValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_AutoCreatePhysPreset(const struct DynEntityDef* dynEntDef, const struct DynEntityCreateParams* params) -> struct PhysPreset*
{
  return Zynamic::Forward<struct PhysPreset* (const struct DynEntityDef*, const struct DynEntityCreateParams*)>(L"DynEnt_AutoCreatePhysPreset")(dynEntDef, params);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_Create(struct DynEntityDef* dynEntDef, const struct DynEntityCreateParams* params, struct DynEntityConstraintCreateParams* constraintParams, int numConstraints) -> bool
{
  return Zynamic::Forward<bool (struct DynEntityDef*, const struct DynEntityCreateParams*, struct DynEntityConstraintCreateParams*, int)>(L"DynEnt_Create")(dynEntDef, params, constraintParams, numConstraints);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_CompareEntities(const void* arg0, const void* arg1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"DynEnt_CompareEntities")(arg0, arg1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_Alloc(int count, int size) -> void*
{
  return Zynamic::Forward<void* (int, int)>(L"DynEnt_Alloc")(count, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetAttachPointsInWorldSpace(struct PhysConstraint& constraint, float* p0, float* p1) -> void
{
  return Zynamic::Forward<void (struct PhysConstraint&, float*, float*)>(L"GetAttachPointsInWorldSpace")(constraint, p0, p1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_LoadEntities() -> void
{
  return Zynamic::Forward<void ()>(L"DynEnt_LoadEntities")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetEntityProps(enum DynEntityType dynEntType) -> const struct DynEntityProps*
{
  return Zynamic::Forward<const struct DynEntityProps* (enum DynEntityType)>(L"DynEnt_GetEntityProps")(dynEntType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetId(const struct DynEntityDef* dynEntDef, enum DynEntityDrawType drawType) -> unsigned short
{
  return Zynamic::Forward<unsigned short (const struct DynEntityDef*, enum DynEntityDrawType)>(L"DynEnt_GetId")(dynEntDef, drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetAbsId(const struct DynEntityDef* dynEntDef) -> unsigned short
{
  return Zynamic::Forward<unsigned short (const struct DynEntityDef*)>(L"DynEnt_GetAbsId")(dynEntDef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_Valid(const unsigned short absDynEntId) -> bool
{
  return Zynamic::Forward<bool (const unsigned short)>(L"DynEnt_Valid")(absDynEntId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetEntityCount(enum DynEntityCollType collType) -> unsigned short
{
  return Zynamic::Forward<unsigned short (enum DynEntityCollType)>(L"DynEnt_GetEntityCount")(collType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetEntityDef(unsigned short absDynEntId) -> const struct DynEntityDef*
{
  return Zynamic::Forward<const struct DynEntityDef* (unsigned short)>(L"DynEnt_GetEntityDef")(absDynEntId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetClientPose(unsigned short absDynEntId) -> const struct DynEntityPose*
{
  return Zynamic::Forward<const struct DynEntityPose* (unsigned short)>(L"DynEnt_GetClientPose")(absDynEntId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetClientModelPoseList() -> struct DynEntityPose*
{
  return Zynamic::Forward<struct DynEntityPose* ()>(L"DynEnt_GetClientModelPoseList")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetClientPose(unsigned short dynEntId, enum DynEntityDrawType drawType) -> struct DynEntityPose*
{
  return Zynamic::Forward<struct DynEntityPose* (unsigned short, enum DynEntityDrawType)>(L"DynEnt_GetClientPose")(dynEntId, drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetServerEntity(unsigned short dynEntId, enum DynEntityDrawType drawType) -> struct DynEntityServer*
{
  return Zynamic::Forward<struct DynEntityServer* (unsigned short, enum DynEntityDrawType)>(L"DynEnt_GetServerEntity")(dynEntId, drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetClientIdDrawType(unsigned short absId, unsigned short* outId, enum DynEntityDrawType* drawType) -> void
{
  return Zynamic::Forward<void (unsigned short, unsigned short*, enum DynEntityDrawType*)>(L"DynEnt_GetClientIdDrawType")(absId, outId, drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetClientEntity(unsigned short id) -> struct DynEntityClient*
{
  return Zynamic::Forward<struct DynEntityClient* (unsigned short)>(L"DynEnt_GetClientEntity")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetClientAbsId(unsigned short dynEntId, enum DynEntityDrawType drawType) -> unsigned short
{
  return Zynamic::Forward<unsigned short (unsigned short, enum DynEntityDrawType)>(L"DynEnt_GetClientAbsId")(dynEntId, drawType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEnt_GetXModelUsageCount(const struct XModel* xModel) -> int
{
  return Zynamic::Forward<int (const struct XModel*)>(L"DynEnt_GetXModelUsageCount")(xModel);
}

#endif // __UNIMPLEMENTED__
