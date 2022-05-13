//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Live_FileShare_CacheInit() -> bool
{
  return Zynamic::Forward<bool ()>(L"Live_FileShare_CacheInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_FileShare_CacheShutdown() -> void
{
  return Zynamic::Forward<void ()>(L"Live_FileShare_CacheShutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_FileShare_Hash(unsigned __int64 fileID, enum fileShareLocation location) -> int
{
  return Zynamic::Forward<int (unsigned __int64, enum fileShareLocation)>(L"Live_FileShare_Hash")(fileID, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_FileShare_IsCached(unsigned __int64 fileID, enum fileShareLocation location, int* index) -> bool
{
  return Zynamic::Forward<bool (unsigned __int64, enum fileShareLocation, int*)>(L"Live_FileShare_IsCached")(fileID, location, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_FileShareCache_AddDescriptor(unsigned __int64 fileID, enum fileShareLocation location, class bdFileMetaData* descriptor) -> void
{
  return Zynamic::Forward<void (unsigned __int64, enum fileShareLocation, class bdFileMetaData*)>(L"Live_FileShareCache_AddDescriptor")(fileID, location, descriptor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_FileShareCache_GetDescriptor(unsigned __int64 fileID, enum fileShareLocation location, class bdFileMetaData* descriptor) -> bool
{
  return Zynamic::Forward<bool (unsigned __int64, enum fileShareLocation, class bdFileMetaData*)>(L"Live_FileShareCache_GetDescriptor")(fileID, location, descriptor);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_FileShare_IsRatingCached(unsigned __int64 fileID, enum fileShareLocation location, int* index) -> bool
{
  return Zynamic::Forward<bool (unsigned __int64, enum fileShareLocation, int*)>(L"Live_FileShare_IsRatingCached")(fileID, location, index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_FileShareCache_AddRating(unsigned __int64 fileID, enum fileShareLocation location, class bdVoteRankStatsInfo* rating) -> void
{
  return Zynamic::Forward<void (unsigned __int64, enum fileShareLocation, class bdVoteRankStatsInfo*)>(L"Live_FileShareCache_AddRating")(fileID, location, rating);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Live_FileShareCache_GetRating(unsigned __int64 fileID, enum fileShareLocation location, class bdVoteRankStatsInfo* rating) -> bool
{
  return Zynamic::Forward<bool (unsigned __int64, enum fileShareLocation, class bdVoteRankStatsInfo*)>(L"Live_FileShareCache_GetRating")(fileID, location, rating);
}

#endif // __UNIMPLEMENTED__
