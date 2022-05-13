//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto GetLinkEntDObj(int localClientNum, struct centity_s* centLink) -> struct DObj*
{
  return Zynamic::Forward<struct DObj* (int, struct centity_s*)>(L"GetLinkEntDObj")(localClientNum, centLink);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetTagMatrix(int localClientNum, int linkEntNum, unsigned short tagName, float* resultTagMat[0x3]) -> void
{
  return Zynamic::Forward<void (int, int, unsigned short, float*[0x3])>(L"CG_GetTagMatrix")(localClientNum, linkEntNum, tagName, resultTagMat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CalcTagParentAxis(int localClientNum, struct centity_s* cent, float* parentAxis[0x3]) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, float*[0x3])>(L"CG_CalcTagParentAxis")(localClientNum, cent, parentAxis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_LinkTransformForEntity(int localClientNum, struct centity_s* cent, float* resultOrigin, float* resultAngles) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, float*, float*)>(L"CG_LinkTransformForEntity")(localClientNum, cent, resultOrigin, resultAngles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GenerateLinkInfo(int localClientNum, struct centity_s* cent, int attachedEntNum, int attachedTagIndex) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, int, int)>(L"CG_GenerateLinkInfo")(localClientNum, cent, attachedEntNum, attachedTagIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateEntityLink(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_UpdateEntityLink")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateFakeEntityLink(int localClientNum, struct centity_s* cent, int parentNum, int tagIndex) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*, int, int)>(L"CG_UpdateFakeEntityLink")(localClientNum, cent, parentNum, tagIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_UpdateFakeEntityLink(int localClientNum, struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, struct centity_s*)>(L"CG_UpdateFakeEntityLink")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_EntityLinked(int localClientNum, struct centity_s* cent) -> bool
{
  return Zynamic::Forward<bool (int, struct centity_s*)>(L"CG_EntityLinked")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_EntGetLinkToParent(int localClientNum, struct centity_s* cent) -> struct centity_s*
{
  return Zynamic::Forward<struct centity_s* (int, struct centity_s*)>(L"CG_EntGetLinkToParent")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
