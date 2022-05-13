//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto ScrPlace_HiResGetScale() -> float
{
  return Zynamic::Forward<float ()>(L"ScrPlace_HiResGetScale")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_HiResApplyRect(float* x, float* y, float* w, float* h) -> void
{
  return Zynamic::Forward<void (float*, float*, float*, float*)>(L"ScrPlace_HiResApplyRect")(x, y, w, h);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_CalcSafeAreaOffsets(float viewportX, float viewportY, float viewportWidth, float viewportHeight, float horzAspectScale, float vertAspectScale, float safeAreaRatioHorz, float safeAreaRatioVert, float* realViewableMin, float* realViewableMax, float* virtualViewableMin, float* virtualViewableMax) -> void
{
  return Zynamic::Forward<void (float, float, float, float, float, float, float, float, float*, float*, float*, float*)>(L"ScrPlace_CalcSafeAreaOffsets")(viewportX, viewportY, viewportWidth, viewportHeight, horzAspectScale, vertAspectScale, safeAreaRatioHorz, safeAreaRatioVert, realViewableMin, realViewableMax, virtualViewableMin, virtualViewableMax);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_SetupUI3DForFullscreen(struct ScreenPlacement* ui3DScrPlace, struct ScreenPlacement* fullScrPlace) -> void
{
  return Zynamic::Forward<void (struct ScreenPlacement*, struct ScreenPlacement*)>(L"ScrPlace_SetupUI3DForFullscreen")(ui3DScrPlace, fullScrPlace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_SetupFloatViewport(struct ScreenPlacement* scrPlace, float viewportX, float viewportY, float viewportWidth, float viewportHeight, float aspect) -> void
{
  return Zynamic::Forward<void (struct ScreenPlacement*, float, float, float, float, float)>(L"ScrPlace_SetupFloatViewport")(scrPlace, viewportX, viewportY, viewportWidth, viewportHeight, aspect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_SetupViewport(struct ScreenPlacement* scrPlace, int viewportX, int viewportY, int viewportWidth, int viewportHeight, float aspect) -> void
{
  return Zynamic::Forward<void (struct ScreenPlacement*, int, int, int, int, float)>(L"ScrPlace_SetupViewport")(scrPlace, viewportX, viewportY, viewportWidth, viewportHeight, aspect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_SetupUnsafeViewport(struct ScreenPlacement* scrPlace, int viewportX, int viewportY, int viewportWidth, int viewportHeight, float aspect) -> void
{
  return Zynamic::Forward<void (struct ScreenPlacement*, int, int, int, int, float)>(L"ScrPlace_SetupUnsafeViewport")(scrPlace, viewportX, viewportY, viewportWidth, viewportHeight, aspect);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_ApplyXinverse(const struct ScreenPlacement* scrPlace, float x, int horzAlign) -> float
{
  return Zynamic::Forward<float (const struct ScreenPlacement*, float, int)>(L"ScrPlace_ApplyXinverse")(scrPlace, x, horzAlign);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_ApplyYinverse(const struct ScreenPlacement* scrPlace, float y, int vertAlign) -> float
{
  return Zynamic::Forward<float (const struct ScreenPlacement*, float, int)>(L"ScrPlace_ApplyYinverse")(scrPlace, y, vertAlign);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_ApplyX(const struct ScreenPlacement* scrPlace, float x, int horzAlign) -> float
{
  return Zynamic::Forward<float (const struct ScreenPlacement*, float, int)>(L"ScrPlace_ApplyX")(scrPlace, x, horzAlign);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_ApplyY(const struct ScreenPlacement* scrPlace, float y, int vertAlign) -> float
{
  return Zynamic::Forward<float (const struct ScreenPlacement*, float, int)>(L"ScrPlace_ApplyY")(scrPlace, y, vertAlign);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_ApplyW(const struct ScreenPlacement* scrPlace, float w, int horzAlign) -> float
{
  return Zynamic::Forward<float (const struct ScreenPlacement*, float, int)>(L"ScrPlace_ApplyW")(scrPlace, w, horzAlign);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_ApplyH(const struct ScreenPlacement* scrPlace, float h, int vertAlign) -> float
{
  return Zynamic::Forward<float (const struct ScreenPlacement*, float, int)>(L"ScrPlace_ApplyH")(scrPlace, h, vertAlign);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ScrPlace_ApplyRect(const struct ScreenPlacement* scrPlace, float* x, float* y, float* w, float* h, int horzAlign, int vertAlign) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float*, float*, float*, float*, int, int)>(L"ScrPlace_ApplyRect")(scrPlace, x, y, w, h, horzAlign, vertAlign);
}

#endif // __UNIMPLEMENTED__
