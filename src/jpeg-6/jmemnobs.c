//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void* jpeg_get_small(struct jpeg_common_struct* cinfo, unsigned int sizeofobject)
{
  return Zynamic::Forward<void* (struct jpeg_common_struct*, unsigned int)>(L"jpeg_get_small")(cinfo, sizeofobject);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jpeg_free_small(struct jpeg_common_struct* cinfo, void* object, unsigned int sizeofobject)
{
  return Zynamic::Forward<void (struct jpeg_common_struct*, void*, unsigned int)>(L"jpeg_free_small")(cinfo, object, sizeofobject);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

long jpeg_mem_available(struct jpeg_common_struct* cinfo, long min_bytes_needed, long max_bytes_needed, long already_allocated)
{
  return Zynamic::Forward<long (struct jpeg_common_struct*, long, long, long)>(L"jpeg_mem_available")(cinfo, min_bytes_needed, max_bytes_needed, already_allocated);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jpeg_open_backing_store(struct jpeg_common_struct* cinfo, struct backing_store_struct* info, long total_bytes_needed)
{
  return Zynamic::Forward<void (struct jpeg_common_struct*, struct backing_store_struct*, long)>(L"jpeg_open_backing_store")(cinfo, info, total_bytes_needed);
}

#endif // __UNIMPLEMENTED__