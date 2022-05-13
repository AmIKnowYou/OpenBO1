//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_RespondToMissingCaps(enum DxCapsResponse response, const char* msg) -> void
{
  return Zynamic::Forward<void (enum DxCapsResponse, const char*)>(L"R_RespondToMissingCaps")(response, msg);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_CheckDxCaps(const struct _D3DCAPS9* caps) -> void
{
  return Zynamic::Forward<void (const struct _D3DCAPS9*)>(L"R_CheckDxCaps")(caps);
}

#endif // __UNIMPLEMENTED__
