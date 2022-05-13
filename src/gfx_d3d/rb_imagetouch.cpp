//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto RB_TouchImage(struct GfxImage* image) -> void
{
  return Zynamic::Forward<void (struct GfxImage*)>(L"RB_TouchImage")(image);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_CompareTouchImages(const void* e0, const void* e1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"RB_CompareTouchImages")(e0, e1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_TouchAllImages() -> void
{
  return Zynamic::Forward<void ()>(L"RB_TouchAllImages")();
}

#endif // __UNIMPLEMENTED__
