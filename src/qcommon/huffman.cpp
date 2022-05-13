//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto add_bit(char bit, unsigned char* fout) -> void
{
  return Zynamic::Forward<void (char, unsigned char*)>(L"add_bit")(bit, fout);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto get_bit(const unsigned char* fin) -> int
{
  return Zynamic::Forward<int (const unsigned char*)>(L"get_bit")(fin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Huff_offsetReceive(struct nodetype* node, int* ch, const unsigned char* fin, int* offset) -> void
{
  return Zynamic::Forward<void (struct nodetype*, int*, const unsigned char*, int*)>(L"Huff_offsetReceive")(node, ch, fin, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto huffman_send(struct nodetype* node, struct nodetype* child, unsigned char* fout) -> void
{
  return Zynamic::Forward<void (struct nodetype*, struct nodetype*, unsigned char*)>(L"huffman_send")(node, child, fout);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Huff_offsetTransmit(struct huff_t* huff, int ch, unsigned char* fout, int* offset) -> void
{
  return Zynamic::Forward<void (struct huff_t*, int, unsigned char*, int*)>(L"Huff_offsetTransmit")(huff, ch, fout, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Huff_Init(struct huffman_t* huff) -> void
{
  return Zynamic::Forward<void (struct huffman_t*)>(L"Huff_Init")(huff);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Huff_initNode(struct huff_t* huff, int ch, int weight) -> struct nodetype*
{
  return Zynamic::Forward<struct nodetype* (struct huff_t*, int, int)>(L"Huff_initNode")(huff, ch, weight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto nodeCmp(const void* left, const void* right) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"nodeCmp")(left, right);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Huff_BuildFromData(struct huff_t* huff, const int* msg_hData) -> void
{
  return Zynamic::Forward<void (struct huff_t*, const int*)>(L"Huff_BuildFromData")(huff, msg_hData);
}

#endif // __UNIMPLEMENTED__
