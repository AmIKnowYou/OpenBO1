//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Sound_UpdateSample(struct dsound_sample_t* sample, char* data, unsigned int data_len) -> int
{
  return Zynamic::Forward<int (struct dsound_sample_t*, char*, unsigned int)>(L"Sound_UpdateSample")(sample, data, data_len);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sound_NewSample() -> struct dsound_sample_t*
{
  return Zynamic::Forward<struct dsound_sample_t* ()>(L"Sound_NewSample")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sound_DestroySample(struct dsound_sample_t* sample) -> int
{
  return Zynamic::Forward<int (struct dsound_sample_t*)>(L"Sound_DestroySample")(sample);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sound_StopSample(struct dsound_sample_t* sample) -> bool
{
  return Zynamic::Forward<bool (struct dsound_sample_t*)>(L"Sound_StopSample")(sample);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sound_Frame() -> void
{
  return Zynamic::Forward<void ()>(L"Sound_Frame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sound_SampleFrame(struct dsound_sample_t* sample) -> void
{
  return Zynamic::Forward<void (struct dsound_sample_t*)>(L"Sound_SampleFrame")(sample);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sound_Init(const void* handle) -> int
{
  return Zynamic::Forward<int (const void*)>(L"Sound_Init")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sound_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"Sound_Shutdown")();
}

#endif // __UNIMPLEMENTED__
