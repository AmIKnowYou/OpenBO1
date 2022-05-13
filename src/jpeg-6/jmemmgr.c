//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void out_of_memory(struct jpeg_common_struct* cinfo, int which)
{
  return Zynamic::Forward<void (struct jpeg_common_struct*, int)>(L"out_of_memory")(cinfo, which);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void* alloc_small(struct jpeg_common_struct* cinfo, int pool_id, unsigned int sizeofobject)
{
  return Zynamic::Forward<void* (struct jpeg_common_struct*, int, unsigned int)>(L"alloc_small")(cinfo, pool_id, sizeofobject);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void* alloc_large(struct jpeg_common_struct* cinfo, int pool_id, unsigned int sizeofobject)
{
  return Zynamic::Forward<void* (struct jpeg_common_struct*, int, unsigned int)>(L"alloc_large")(cinfo, pool_id, sizeofobject);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char** alloc_sarray(struct jpeg_common_struct* cinfo, int pool_id, unsigned int samplesperrow, unsigned int numrows)
{
  return Zynamic::Forward<unsigned char** (struct jpeg_common_struct*, int, unsigned int, unsigned int)>(L"alloc_sarray")(cinfo, pool_id, samplesperrow, numrows);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

short** alloc_barray(struct jpeg_common_struct* cinfo[0x64], int pool_id, unsigned int blocksperrow, unsigned int numrows)
{
  return Zynamic::Forward<short** (struct jpeg_common_struct*[0x64], int, unsigned int, unsigned int)>(L"alloc_barray")(cinfo, pool_id, blocksperrow, numrows);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

struct jvirt_sarray_control* request_virt_sarray(struct jpeg_common_struct* cinfo, int pool_id, unsigned char pre_zero, unsigned int samplesperrow, unsigned int numrows, unsigned int maxaccess)
{
  return Zynamic::Forward<struct jvirt_sarray_control* (struct jpeg_common_struct*, int, unsigned char, unsigned int, unsigned int, unsigned int)>(L"request_virt_sarray")(cinfo, pool_id, pre_zero, samplesperrow, numrows, maxaccess);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

struct jvirt_barray_control* request_virt_barray(struct jpeg_common_struct* cinfo, int pool_id, unsigned char pre_zero, unsigned int blocksperrow, unsigned int numrows, unsigned int maxaccess)
{
  return Zynamic::Forward<struct jvirt_barray_control* (struct jpeg_common_struct*, int, unsigned char, unsigned int, unsigned int, unsigned int)>(L"request_virt_barray")(cinfo, pool_id, pre_zero, blocksperrow, numrows, maxaccess);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void realize_virt_arrays(struct jpeg_common_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_common_struct*)>(L"realize_virt_arrays")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void do_sarray_io(struct jpeg_common_struct* cinfo, struct jvirt_sarray_control* ptr, unsigned char writing)
{
  return Zynamic::Forward<void (struct jpeg_common_struct*, struct jvirt_sarray_control*, unsigned char)>(L"do_sarray_io")(cinfo, ptr, writing);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void do_barray_io(struct jpeg_common_struct* cinfo, struct jvirt_barray_control* ptr, unsigned char writing)
{
  return Zynamic::Forward<void (struct jpeg_common_struct*, struct jvirt_barray_control*, unsigned char)>(L"do_barray_io")(cinfo, ptr, writing);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

unsigned char** access_virt_sarray(struct jpeg_common_struct* cinfo, struct jvirt_sarray_control* ptr, unsigned int start_row, unsigned int num_rows, unsigned char writable)
{
  return Zynamic::Forward<unsigned char** (struct jpeg_common_struct*, struct jvirt_sarray_control*, unsigned int, unsigned int, unsigned char)>(L"access_virt_sarray")(cinfo, ptr, start_row, num_rows, writable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

short** access_virt_barray(struct jpeg_common_struct* cinfo[0x64], struct jvirt_barray_control* ptr, unsigned int start_row, unsigned int num_rows, unsigned char writable)
{
  return Zynamic::Forward<short** (struct jpeg_common_struct*[0x64], struct jvirt_barray_control*, unsigned int, unsigned int, unsigned char)>(L"access_virt_barray")(cinfo, ptr, start_row, num_rows, writable);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void free_pool(struct jpeg_common_struct* cinfo, int pool_id)
{
  return Zynamic::Forward<void (struct jpeg_common_struct*, int)>(L"free_pool")(cinfo, pool_id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void self_destruct(struct jpeg_common_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_common_struct*)>(L"self_destruct")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jinit_memory_mgr(struct jpeg_common_struct* cinfo)
{
  return Zynamic::Forward<void (struct jpeg_common_struct*)>(L"jinit_memory_mgr")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void jpeg_set_jpeg_alloc(function * malloc_fn_ptr, function * free_fn_ptr)
{
  return Zynamic::Forward<void (function *, function *)>(L"jpeg_set_jpeg_alloc")(malloc_fn_ptr, free_fn_ptr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

struct jpeg_alloc* jpeg_get_jpeg_alloc(... )
{
  return Zynamic::Forward<struct jpeg_alloc* (...)>(L"jpeg_get_jpeg_alloc")();
}

#endif // __UNIMPLEMENTED__