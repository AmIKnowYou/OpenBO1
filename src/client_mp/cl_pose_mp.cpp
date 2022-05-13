//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CL_AllocSkelMemory(unsigned int size) -> char*
{
  return Zynamic::Forward<char* (unsigned int)>(L"CL_AllocSkelMemory")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetSkelTimeStamp() -> int
{
  return Zynamic::Forward<int ()>(L"CL_GetSkelTimeStamp")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DObjCreateSkelForBones(const struct DObj* obj, int* partBits, struct DObjAnimMat** pMatOut) -> int
{
  return Zynamic::Forward<int (const struct DObj*, int*, struct DObjAnimMat**)>(L"CL_DObjCreateSkelForBones")(obj, partBits, pMatOut);
}

#endif // __UNIMPLEMENTED__
