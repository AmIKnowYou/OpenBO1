//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Float4x4ForViewer(struct vector4& mtx, const float* origin3, const float* axis3[0x3]) -> void
{
  return Zynamic::Forward<void (struct vector4&, const float*, const float*[0x3])>(L"Float4x4ForViewer")(mtx, origin3, axis3);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Float4x4InfinitePerspectiveMatrix(struct vector4& mtx, float tanHalfFovX, float tanHalfFovY, float zNear) -> void
{
  return Zynamic::Forward<void (struct vector4&, float, float, float)>(L"Float4x4InfinitePerspectiveMatrix")(mtx, tanHalfFovX, tanHalfFovY, zNear);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CreateClipMatrix(struct vector4& clipMtx, const float* vieworg, const float* viewaxis[0x3]) -> void
{
  return Zynamic::Forward<void (struct vector4&, const float*, const float*[0x3])>(L"CreateClipMatrix")(clipMtx, vieworg, viewaxis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec4HomogenousClipZW(union float4& pt0, union float4& pt1, const union float4& coeffZW) -> bool
{
  return Zynamic::Forward<bool (union float4&, union float4&, const union float4&)>(L"Vec4HomogenousClipZW")(pt0, pt1, coeffZW);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec4HomogenousClipBothZ(union float4& pt0, union float4& pt1) -> bool
{
  return Zynamic::Forward<bool (union float4&, union float4&)>(L"Vec4HomogenousClipBothZ")(pt0, pt1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_GenerateBeam_GetFlatDelta(const struct vector4& clipMtx, const struct vector4& invClipMtx, const union float4& beamWorldBegin, const union float4& beamWorldEnd, union float4& outFlatDelta) -> bool
{
  return Zynamic::Forward<bool (const struct vector4&, const struct vector4&, const union float4&, const union float4&, union float4&)>(L"FX_GenerateBeam_GetFlatDelta")(clipMtx, invClipMtx, beamWorldBegin, beamWorldEnd, outFlatDelta);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_Beam_GenerateVerts(struct FxGenerateVertsCmd* cmd) -> void
{
  return Zynamic::Forward<void (struct FxGenerateVertsCmd*)>(L"FX_Beam_GenerateVerts")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_Beam_Begin() -> void
{
  return Zynamic::Forward<void ()>(L"FX_Beam_Begin")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_Beam_Add(struct FxBeam* beam) -> void
{
  return Zynamic::Forward<void (struct FxBeam*)>(L"FX_Beam_Add")(beam);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FX_Beam_GetInfo() -> struct FxBeamInfo*
{
  return Zynamic::Forward<struct FxBeamInfo* ()>(L"FX_Beam_GetInfo")();
}

#endif // __UNIMPLEMENTED__
