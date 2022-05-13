//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Com_CanPrimaryLightAffectPoint(const struct ComPrimaryLight* light, const float* point) -> bool
{
  return Zynamic::Forward<bool (const struct ComPrimaryLight*, const float*)>(L"Com_CanPrimaryLightAffectPoint")(light, point);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Com_UnloadWorld() -> void
{
  return Zynamic::Forward<void ()>(L"Com_UnloadWorld")();
}

#endif // __UNIMPLEMENTED__
