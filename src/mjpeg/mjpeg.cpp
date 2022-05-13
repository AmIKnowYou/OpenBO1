//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto mjpeg_initonce() -> void
{
  return Zynamic::Forward<void ()>(L"mjpeg_initonce")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mjpeg_set_callback(function* callback) -> void
{
  return Zynamic::Forward<void (function *)>(L"mjpeg_set_callback")(callback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mjpeg_init() -> void
{
  return Zynamic::Forward<void ()>(L"mjpeg_init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mjpeg_is_encoding() -> bool
{
  return Zynamic::Forward<bool ()>(L"mjpeg_is_encoding")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mjpeg_thread(void* context) -> unsigned long
{
  return Zynamic::Forward<unsigned long (void*)>(L"mjpeg_thread")(context);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mjpeg_close() -> void
{
  return Zynamic::Forward<void ()>(L"mjpeg_close")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mjpeg_draw(struct IDirect3DDevice9* device, struct IDirect3DTexture9* frame) -> void
{
  return Zynamic::Forward<void (struct IDirect3DDevice9*, struct IDirect3DTexture9*)>(L"mjpeg_draw")(device, frame);
}

#endif // __UNIMPLEMENTED__
