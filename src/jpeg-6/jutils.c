//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

long jdiv_round_up(long a, long b)
{
  return Zynamic::Forward<long (long, long)>(L"jdiv_round_up")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

long jround_up(long a, long b)
{
  return Zynamic::Forward<long (long, long)>(L"jround_up")(a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jcopy_sample_rows(unsigned char** input_array, int source_row, unsigned char** output_array, int dest_row, int num_rows, unsigned int num_cols)
{
  return Zynamic::Forward<void (unsigned char**, int, unsigned char**, int, int, unsigned int)>(L"jcopy_sample_rows")(input_array, source_row, output_array, dest_row, num_rows, num_cols);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jcopy_block_row(short* input_row[0x64], short* output_row[0x64], unsigned int num_blocks)
{
  return Zynamic::Forward<void (short*[0x64], short*[0x64], unsigned int)>(L"jcopy_block_row")(input_row, output_row, num_blocks);
}

#endif // __UNIMPLEMENTED__