//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_UpdateVehicleWaterFX(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_UpdateVehicleWaterFX")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VEH_UpdateMaterialTime(struct centity_s* cent, int dt, float speed) -> void
{
  return Zynamic::Forward<void (struct centity_s*, int, float)>(L"VEH_UpdateMaterialTime")(cent, dt, speed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Vehicle_PreControllers(int localClientNum, const struct DObj* obj, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, const struct DObj*, struct centity_s*)>(L"CG_Vehicle_PreControllers")(localClientNum, obj, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSoundInfoForVehicle(int localClientNum, const struct centity_s* cent, float* slideRate) -> int
{
  return Zynamic::Forward<int (int, const struct centity_s*, float*)>(L"GetSoundInfoForVehicle")(localClientNum, cent, slideRate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSoundOriginForVehicle(const struct centity_s* cent, float* origin) -> void
{
  return Zynamic::Forward<void (const struct centity_s*, float*)>(L"GetSoundOriginForVehicle")(cent, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CrossFadeVehicleMaterialEffects(int localClientNum, const struct centity_s* cent, const struct vehicle_info_t* info, int groundEffectIndex, int surfType, float ratio, int fadeTime) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*, const struct vehicle_info_t*, int, int, float, int)>(L"CG_CrossFadeVehicleMaterialEffects")(localClientNum, cent, info, groundEffectIndex, surfType, ratio, fadeTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateWheeledSurfaceSounds(int localClientNum, struct centity_s* cent, const struct vehicle_info_t* info, bool isLocalPlayersVehicle) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, const struct vehicle_info_t*, bool)>(L"CG_UpdateWheeledSurfaceSounds")(localClientNum, cent, info, isLocalPlayersVehicle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateTankSurfaceSounds(int localClientNum, struct centity_s* cent, const struct vehicle_info_t* info, bool isLocalPlayersVehicle) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, const struct vehicle_info_t*, bool)>(L"CG_UpdateTankSurfaceSounds")(localClientNum, cent, info, isLocalPlayersVehicle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateSurfaceSounds(int localClientNum, struct centity_s* cent, const struct vehicle_info_t* info, bool isLocalPlayersVehicle) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, const struct vehicle_info_t*, bool)>(L"CG_UpdateSurfaceSounds")(localClientNum, cent, info, isLocalPlayersVehicle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateVehicleNotifies(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_UpdateVehicleNotifies")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateFireSounds(int localClientNum, struct centity_s* cent, const struct vehicle_info_t* info, bool isLocalPlayersVehicle) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, const struct vehicle_info_t*, bool)>(L"CG_UpdateFireSounds")(localClientNum, cent, info, isLocalPlayersVehicle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateBoostSounds(int localClientNum, struct centity_s* cent, const struct vehicle_info_t* info, bool isLocalPlayersVehicle) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, const struct vehicle_info_t*, bool)>(L"CG_UpdateBoostSounds")(localClientNum, cent, info, isLocalPlayersVehicle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateVehicleEngineSounds(int localClientNum, struct centity_s* cent, const struct vehicle_info_t* info, bool isLocalPlayersVehicle) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, const struct vehicle_info_t*, bool)>(L"CG_UpdateVehicleEngineSounds")(localClientNum, cent, info, isLocalPlayersVehicle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateTurretAndOverheatSounds(int localClientNum, struct centity_s* cent, const struct vehicle_info_t* info, bool isLocalPlayersVehicle) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, const struct vehicle_info_t*, bool)>(L"CG_UpdateTurretAndOverheatSounds")(localClientNum, cent, info, isLocalPlayersVehicle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateVehicleSounds(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_UpdateVehicleSounds")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
