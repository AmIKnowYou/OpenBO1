//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_rb_showcollision() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_rb_showcollision")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BuildFrustumPlanes(const struct GfxViewParms* viewParms, struct cplane_s* frustumPlanes) -> void
{
  return Zynamic::Forward<void (const struct GfxViewParms*, struct cplane_s*)>(L"BuildFrustumPlanes")(viewParms, frustumPlanes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawCollisionPoly(int numPoints, float* points[0x3], const float* colorFloat) -> void
{
  return Zynamic::Forward<void (int, float*[0x3], const float*)>(L"RB_DrawCollisionPoly")(numPoints, points, colorFloat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ShowCollision(const struct GfxViewParms* viewParms) -> void
{
  return Zynamic::Forward<void (const struct GfxViewParms*)>(L"RB_ShowCollision")(viewParms);
}

#endif // __UNIMPLEMENTED__
