//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto ReadBlend(struct XSurface* surface, int* partBits, struct XBlendLoadInfo* blend, const unsigned char** pos) -> void
{
  return Zynamic::Forward<void (struct XSurface*, int*, struct XBlendLoadInfo*, const unsigned char**)>(L"ReadBlend")(surface, partBits, blend, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelReadSurface_BuildCollisionTree(struct XSurface* surface, unsigned int vertListIndex, function* Alloc) -> void
{
  return Zynamic::Forward<void (struct XSurface*, unsigned int, function *)>(L"XModelReadSurface_BuildCollisionTree")(surface, vertListIndex, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XModelReadSurface(struct XModel* model, const unsigned char** pos, function* Alloc, struct XSurface* surface, int surfIndex, const char* name) -> void
{
  return Zynamic::Forward<void (struct XModel*, const unsigned char**, function *, struct XSurface*, int, const char*)>(L"XModelReadSurface")(model, pos, Alloc, surface, surfIndex, name);
}

#endif // __UNIMPLEMENTED__
