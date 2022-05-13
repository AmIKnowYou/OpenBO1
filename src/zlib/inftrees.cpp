//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto inflate_table(enum codetype type, unsigned short* lens, unsigned int codes, struct code** table, unsigned int* bits, unsigned short* work) -> int
{
  return Zynamic::Forward<int (enum codetype, unsigned short*, unsigned int, struct code**, unsigned int*, unsigned short*)>(L"inflate_table")(type, lens, codes, table, bits, work);
}

#endif // __UNIMPLEMENTED__
