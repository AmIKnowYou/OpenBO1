//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto dwReadFileFailure(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"dwReadFileFailure")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwReadFileSuccess(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"dwReadFileSuccess")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwReadFileInternal(int localControllerIndex, struct dwFileTask* const fileTask, unsigned __int64 ownerUID) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileTask* const, unsigned __int64)>(L"dwReadFileInternal")(localControllerIndex, fileTask, ownerUID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwReadFile(int localControllerIndex, struct dwFileTask* const fileTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileTask* const)>(L"dwReadFile")(localControllerIndex, fileTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwReadUserFile(int localControllerIndex, struct dwFileTask* const fileTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileTask* const)>(L"dwReadUserFile")(localControllerIndex, fileTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwReadUserFileByUserID(int localControllerIndex, struct dwFileTask* const fileTask, unsigned __int64 xuid) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileTask* const, unsigned __int64)>(L"dwReadUserFileByUserID")(localControllerIndex, fileTask, xuid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwDeleteFileFailure(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"dwDeleteFileFailure")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwDeleteFile(int localControllerIndex, const char* const filename) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, const char* const)>(L"dwDeleteFile")(localControllerIndex, filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwWriteFileFailure(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"dwWriteFileFailure")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwWriteFile(int localControllerIndex, const char* const filename, void* data, const unsigned int dataSize, class bdFileInfo* fileInfo, unsigned __int64 ownerID) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, const char* const, void*, const unsigned int, class bdFileInfo*, unsigned __int64)>(L"dwWriteFile")(localControllerIndex, filename, data, dataSize, fileInfo, ownerID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareGetListing(int localControllerIndex, struct dwFileShareListTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareListTask* const)>(L"dwFileShareGetListing")(localControllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareGetRating(int localControllerIndex, struct dwFileShareGetRatingTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareGetRatingTask* const)>(L"dwFileShareGetRating")(localControllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareGetTopRated(int localControllerIndex, struct dwFileShareGetTopRatedTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareGetTopRatedTask* const)>(L"dwFileShareGetTopRated")(localControllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareLocationToCollectionID(enum fileShareLocation location, unsigned int* collectionID) -> bool
{
  return Zynamic::Forward<bool (enum fileShareLocation, unsigned int*)>(L"dwFileShareLocationToCollectionID")(location, collectionID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareSearch(int localControllerIndex, struct dwFileShareSearchTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareSearchTask* const)>(L"dwFileShareSearch")(localControllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareGetDescriptorsFromPooledStorage(int localControllerIndex, struct dwFileShareDescriptorsTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareDescriptorsTask* const)>(L"dwFileShareGetDescriptorsFromPooledStorage")(localControllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareGetDescriptorsFromUserStorage(int localControllerIndex, struct dwFileShareDescriptorsTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareDescriptorsTask* const)>(L"dwFileShareGetDescriptorsFromUserStorage")(localControllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareGetDescriptors(int localControllerIndex, struct dwFileShareDescriptorsTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareDescriptorsTask* const)>(L"dwFileShareGetDescriptors")(localControllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareReadPooledStorageFile(int controllerIndex, struct dwFileShareReadFileTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareReadFileTask* const)>(L"dwFileShareReadPooledStorageFile")(controllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareReadUserStorageFile(int controllerIndex, struct dwFileShareReadFileTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareReadFileTask* const)>(L"dwFileShareReadUserStorageFile")(controllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareReadFile(int controllerIndex, struct dwFileShareReadFileTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareReadFileTask* const)>(L"dwFileShareReadFile")(controllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareRemoveFile(int controllerIndex, struct dwFileShareRemoveTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareRemoveTask* const)>(L"dwFileShareRemoveFile")(controllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareTransferFile(int controllerIndex, struct dwFileShareTransferTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareTransferTask* const)>(L"dwFileShareTransferFile")(controllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareGetSummary(int controllerIndex, struct dwFileShareSummaryTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareSummaryTask* const)>(L"dwFileShareGetSummary")(controllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareSetPooledSummary(int controllerIndex, struct dwFileShareSummaryTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareSummaryTask* const)>(L"dwFileShareSetPooledSummary")(controllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareSetUserSummary(int controllerIndex, struct dwFileShareSummaryTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareSummaryTask* const)>(L"dwFileShareSetUserSummary")(controllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareSetSummary(int controllerIndex, struct dwFileShareSummaryTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareSummaryTask* const)>(L"dwFileShareSetSummary")(controllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareWritePooledStorageFile(int controllerIndex, struct dwFileShareWriteFileTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareWriteFileTask* const)>(L"dwFileShareWritePooledStorageFile")(controllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareWriteUserStorageFile(int controllerIndex, struct dwFileShareWriteFileTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareWriteFileTask* const)>(L"dwFileShareWriteUserStorageFile")(controllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareWriteFile(int controllerIndex, struct dwFileShareWriteFileTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareWriteFileTask* const)>(L"dwFileShareWriteFile")(controllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareGetProgressPooled(int localControllerIndex, unsigned int* bytes, float* dataRate) -> void
{
  return Zynamic::Forward<void (int, unsigned int*, float*)>(L"dwFileShareGetProgressPooled")(localControllerIndex, bytes, dataRate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareGetProgressUser(int localControllerIndex, unsigned int* bytes, float* dataRate) -> void
{
  return Zynamic::Forward<void (int, unsigned int*, float*)>(L"dwFileShareGetProgressUser")(localControllerIndex, bytes, dataRate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareGetProgress(int localControllerIndex, unsigned int* bytes, float* dataRate, enum fileShareLocation location) -> void
{
  return Zynamic::Forward<void (int, unsigned int*, float*, enum fileShareLocation)>(L"dwFileShareGetProgress")(localControllerIndex, bytes, dataRate, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareAbortOperationPooled(int localControllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"dwFileShareAbortOperationPooled")(localControllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareAbortOperationUser(int localControllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"dwFileShareAbortOperationUser")(localControllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareAbortOperation(int localControllerIndex, enum fileShareLocation location) -> void
{
  return Zynamic::Forward<void (int, enum fileShareLocation)>(L"dwFileShareAbortOperation")(localControllerIndex, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareGetLastHTTPErrorPooled(int localControllerIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"dwFileShareGetLastHTTPErrorPooled")(localControllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareGetLastHTTPErrorUser(int localControllerIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"dwFileShareGetLastHTTPErrorUser")(localControllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareGetLastHTTPError(int localControllerIndex, enum fileShareLocation location) -> int
{
  return Zynamic::Forward<int (int, enum fileShareLocation)>(L"dwFileShareGetLastHTTPError")(localControllerIndex, location);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwFileShareSubmitRating(int localControllerIndex, struct dwFileShareSubmitRatingTask* const fsTask) -> struct TaskRecord*
{
  return Zynamic::Forward<struct TaskRecord* (int, struct dwFileShareSubmitRatingTask* const)>(L"dwFileShareSubmitRating")(localControllerIndex, fsTask);
}

#endif // __UNIMPLEMENTED__
