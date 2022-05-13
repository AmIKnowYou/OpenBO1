//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Snd_StreamBufferInit(struct snd_buffer* buffer, char* data) -> void
{
  return Zynamic::Forward<void (struct snd_buffer*, char*)>(L"Snd_StreamBufferInit")(buffer, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamReset(struct snd_stream* stream) -> void
{
  return Zynamic::Forward<void (struct snd_stream*)>(L"Snd_StreamReset")(stream);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamInit() -> void
{
  return Zynamic::Forward<void ()>(L"Snd_StreamInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamFini() -> void
{
  return Zynamic::Forward<void ()>(L"Snd_StreamFini")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StreamCloseFiles() -> void
{
  return Zynamic::Forward<void ()>(L"SND_StreamCloseFiles")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamOpen(unsigned int index, const char* filename, bool looping, unsigned int prime_size, char* prime_data) -> void
{
  return Zynamic::Forward<void (unsigned int, const char*, bool, unsigned int, char*)>(L"Snd_StreamOpen")(index, filename, looping, prime_size, prime_data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamClose(unsigned int index) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"Snd_StreamClose")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamStatus(unsigned int index) -> enum snd_stream_status
{
  return Zynamic::Forward<enum snd_stream_status (unsigned int)>(L"Snd_StreamStatus")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamGetHeader(unsigned int index) -> const struct snd_asset*
{
  return Zynamic::Forward<const struct snd_asset* (unsigned int)>(L"Snd_StreamGetHeader")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StarvationError(struct snd_stream* stream) -> void
{
  return Zynamic::Forward<void (struct snd_stream*)>(L"Snd_StarvationError")(stream);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamIsInBufferStrict(struct snd_buffer* buffer, unsigned int offset_in_file) -> bool
{
  return Zynamic::Forward<bool (struct snd_buffer*, unsigned int)>(L"Snd_StreamIsInBufferStrict")(buffer, offset_in_file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamIsInBuffer(struct snd_buffer* buffer, unsigned int offset_in_file, unsigned int stream_length, bool looping) -> bool
{
  return Zynamic::Forward<bool (struct snd_buffer*, unsigned int, unsigned int, bool)>(L"Snd_StreamIsInBuffer")(buffer, offset_in_file, stream_length, looping);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamGetWindow(struct snd_buffer* buffer, unsigned int offset_in_file, unsigned int stream_length, bool looping, unsigned int* size, char** data) -> void
{
  return Zynamic::Forward<void (struct snd_buffer*, unsigned int, unsigned int, bool, unsigned int*, char**)>(L"Snd_StreamGetWindow")(buffer, offset_in_file, stream_length, looping, size, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamGetFreeWindows(unsigned int index) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int)>(L"Snd_StreamGetFreeWindows")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamAcquireWindow(unsigned int index, unsigned int* size, unsigned int* position, char** data) -> enum snd_stream_status
{
  return Zynamic::Forward<enum snd_stream_status (unsigned int, unsigned int*, unsigned int*, char**)>(L"Snd_StreamAcquireWindow")(index, size, position, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamReleaseWindow(unsigned int index, char* data) -> void
{
  return Zynamic::Forward<void (unsigned int, char*)>(L"Snd_StreamReleaseWindow")(index, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamReleaseWindowWork(unsigned int index, char* data) -> void
{
  return Zynamic::Forward<void (unsigned int, char*)>(L"Snd_StreamReleaseWindowWork")(index, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamReleaseProcess(unsigned int index) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"Snd_StreamReleaseProcess")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamLoadHeader(struct snd_stream* s, char* data, const char* filename, unsigned int file_size) -> void
{
  return Zynamic::Forward<void (struct snd_stream*, char*, const char*, unsigned int)>(L"Snd_StreamLoadHeader")(s, data, filename, file_size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamGetRequest(struct snd_stream* s, struct snd_stream_request* r) -> void
{
  return Zynamic::Forward<void (struct snd_stream*, struct snd_stream_request*)>(L"Snd_StreamGetRequest")(s, r);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamSetRequest(struct snd_stream* s, struct snd_stream_request* r) -> bool
{
  return Zynamic::Forward<bool (struct snd_stream*, struct snd_stream_request*)>(L"Snd_StreamSetRequest")(s, r);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamSetError(struct snd_stream* s, struct snd_stream_request* r) -> void
{
  return Zynamic::Forward<void (struct snd_stream*, struct snd_stream_request*)>(L"Snd_StreamSetError")(s, r);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_FindBuffer(const char* filename, unsigned int offset) -> struct snd_buffer*
{
  return Zynamic::Forward<struct snd_buffer* (const char*, unsigned int)>(L"Snd_FindBuffer")(filename, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_LoadBuffer(unsigned int streamIndex, const char* filename, unsigned int offset) -> bool
{
  return Zynamic::Forward<bool (unsigned int, const char*, unsigned int)>(L"Snd_LoadBuffer")(streamIndex, filename, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_StreamUpdate() -> void
{
  return Zynamic::Forward<void ()>(L"Snd_StreamUpdate")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_FileOpen(const char* filename, struct snd_stream_file* file) -> bool
{
  return Zynamic::Forward<bool (const char*, struct snd_stream_file*)>(L"Snd_FileOpen")(filename, file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_FileClose(struct snd_stream_file* file) -> bool
{
  return Zynamic::Forward<bool (struct snd_stream_file*)>(L"Snd_FileClose")(file);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_FileRead(struct snd_stream_file* file, unsigned int offset, unsigned int size, void* data) -> bool
{
  return Zynamic::Forward<bool (struct snd_stream_file*, unsigned int, unsigned int, void*)>(L"Snd_FileRead")(file, offset, size, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_ReadBuffer(const char* filename, unsigned int start_offset, unsigned int size, struct snd_buffer* buffer) -> bool
{
  return Zynamic::Forward<bool (const char*, unsigned int, unsigned int, struct snd_buffer*)>(L"Snd_ReadBuffer")(filename, start_offset, size, buffer);
}

#endif // __UNIMPLEMENTED__
