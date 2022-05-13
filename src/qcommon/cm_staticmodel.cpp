//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CM_Hunk_AllocXModel(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"CM_Hunk_AllocXModel")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_Hunk_AllocXModelColl(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"CM_Hunk_AllocXModelColl")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_XModelPrecache(const char* name) -> struct XModel*
{
  return Zynamic::Forward<struct XModel* (const char*)>(L"CM_XModelPrecache")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceStaticModel(struct cStaticModel_s* sm, struct trace_t* results, const float* start, const float* end, int contentmask) -> void
{
  return Zynamic::Forward<void (struct cStaticModel_s*, struct trace_t*, const float*, const float*, int)>(L"CM_TraceStaticModel")(sm, results, start, end, contentmask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CM_TraceStaticModelComplete(struct cStaticModel_s* sm, const float* start, const float* end, int contentmask) -> int
{
  return Zynamic::Forward<int (struct cStaticModel_s*, const float*, const float*, int)>(L"CM_TraceStaticModelComplete")(sm, start, end, contentmask);
}

#endif // __UNIMPLEMENTED__
