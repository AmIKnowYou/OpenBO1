//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_BuildQuadStampCodeMeshVerts(struct Material* material, const float* viewAxis[0x3], const float* origin, const float* left, const float* up, const unsigned char* rgbaColor, float s0, float t0, float s1, float t1) -> void
{
  return Zynamic::Forward<void (struct Material*, const float*[0x3], const float*, const float*, const float*, const unsigned char*, float, float, float, float)>(L"R_BuildQuadStampCodeMeshVerts")(material, viewAxis, origin, left, up, rgbaColor, s0, t0, s1, t1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateQuadStampCodeMeshVerts(struct Material* material, const float* viewAngles, const float* origin, float worldRadius, const unsigned char* rgbaColor, float frameFrac) -> void
{
  return Zynamic::Forward<void (struct Material*, const float*, const float*, float, const unsigned char*, float)>(L"R_GenerateQuadStampCodeMeshVerts")(material, viewAngles, origin, worldRadius, rgbaColor, frameFrac);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto fast_round(double x) -> double
{
  return Zynamic::Forward<double (double)>(L"fast_round")(x);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto really_fast_sincos(float in, float& s, float& c) -> void
{
  return Zynamic::Forward<void (float, float&, float&)>(L"really_fast_sincos")(in, s, c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PackTwoShorts(unsigned int first, unsigned int second) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, unsigned int)>(L"PackTwoShorts")(first, second);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_GenerateQuadStampCodeMeshVertsArray(struct Material* material, struct renderQuad_t* quads, int numQuads, float* viewAxis[0x3]) -> void
{
  return Zynamic::Forward<void (struct Material*, struct renderQuad_t*, int, float*[0x3])>(L"R_GenerateQuadStampCodeMeshVertsArray")(material, quads, numQuads, viewAxis);
}

#endif // __UNIMPLEMENTED__
