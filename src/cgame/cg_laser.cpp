//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_Laser_Add_Core(struct centity_s* cent, struct DObj* obj, struct orientation_t* orient, const float* viewerPos, enum LaserOwnerEnum laserOwner) -> void
{
  return Zynamic::Forward<void (struct centity_s*, struct DObj*, struct orientation_t*, const float*, enum LaserOwnerEnum)>(L"CG_Laser_Add_Core")(cent, obj, orient, viewerPos, laserOwner);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_Laser_Add(struct centity_s* cent, struct DObj* obj, struct cpose_t* pose, const float* viewerPos, enum LaserOwnerEnum laserOwner) -> void
{
  return Zynamic::Forward<void (struct centity_s*, struct DObj*, struct cpose_t*, const float*, enum LaserOwnerEnum)>(L"CG_Laser_Add")(cent, obj, pose, viewerPos, laserOwner);
}

#endif // __UNIMPLEMENTED__
