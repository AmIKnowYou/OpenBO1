//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Phys_RemmapSurfaceType(int stype) -> enum Phys_SurfaceType
{
  return Zynamic::Forward<enum Phys_SurfaceType (int)>(L"Phys_RemmapSurfaceType")(stype);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GetSoundAliasIndex(enum Phys_SurfaceType type1, enum Phys_SurfaceType type2) -> int
{
  return Zynamic::Forward<int (enum Phys_SurfaceType, enum Phys_SurfaceType)>(L"Phys_GetSoundAliasIndex")(type1, type2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_InitSoundAliases() -> void
{
  return Zynamic::Forward<void ()>(L"Phys_InitSoundAliases")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_GetSoundAliasForImpact(enum Phys_SurfaceType type1, enum Phys_SurfaceType type2) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum Phys_SurfaceType, enum Phys_SurfaceType)>(L"Phys_GetSoundAliasForImpact")(type1, type2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_EffectsInit() -> void
{
  return Zynamic::Forward<void ()>(L"Phys_EffectsInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_ReEvalPriority(struct PhysObjUserData& userData) -> void
{
  return Zynamic::Forward<void (struct PhysObjUserData&)>(L"Phys_ReEvalPriority")(userData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_CanPlayEffect(struct PhysObjUserData& userData) -> bool
{
  return Zynamic::Forward<bool (struct PhysObjUserData&)>(L"Phys_CanPlayEffect")(userData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Phys_EffectsProcess() -> void
{
  return Zynamic::Forward<void ()>(L"Phys_EffectsProcess")();
}

#endif // __UNIMPLEMENTED__
