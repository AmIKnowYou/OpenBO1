//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Snd_LosOcclusionMultiTrace(int* global_cache, const float* listener, const float* playback, const float* dlistener, const float* dplayback, float listen_step, float playback_step, unsigned int listen_rays, unsigned int playback_rays, unsigned int* valid, unsigned int* hits) -> void
{
  return Zynamic::Forward<void (int*, const float*, const float*, const float*, const float*, float, float, unsigned int, unsigned int, unsigned int*, unsigned int*)>(L"Snd_LosOcclusionMultiTrace")(global_cache, listener, playback, dlistener, dplayback, listen_step, playback_step, listen_rays, playback_rays, valid, hits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LosOcclusionTrace(bool fancy, int* cache, const float* listener, const float* playback) -> float
{
  return Zynamic::Forward<float (bool, int*, const float*, const float*)>(L"SND_LosOcclusionTrace")(fancy, cache, listener, playback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SurfaceTypeToReflectance(unsigned int surface) -> float
{
  return Zynamic::Forward<float (unsigned int)>(L"SND_SurfaceTypeToReflectance")(surface);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_TraceProximity(float* front, float* origin, float* resultDistance, float* resultReflection) -> void
{
  return Zynamic::Forward<void (float*, float*, float*, float*)>(L"SND_TraceProximity")(front, origin, resultDistance, resultReflection);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateProximity() -> void
{
  return Zynamic::Forward<void ()>(L"SND_UpdateProximity")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LosOcclusionCmd() -> void
{
  return Zynamic::Forward<void ()>(L"SND_LosOcclusionCmd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LosOcclusionUpdate() -> void
{
  return Zynamic::Forward<void ()>(L"SND_LosOcclusionUpdate")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LosOcclusionThreadMain(unsigned int context) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"SND_LosOcclusionThreadMain")(context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LosOcclusionInit() -> void
{
  return Zynamic::Forward<void ()>(L"SND_LosOcclusionInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LosOcclusionFini() -> void
{
  return Zynamic::Forward<void ()>(L"SND_LosOcclusionFini")();
}

#endif // __UNIMPLEMENTED__
