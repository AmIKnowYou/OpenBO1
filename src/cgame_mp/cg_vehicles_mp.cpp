//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto ClientInfoForEntity(int localClientNum, int entNum) -> struct clientInfo_t*
{
  return Zynamic::Forward<struct clientInfo_t* (int, int)>(L"ClientInfoForEntity")(localClientNum, entNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetVehicleEntDObj(int localClientNum, struct centity_s* centVeh) -> struct DObj*
{
  return Zynamic::Forward<struct DObj* (int, struct centity_s*)>(L"GetVehicleEntDObj")(localClientNum, centVeh);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VehEntityUsingVehicle(int localClientNum, int entNum) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"CG_VehEntityUsingVehicle")(localClientNum, entNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VehEntityUsingRemoteControlVehicle(int localClientNum, int entNum) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"CG_VehEntityUsingRemoteControlVehicle")(localClientNum, entNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetVehicleInfo(int index) -> const struct vehicle_info_t*
{
  return Zynamic::Forward<const struct vehicle_info_t* (int)>(L"CG_GetVehicleInfo")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VehPlayerVehicleSeat(int localClientNum, int entNum) -> int
{
  return Zynamic::Forward<int (int, int)>(L"CG_VehPlayerVehicleSeat")(localClientNum, entNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTagMatrix(int localClientNum, int vehEntNum, unsigned short tagName, float* resultTagMat[0x3], float* resultOrigin) -> void
{
  return Zynamic::Forward<void (int, int, unsigned short, float*[0x3], float*)>(L"GetTagMatrix")(localClientNum, vehEntNum, tagName, resultTagMat, resultOrigin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SeatTransformForSlot(int localClientNum, int vehEntNum, int vehSlotIdx, float* resultOrigin, float* resultAngles) -> void
{
  return Zynamic::Forward<void (int, int, int, float*, float*)>(L"SeatTransformForSlot")(localClientNum, vehEntNum, vehSlotIdx, resultOrigin, resultAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SeatTransformForClientInfo(int localClientNum, struct clientInfo_t* ci, float* resultOrigin, float* resultAngles) -> void
{
  return Zynamic::Forward<void (int, struct clientInfo_t*, float*, float*)>(L"SeatTransformForClientInfo")(localClientNum, ci, resultOrigin, resultAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VehSeatTransformForPlayer(int localClientNum, int entNum, float* resultOrigin, float* resultAngles) -> void
{
  return Zynamic::Forward<void (int, int, float*, float*)>(L"CG_VehSeatTransformForPlayer")(localClientNum, entNum, resultOrigin, resultAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VehGetHealthPercentageEntity(const struct centity_s* cent) -> float
{
  return Zynamic::Forward<float (const struct centity_s*)>(L"CG_VehGetHealthPercentageEntity")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VehGetHealthPercentageLeftTread(const struct centity_s* cent) -> float
{
  return Zynamic::Forward<float (const struct centity_s*)>(L"CG_VehGetHealthPercentageLeftTread")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VehGetHealthPercentageRightTread(const struct centity_s* cent) -> float
{
  return Zynamic::Forward<float (const struct centity_s*)>(L"CG_VehGetHealthPercentageRightTread")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VehGetSeatOccupancyFlags(const struct centity_s* cent) -> int
{
  return Zynamic::Forward<int (const struct centity_s*)>(L"CG_VehGetSeatOccupancyFlags")(cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VehGetSeatGunTurningYaw(const struct centity_s* cent, const int seatIndex) -> bool
{
  return Zynamic::Forward<bool (const struct centity_s*, const int)>(L"CG_VehGetSeatGunTurningYaw")(cent, seatIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VehGetSeatGunTurningPitch(const struct centity_s* cent, const int seatIndex) -> bool
{
  return Zynamic::Forward<bool (const struct centity_s*, const int)>(L"CG_VehGetSeatGunTurningPitch")(cent, seatIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_VehGetSeatGunOverheating(const struct centity_s* cent, const int seatIndex) -> bool
{
  return Zynamic::Forward<bool (const struct centity_s*, const int)>(L"CG_VehGetSeatGunOverheating")(cent, seatIndex);
}

#endif // __UNIMPLEMENTED__
