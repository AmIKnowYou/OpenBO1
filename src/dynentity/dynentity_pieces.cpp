//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto DynEntPieces_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"DynEntPieces_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntPieces_AddDrawSurfs(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"DynEntPieces_AddDrawSurfs")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntPieces_SpawnPhysObj(const char* modelName, int stype, const float* mins, const float* maxs, const float* position, const float* quat, const float* velocity, const float* angularVelocity, const struct PhysPreset* physPreset) -> int
{
  return Zynamic::Forward<int (const char*, int, const float*, const float*, const float*, const float*, const float*, const float*, const struct PhysPreset*)>(L"DynEntPieces_SpawnPhysObj")(modelName, stype, mins, maxs, position, quat, velocity, angularVelocity, physPreset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntPieces_CalcForceDir(const float* hitDir, const float spreadFraction, float* forceDir) -> void
{
  return Zynamic::Forward<void (const float*, const float, float*)>(L"DynEntPieces_CalcForceDir")(hitDir, spreadFraction, forceDir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntPieces_SpawnPhysicsModel(int localClientNum, const struct XModel* model, const float* offset, const float* origin, const float* axis[0x3], const float* hitPos, const float* hitDir, struct PhysPreset* physPreset) -> bool
{
  return Zynamic::Forward<bool (int, const struct XModel*, const float*, const float*, const float*[0x3], const float*, const float*, struct PhysPreset*)>(L"DynEntPieces_SpawnPhysicsModel")(localClientNum, model, offset, origin, axis, hitPos, hitDir, physPreset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DynEntPieces_SpawnPieces(int localClientNum, const struct XModelPieces* pieces, const float* origin, const float* axis[0x3], const float* hitPos, const float* hitDir) -> void
{
  return Zynamic::Forward<void (int, const struct XModelPieces*, const float*, const float*[0x3], const float*, const float*)>(L"DynEntPieces_SpawnPieces")(localClientNum, pieces, origin, axis, hitPos, hitDir);
}

#endif // __UNIMPLEMENTED__
