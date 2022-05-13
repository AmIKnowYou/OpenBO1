//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SND_DebugInit() -> void
{
  return Zynamic::Forward<void ()>(L"SND_DebugInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DebugFini() -> void
{
  return Zynamic::Forward<void ()>(L"SND_DebugFini")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RelativeToListener(const struct snd_listener* listener, float yaw, float pitch, float dist, float* result) -> void
{
  return Zynamic::Forward<void (const struct snd_listener*, float, float, float, float*)>(L"RelativeToListener")(listener, yaw, pitch, dist, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FontSizeForDistance(float distance) -> float
{
  return Zynamic::Forward<float (float)>(L"FontSizeForDistance")(distance);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DebugDrawWorldSound3D(int idx, int debugDrawStyle, int* offsets, int* closestId, float* closestIdDotProd) -> void
{
  return Zynamic::Forward<void (int, int, int*, int*, float*)>(L"DebugDrawWorldSound3D")(idx, debugDrawStyle, offsets, closestId, closestIdDotProd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DebugDrawWorldSounds(int debugDrawStyle) -> void
{
  return Zynamic::Forward<void (int)>(L"SND_DebugDrawWorldSounds")(debugDrawStyle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PlayLocal_f() -> void
{
  return Zynamic::Forward<void ()>(L"SND_PlayLocal_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetSoundOverlay(struct snd_overlay_info* info, int start, int count) -> int
{
  return Zynamic::Forward<int (struct snd_overlay_info*, int, int)>(L"SND_GetSoundOverlay")(info, start, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetSoundOverlay(enum snd_overlay_type type, struct snd_overlay_info* info, int maxcount) -> int
{
  return Zynamic::Forward<int (enum snd_overlay_type, struct snd_overlay_info*, int)>(L"SND_GetSoundOverlay")(type, info, maxcount);
}

#endif // __UNIMPLEMENTED__
