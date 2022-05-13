//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto avi_s::write_thread() -> void
{
  return Zynamic::Forward<public void ()>(L"avi_s::write_thread")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto avi_s::output_data(void* data, unsigned int size) -> unsigned int
{
  return Zynamic::Forward<public unsigned int (void*, unsigned int)>(L"avi_s::output_data")(data, size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto avi_s::create(const char* szFile, int width, int height, int fps) -> void
{
  return Zynamic::Forward<public void (const char*, int, int, int)>(L"avi_s::create")(szFile, width, height, fps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto avi_s::add_frame(unsigned char* y, unsigned char* u, unsigned char* v) -> void
{
  return Zynamic::Forward<public void (unsigned char*, unsigned char*, unsigned char*)>(L"avi_s::add_frame")(y, u, v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto avi_s::close() -> void
{
  return Zynamic::Forward<public void ()>(L"avi_s::close")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto avi_s::flush_samples() -> void
{
  return Zynamic::Forward<public void ()>(L"avi_s::flush_samples")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto avi_s::add_samples(short* in, int count) -> void
{
  return Zynamic::Forward<public void (short*, int)>(L"avi_s::add_samples")(in, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mjpeg_write_thread(void* __formal) -> unsigned long
{
  return Zynamic::Forward<unsigned long (void*)>(L"mjpeg_write_thread")(__formal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mjpeg_create(const char* szFile, int width, int height, int fps) -> void
{
  return Zynamic::Forward<void (const char*, int, int, int)>(L"mjpeg_create")(szFile, width, height, fps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mjpeg_add_frame(unsigned char* y, unsigned char* u, unsigned char* v) -> void
{
  return Zynamic::Forward<void (unsigned char*, unsigned char*, unsigned char*)>(L"mjpeg_add_frame")(y, u, v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mjpeg_close_int() -> void
{
  return Zynamic::Forward<void ()>(L"mjpeg_close_int")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mjpeg_add_samples(short* in, int count) -> void
{
  return Zynamic::Forward<void (short*, int)>(L"mjpeg_add_samples")(in, count);
}

#endif // __UNIMPLEMENTED__
