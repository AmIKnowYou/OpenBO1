//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto _tr_init(struct internal_state* s) -> void
{
  return Zynamic::Forward<void (struct internal_state*)>(L"_tr_init")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto init_block(struct internal_state* s) -> void
{
  return Zynamic::Forward<void (struct internal_state*)>(L"init_block")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto pqdownheap(struct internal_state* s, struct ct_data_s* tree, int k) -> void
{
  return Zynamic::Forward<void (struct internal_state*, struct ct_data_s*, int)>(L"pqdownheap")(s, tree, k);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto gen_bitlen(struct internal_state* s, struct tree_desc_s* desc) -> void
{
  return Zynamic::Forward<void (struct internal_state*, struct tree_desc_s*)>(L"gen_bitlen")(s, desc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto gen_codes(struct ct_data_s* tree, int max_code, unsigned short* bl_count) -> void
{
  return Zynamic::Forward<void (struct ct_data_s*, int, unsigned short*)>(L"gen_codes")(tree, max_code, bl_count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto build_tree(struct internal_state* s, struct tree_desc_s* desc) -> void
{
  return Zynamic::Forward<void (struct internal_state*, struct tree_desc_s*)>(L"build_tree")(s, desc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto scan_tree(struct internal_state* s, struct ct_data_s* tree, int max_code) -> void
{
  return Zynamic::Forward<void (struct internal_state*, struct ct_data_s*, int)>(L"scan_tree")(s, tree, max_code);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto send_tree(struct internal_state* s, struct ct_data_s* tree, int max_code) -> void
{
  return Zynamic::Forward<void (struct internal_state*, struct ct_data_s*, int)>(L"send_tree")(s, tree, max_code);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto build_bl_tree(struct internal_state* s) -> int
{
  return Zynamic::Forward<int (struct internal_state*)>(L"build_bl_tree")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto send_all_trees(struct internal_state* s, int lcodes, int dcodes, int blcodes) -> void
{
  return Zynamic::Forward<void (struct internal_state*, int, int, int)>(L"send_all_trees")(s, lcodes, dcodes, blcodes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _tr_stored_block(struct internal_state* s, char* buf, unsigned long stored_len, int eof) -> void
{
  return Zynamic::Forward<void (struct internal_state*, char*, unsigned long, int)>(L"_tr_stored_block")(s, buf, stored_len, eof);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _tr_align(struct internal_state* s) -> void
{
  return Zynamic::Forward<void (struct internal_state*)>(L"_tr_align")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto _tr_flush_block(struct internal_state* s, char* buf, unsigned long stored_len, int eof) -> void
{
  return Zynamic::Forward<void (struct internal_state*, char*, unsigned long, int)>(L"_tr_flush_block")(s, buf, stored_len, eof);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto compress_block(struct internal_state* s, struct ct_data_s* ltree, struct ct_data_s* dtree) -> void
{
  return Zynamic::Forward<void (struct internal_state*, struct ct_data_s*, struct ct_data_s*)>(L"compress_block")(s, ltree, dtree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto set_data_type(struct internal_state* s) -> void
{
  return Zynamic::Forward<void (struct internal_state*)>(L"set_data_type")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto bi_reverse(unsigned int code, int len) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int, int)>(L"bi_reverse")(code, len);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto bi_flush(struct internal_state* s) -> void
{
  return Zynamic::Forward<void (struct internal_state*)>(L"bi_flush")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto bi_windup(struct internal_state* s) -> void
{
  return Zynamic::Forward<void (struct internal_state*)>(L"bi_windup")(s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto copy_block(struct internal_state* s, char* buf, unsigned int len, int header) -> void
{
  return Zynamic::Forward<void (struct internal_state*, char*, unsigned int, int)>(L"copy_block")(s, buf, len, header);
}

#endif // __UNIMPLEMENTED__
