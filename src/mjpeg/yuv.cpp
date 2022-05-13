//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto yuv_init_internal() -> void
{
  return Zynamic::Forward<void ()>(L"yuv_init_internal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto yuv_init(int width, int height, bool double_buffer) -> void
{
  return Zynamic::Forward<void (int, int, bool)>(L"yuv_init")(width, height, double_buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto yuv_encode_frame() -> bool
{
  return Zynamic::Forward<bool ()>(L"yuv_encode_frame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto yuv_get_buffers(unsigned char** y, unsigned char** u, unsigned char** v) -> void
{
  return Zynamic::Forward<void (unsigned char**, unsigned char**, unsigned char**)>(L"yuv_get_buffers")(y, u, v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto yuv_shutdown_internal() -> void
{
  return Zynamic::Forward<void ()>(L"yuv_shutdown_internal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto yuv_shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"yuv_shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto yuv_lost_device() -> void
{
  return Zynamic::Forward<void ()>(L"yuv_lost_device")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto yuv_recover_device() -> void
{
  return Zynamic::Forward<void ()>(L"yuv_recover_device")();
}

#endif // __UNIMPLEMENTED__
