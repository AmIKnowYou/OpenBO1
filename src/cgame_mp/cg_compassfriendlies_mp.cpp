//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'SQRT2''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'SQRT2''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TRACK_cg_compassfriendlies() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_cg_compassfriendlies")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearCompassPingData() -> void
{
  return Zynamic::Forward<void ()>(L"CG_ClearCompassPingData")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetRadarLineMargin(struct cg_s* cgameGlob) -> float
{
  return Zynamic::Forward<float (struct cg_s*)>(L"GetRadarLineMargin")(cgameGlob);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetRadarLine(struct cg_s* cgameGlob, float radarProgress, float* line) -> void
{
  return Zynamic::Forward<void (struct cg_s*, float, float*)>(L"GetRadarLine")(cgameGlob, radarProgress, line);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLocalRadarRadius(float radarProgress) -> float
{
  return Zynamic::Forward<float (float)>(L"GetLocalRadarRadius")(radarProgress);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DoesMovementCrossRadar(struct cg_s* cgameGlob, float radarProgress, const float* p1, const float* p2) -> bool
{
  return Zynamic::Forward<bool (struct cg_s*, float, const float*, const float*)>(L"DoesMovementCrossRadar")(cgameGlob, radarProgress, p1, p2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DoesMovementCrossLocalRadar(const float* radarPos, float localRadarProgress, const float* p1, const float* p2) -> bool
{
  return Zynamic::Forward<bool (const float*, float, const float*, const float*)>(L"DoesMovementCrossLocalRadar")(radarPos, localRadarProgress, p1, p2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DoLinesSurroundPoint(struct cg_s* cgameGlob, float* radarLine1, float* radarLine2, float* pos) -> bool
{
  return Zynamic::Forward<bool (struct cg_s*, float*, float*, float*)>(L"DoLinesSurroundPoint")(cgameGlob, radarLine1, radarLine2, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DoRadiiSurroundPoint(const float* radarPos, float radius1, float radius2, float* pos) -> bool
{
  return Zynamic::Forward<bool (const float*, float, float, float*)>(L"DoRadiiSurroundPoint")(radarPos, radius1, radius2, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RadarPingEnemyPlayer(struct CompassActor* actor, int time, int PerkToIgnore) -> void
{
  return Zynamic::Forward<void (struct CompassActor*, int, int)>(L"RadarPingEnemyPlayer")(actor, time, PerkToIgnore);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RadarPingEnemyTurrets(struct CompassTurrets* turret, int time) -> void
{
  return Zynamic::Forward<void (struct CompassTurrets*, int)>(L"RadarPingEnemyTurrets")(turret, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SatellitePingEnemyPlayer(struct CompassActor* actor, int time, int PerkToIgnore, bool fasterUpdate) -> void
{
  return Zynamic::Forward<void (struct CompassActor*, int, int, bool)>(L"SatellitePingEnemyPlayer")(actor, time, PerkToIgnore, fasterUpdate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CanLocalPlayerHearActorFootsteps(int localClientNum, const float* actorPos, int actorClientIndex) -> bool
{
  return Zynamic::Forward<bool (int, const float*, int)>(L"CanLocalPlayerHearActorFootsteps")(localClientNum, actorPos, actorClientIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ActorUpdatePos(int localClientNum, struct CompassActor* actor, const float* newPos, int actorClientIndex) -> void
{
  return Zynamic::Forward<void (int, struct CompassActor*, const float*, int)>(L"ActorUpdatePos")(localClientNum, actor, newPos, actorClientIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetVehicle(int localClientNum, int entityNum) -> struct CompassVehicle*
{
  return Zynamic::Forward<struct CompassVehicle* (int, int)>(L"GetVehicle")(localClientNum, entityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetHelicopter(int localClientNum, int entityNum) -> struct CompassHelicopter*
{
  return Zynamic::Forward<struct CompassHelicopter* (int, int)>(L"GetHelicopter")(localClientNum, entityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetGuidedMissile(int localClientNum, int entityNum) -> struct CompassGuidedMissile*
{
  return Zynamic::Forward<struct CompassGuidedMissile* (int, int)>(L"GetGuidedMissile")(localClientNum, entityNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDogs(int localClientNum, int entityNum, int time) -> struct CompassDogs*
{
  return Zynamic::Forward<struct CompassDogs* (int, int, int)>(L"GetDogs")(localClientNum, entityNum, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCompassTurrets(int localClientNum, int entityNum, int time) -> struct CompassTurrets*
{
  return Zynamic::Forward<struct CompassTurrets* (int, int, int)>(L"GetCompassTurrets")(localClientNum, entityNum, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassUpdateVehicleInfo(int localClientNum, int entityIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_CompassUpdateVehicleInfo")(localClientNum, entityIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassUpdateHelicopterInfo(int localClientNum, int entityIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_CompassUpdateHelicopterInfo")(localClientNum, entityIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassUpdateGuidedMissileInfo(int localClientNum, int entityIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_CompassUpdateGuidedMissileInfo")(localClientNum, entityIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassUpdateVehicleOccupantInfo(int localClientNum, int entityIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_CompassUpdateVehicleOccupantInfo")(localClientNum, entityIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassUpdateDogInfo(int localClientNum, int entityIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_CompassUpdateDogInfo")(localClientNum, entityIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassUpdateTurretInfo(int localClientNum, int entityIndex) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_CompassUpdateTurretInfo")(localClientNum, entityIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassRadarPingEnemyTurrets(int localClientNum, float oldRadarProgress, float newRadarProgress, float oldLocalRadarProgress, float newLocalRadarProgress) -> void
{
  return Zynamic::Forward<void (int, float, float, float, float)>(L"CG_CompassRadarPingEnemyTurrets")(localClientNum, oldRadarProgress, newRadarProgress, oldLocalRadarProgress, newLocalRadarProgress);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassRadarPingEnemyPlayers(int localClientNum, float oldRadarProgress, float newRadarProgress, float oldLocalRadarProgress, float newLocalRadarProgress, int ignorePerk) -> void
{
  return Zynamic::Forward<void (int, float, float, float, float, int)>(L"CG_CompassRadarPingEnemyPlayers")(localClientNum, oldRadarProgress, newRadarProgress, oldLocalRadarProgress, newLocalRadarProgress, ignorePerk);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassIncreaseRadarTime(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CompassIncreaseRadarTime")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddTurretWeaponPingInfo(int localClientNum, const struct centity_s* cent, const float* origin, int msec) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*, const float*, int)>(L"CG_AddTurretWeaponPingInfo")(localClientNum, cent, origin, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassAddWeaponPingInfo(int localClientNum, const struct centity_s* cent, const float* origin, int msec) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*, const float*, int)>(L"CG_CompassAddWeaponPingInfo")(localClientNum, cent, origin, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassAddVehicleWeaponPingInfo(int localClientNum, const struct centity_s* cent, const float* origin, int msec) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*, const float*, int)>(L"CG_CompassAddVehicleWeaponPingInfo")(localClientNum, cent, origin, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FindFakeFireActor(int localClientNum, const int playerIndex, const int entNum) -> struct CompassFakeFire*
{
  return Zynamic::Forward<struct CompassFakeFire* (int, const int, const int)>(L"CG_FindFakeFireActor")(localClientNum, playerIndex, entNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassAddFakeFirePingInfo(int localClientNum, const int ownerNum, const int entNum, const float* origin, const float* dir, int msec) -> void
{
  return Zynamic::Forward<void (int, const int, const int, const float*, const float*, int)>(L"CG_CompassAddFakeFirePingInfo")(localClientNum, ownerNum, entNum, origin, dir, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddEnemyScrambler(int localClientNum, struct centity_s* scramblerEnt) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_AddEnemyScrambler")(localClientNum, scramblerEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ClearNearestEnemyScrambler(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_ClearNearestEnemyScrambler")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddFriendlyScrambler(int localClientNum, float x, float y, int handle) -> void
{
  return Zynamic::Forward<void (int, float, float, int)>(L"CG_AddFriendlyScrambler")(localClientNum, x, y, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RemoveFriendlyScrambler(int localClientNum, int handle) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_RemoveFriendlyScrambler")(localClientNum, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_RemoveAllFriendlyScramblers(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_RemoveAllFriendlyScramblers")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassUpdateActors(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"CG_CompassUpdateActors")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawFriendlies(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, float*)>(L"CG_CompassDrawFriendlies")(localClientNum, compassType, parentRect, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawIconAtLocation(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, float* color, float* vPos, struct Material* material) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, float*, float*, struct Material*)>(L"CG_CompassDrawIconAtLocation")(localClientNum, compassType, parentRect, rect, color, vPos, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPositionFromPackedBits(int localClientNum, const int bitsPerAxis, const int bitMask, int bits, float* vPos) -> void
{
  return Zynamic::Forward<void (int, const int, const int, int, float*)>(L"GetPositionFromPackedBits")(localClientNum, bitsPerAxis, bitMask, bits, vPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_AddArtilleryPing(int localClientNum, float* position) -> void
{
  return Zynamic::Forward<void (int, float*)>(L"CG_AddArtilleryPing")(localClientNum, position);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawArtilleryIcon(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, float*)>(L"CG_CompassDrawArtilleryIcon")(localClientNum, compassType, parentRect, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawIncomingArtilleryIcon(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, float*)>(L"CG_CompassDrawIncomingArtilleryIcon")(localClientNum, compassType, parentRect, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCompassPingMaterialForClient(const int localClientNum, const struct clientInfo_t* clientInfo) -> struct Material*
{
  return Zynamic::Forward<struct Material* (const int, const struct clientInfo_t*)>(L"GetCompassPingMaterialForClient")(localClientNum, clientInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCompassFiringMaterialForClient(const int localClientNum, const struct clientInfo_t* clientInfo) -> struct Material*
{
  return Zynamic::Forward<struct Material* (const int, const struct clientInfo_t*)>(L"GetCompassFiringMaterialForClient")(localClientNum, clientInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawEnemies(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, float*)>(L"CG_CompassDrawEnemies")(localClientNum, compassType, parentRect, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawFakeFire(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, float*)>(L"CG_CompassDrawFakeFire")(localClientNum, compassType, parentRect, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawRadarEffects(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, float*)>(L"CG_CompassDrawRadarEffects")(localClientNum, compassType, parentRect, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawFlicker(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, float*, struct Material*)>(L"CG_CompassDrawFlicker")(localClientNum, compassType, parentRect, rect, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawVehicles(int localClientNum, enum CompassType compassType, const int eType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const int, const struct rectDef_s*, const struct rectDef_s*, const float*)>(L"CG_CompassDrawVehicles")(localClientNum, compassType, eType, parentRect, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawDogs(int localClientNum, enum CompassType compassType, const int eType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, struct Material* dogMaterial, const float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const int, const struct rectDef_s*, const struct rectDef_s*, struct Material*, const float*)>(L"CG_CompassDrawDogs")(localClientNum, compassType, eType, parentRect, rect, dogMaterial, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetTurretCompassMaterial(struct centity_s* cent, bool friendly, bool isFiring) -> struct Material*
{
  return Zynamic::Forward<struct Material* (struct centity_s*, bool, bool)>(L"CG_GetTurretCompassMaterial")(cent, friendly, isFiring);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawTurrets(int localClientNum, enum CompassType compassType, const int eType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const int, const struct rectDef_s*, const struct rectDef_s*, const float*)>(L"CG_CompassDrawTurrets")(localClientNum, compassType, eType, parentRect, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawHelicopter(int localClientNum, enum CompassType compassType, const int eType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const int, const struct rectDef_s*, const struct rectDef_s*, const float*)>(L"CG_CompassDrawHelicopter")(localClientNum, compassType, eType, parentRect, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawGuidedMissile(int localClientNum, enum CompassType compassType, const int eType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const int, const struct rectDef_s*, const struct rectDef_s*, const float*)>(L"CG_CompassDrawGuidedMissile")(localClientNum, compassType, eType, parentRect, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CompassDrawScramblerFriendly(int localClientNum, enum CompassType compassType, const struct rectDef_s* parentRect, const struct rectDef_s* rect, const float* color) -> void
{
  return Zynamic::Forward<void (int, enum CompassType, const struct rectDef_s*, const struct rectDef_s*, const float*)>(L"CG_CompassDrawScramblerFriendly")(localClientNum, compassType, parentRect, rect, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_ResetCompassData(int localClientNum, int time) -> void
{
  return Zynamic::Forward<void (int, int)>(L"CG_ResetCompassData")(localClientNum, time);
}

#endif // __UNIMPLEMENTED__
