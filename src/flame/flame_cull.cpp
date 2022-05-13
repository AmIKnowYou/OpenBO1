//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Flame_Cull_Stream_Chunk(bool is_server, struct flameChunk_s* cull, struct flameChunk_s* keep) -> void
{
  return Zynamic::Forward<void (bool, struct flameChunk_s*, struct flameChunk_s*)>(L"Flame_Cull_Stream_Chunk")(is_server, cull, keep);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Flame_Cull_Stream_Chunks(bool is_server, struct flameStream_s* stream) -> void
{
  return Zynamic::Forward<void (bool, struct flameStream_s*)>(L"Flame_Cull_Stream_Chunks")(is_server, stream);
}

#endif // __UNIMPLEMENTED__
