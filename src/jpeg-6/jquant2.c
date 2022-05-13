//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void prescan_quantize(struct jpeg_decompress_struct* cinfo, unsigned char** input_buf, unsigned char** output_buf, int num_rows)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char**, unsigned char**, int)>(L"prescan_quantize")(cinfo, input_buf, output_buf, num_rows);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

struct box* find_biggest_color_pop(struct box* boxlist, int numboxes)
{
  return Zynamic::Forward<struct box* (struct box*, int)>(L"find_biggest_color_pop")(boxlist, numboxes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

struct box* find_biggest_volume(struct box* boxlist, int numboxes)
{
  return Zynamic::Forward<struct box* (struct box*, int)>(L"find_biggest_volume")(boxlist, numboxes);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void update_box(struct jpeg_decompress_struct* cinfo, struct box* boxp)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, struct box*)>(L"update_box")(cinfo, boxp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

int median_cut(struct jpeg_decompress_struct* cinfo, struct box* boxlist, int numboxes, int desired_colors)
{
  return Zynamic::Forward<int (struct jpeg_decompress_struct*, struct box*, int, int)>(L"median_cut")(cinfo, boxlist, numboxes, desired_colors);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void compute_color(struct jpeg_decompress_struct* cinfo, struct box* boxp, int icolor)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, struct box*, int)>(L"compute_color")(cinfo, boxp, icolor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void select_colors(struct jpeg_decompress_struct* cinfo, int desired_colors)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, int)>(L"select_colors")(cinfo, desired_colors);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

int find_nearby_colors(struct jpeg_decompress_struct* cinfo, int minc0, int minc1, int minc2, unsigned char* colorlist)
{
  return Zynamic::Forward<int (struct jpeg_decompress_struct*, int, int, int, unsigned char*)>(L"find_nearby_colors")(cinfo, minc0, minc1, minc2, colorlist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void find_best_colors(struct jpeg_decompress_struct* cinfo, int minc0, int minc1, int minc2, int numcolors, unsigned char* colorlist, unsigned char* bestcolor)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, int, int, int, int, unsigned char*, unsigned char*)>(L"find_best_colors")(cinfo, minc0, minc1, minc2, numcolors, colorlist, bestcolor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void fill_inverse_cmap(struct jpeg_decompress_struct* cinfo, int c0, int c1, int c2)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, int, int, int)>(L"fill_inverse_cmap")(cinfo, c0, c1, c2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void pass2_no_dither(struct jpeg_decompress_struct* cinfo, unsigned char** input_buf, unsigned char** output_buf, int num_rows)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char**, unsigned char**, int)>(L"pass2_no_dither")(cinfo, input_buf, output_buf, num_rows);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void pass2_fs_dither(struct jpeg_decompress_struct* cinfo, unsigned char** input_buf, unsigned char** output_buf, int num_rows)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char**, unsigned char**, int)>(L"pass2_fs_dither")(cinfo, input_buf, output_buf, num_rows);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void init_error_limit(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"init_error_limit")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void finish_pass1(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"finish_pass1")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void start_pass_2_quant(struct jpeg_decompress_struct* cinfo, unsigned char is_pre_scan)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*, unsigned char)>(L"start_pass_2_quant")(cinfo, is_pre_scan);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void new_color_map_2_quant(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"new_color_map_2_quant")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_2pass_quantizer(struct jpeg_decompress_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_decompress_struct*)>(L"jinit_2pass_quantizer")(cinfo);
}

#endif // __UNIMPLEMENTED__