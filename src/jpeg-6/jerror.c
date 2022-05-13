//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void error_exit(struct jpeg_common_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_common_struct*)>(L"error_exit")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void output_message(struct jpeg_common_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_common_struct*)>(L"output_message")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void emit_message(struct jpeg_common_struct* cinfo, int msg_level)
{
  return Zynamic::Forward<void (struct jpeg_common_struct*, int)>(L"emit_message")(cinfo, msg_level);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void format_message(struct jpeg_common_struct* cinfo, char* buffer)
{
  return Zynamic::Forward<void (struct jpeg_common_struct*, char*)>(L"format_message")(cinfo, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void reset_error_mgr(struct jpeg_common_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_common_struct*)>(L"reset_error_mgr")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

struct jpeg_error_mgr* jpeg_std_error(struct jpeg_error_mgr* err, function * exit, function * printf)
{
  return Zynamic::Forward<struct jpeg_error_mgr* (struct jpeg_error_mgr*, function *, function *)>(L"jpeg_std_error")(err, exit, printf);
}

#endif // __UNIMPLEMENTED__