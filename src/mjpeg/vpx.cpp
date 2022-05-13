//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto mem_put_le16(char* mem, unsigned int val) -> void
{
  return Zynamic::Forward<void (char*, unsigned int)>(L"mem_put_le16")(mem, val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto mem_put_le32(char* mem, unsigned int val) -> void
{
  return Zynamic::Forward<void (char*, unsigned int)>(L"mem_put_le32")(mem, val);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto write_ivf_file_header(struct _iobuf* outfile, const struct vpx_codec_enc_cfg* cfg, int frame_cnt) -> void
{
  return Zynamic::Forward<void (struct _iobuf*, const struct vpx_codec_enc_cfg*, int)>(L"write_ivf_file_header")(outfile, cfg, frame_cnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto write_ivf_frame_header(struct _iobuf* outfile, const struct vpx_codec_cx_pkt* pkt) -> void
{
  return Zynamic::Forward<void (struct _iobuf*, const struct vpx_codec_cx_pkt*)>(L"write_ivf_frame_header")(outfile, pkt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vpx_init(const char* filename, int width, int height) -> void
{
  return Zynamic::Forward<void (const char*, int, int)>(L"vpx_init")(filename, width, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vpx_encode_frame(unsigned char* y, unsigned char* u, unsigned char* v, bool eof) -> void
{
  return Zynamic::Forward<void (unsigned char*, unsigned char*, unsigned char*, bool)>(L"vpx_encode_frame")(y, u, v, eof);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vpx_shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"vpx_shutdown")();
}

#endif // __UNIMPLEMENTED__
