//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto R_EndCmdBuf(struct GfxDelayedCmdBuf* delayedCmdBuf) -> void
{
  return Zynamic::Forward<void (struct GfxDelayedCmdBuf*)>(L"R_EndCmdBuf")(delayedCmdBuf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_AllocDrawSurf(struct GfxDelayedCmdBuf* delayedCmdBuf, union GfxDrawSurf drawSurf, struct GfxDrawSurfList* drawSurfList, unsigned int size) -> int
{
  return Zynamic::Forward<int (struct GfxDelayedCmdBuf*, union GfxDrawSurf, struct GfxDrawSurfList*, unsigned int)>(L"R_AllocDrawSurf")(delayedCmdBuf, drawSurf, drawSurfList, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_WritePrimDrawSurfInt(struct GfxDelayedCmdBuf* delayedCmdBuf, unsigned int value) -> void
{
  return Zynamic::Forward<void (struct GfxDelayedCmdBuf*, unsigned int)>(L"R_WritePrimDrawSurfInt")(delayedCmdBuf, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto R_WritePrimDrawSurfData(struct GfxDelayedCmdBuf* delayedCmdBuf, const void* data, unsigned int count) -> void
{
  return Zynamic::Forward<void (struct GfxDelayedCmdBuf*, const void*, unsigned int)>(L"R_WritePrimDrawSurfData")(delayedCmdBuf, data, count);
}

#endif // __UNIMPLEMENTED__
