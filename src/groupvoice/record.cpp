//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Record_SetRecordingCallback(function* new_audioCallback) -> void
{
  return Zynamic::Forward<void (function *)>(L"Record_SetRecordingCallback")(new_audioCallback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Record_QueueAudioDataForEncoding(struct audioSample_t* sample) -> int
{
  return Zynamic::Forward<int (struct audioSample_t*)>(L"Record_QueueAudioDataForEncoding")(sample);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Record_AudioCallback(struct audioSample_t* sample) -> int
{
  return Zynamic::Forward<int (struct audioSample_t*)>(L"Record_AudioCallback")(sample);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Record_Start(struct dsound_sample_t* sample) -> int
{
  return Zynamic::Forward<int (struct dsound_sample_t*)>(L"Record_Start")(sample);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Record_Stop(struct dsound_sample_t* sample) -> int
{
  return Zynamic::Forward<int (struct dsound_sample_t*)>(L"Record_Stop")(sample);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Record_NewSample() -> struct dsound_sample_t*
{
  return Zynamic::Forward<struct dsound_sample_t* ()>(L"Record_NewSample")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Record_DestroySample(struct dsound_sample_t* sample) -> int
{
  return Zynamic::Forward<int (struct dsound_sample_t*)>(L"Record_DestroySample")(sample);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Record_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"Record_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Record_Frame() -> void
{
  return Zynamic::Forward<void ()>(L"Record_Frame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Record_Init(bool callInit, const void* handle) -> int
{
  return Zynamic::Forward<int (bool, const void*)>(L"Record_Init")(callInit, handle);
}

#endif // __UNIMPLEMENTED__
