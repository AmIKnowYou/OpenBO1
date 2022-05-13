//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CreateBasicBuffer(struct IDirectSound8* lpDirectSound, struct IDirectSoundBuffer** ppDsb, int sampleRate, int channels, int bufferSize) -> HRESULT
{
  return Zynamic::Forward<HRESULT (struct IDirectSound8*, struct IDirectSoundBuffer**, int, int, int)>(L"CreateBasicBuffer")(lpDirectSound, ppDsb, sampleRate, channels, bufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DSound_GetBytesLeft(struct dsound_sample_t* sample) -> int
{
  return Zynamic::Forward<int (struct dsound_sample_t*)>(L"DSound_GetBytesLeft")(sample);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DSound_UpdateSample(struct dsound_sample_t* sample, char* data, unsigned int data_len) -> int
{
  return Zynamic::Forward<int (struct dsound_sample_t*, char*, unsigned int)>(L"DSound_UpdateSample")(sample, data, data_len);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DSound_AdjustSamplePlayback(struct dsound_sample_t* sample, int bytesLeft) -> void
{
  return Zynamic::Forward<void (struct dsound_sample_t*, int)>(L"DSound_AdjustSamplePlayback")(sample, bytesLeft);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DSound_BufferUnderrunOccurred(struct dsound_sample_t* sample, unsigned long currentPlayPos) -> bool
{
  return Zynamic::Forward<bool (struct dsound_sample_t*, unsigned long)>(L"DSound_BufferUnderrunOccurred")(sample, currentPlayPos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DSound_HandleBufferUnderrun(struct dsound_sample_t* sample) -> void
{
  return Zynamic::Forward<void (struct dsound_sample_t*)>(L"DSound_HandleBufferUnderrun")(sample);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DSound_SampleFrame(struct dsound_sample_t* sample) -> void
{
  return Zynamic::Forward<void (struct dsound_sample_t*)>(L"DSound_SampleFrame")(sample);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DSound_NewSample() -> struct dsound_sample_t*
{
  return Zynamic::Forward<struct dsound_sample_t* ()>(L"DSound_NewSample")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DSound_StopSample(struct dsound_sample_t* sample) -> bool
{
  return Zynamic::Forward<bool (struct dsound_sample_t*)>(L"DSound_StopSample")(sample);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DSound_Init(bool callDsoundInit, const void* handle) -> int
{
  return Zynamic::Forward<int (bool, const void*)>(L"DSound_Init")(callDsoundInit, handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DSound_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"DSound_Shutdown")();
}

#endif // __UNIMPLEMENTED__
