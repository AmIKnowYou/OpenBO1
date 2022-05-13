//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Demo_GetKeyboardTitle() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"Demo_GetKeyboardTitle")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetKeyboardDefaultText() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"Demo_GetKeyboardDefaultText")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetKeyboardTextSize() -> int
{
  return Zynamic::Forward<int ()>(L"Demo_GetKeyboardTextSize")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_KeyboardComplete(int localClientNum, char* string, bool errorReported, const char* errorString) -> void
{
  return Zynamic::Forward<void (int, char*, bool, const char*)>(L"Demo_KeyboardComplete")(localClientNum, string, errorReported, errorString);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetStartAndEndTime(int* startTime, int* endTime) -> void
{
  return Zynamic::Forward<void (int*, int*)>(L"Demo_GetStartAndEndTime")(startTime, endTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetDuration(char* outputText, int duration) -> void
{
  return Zynamic::Forward<void (char*, int)>(L"Demo_GetDuration")(outputText, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetAuthor() -> char*
{
  return Zynamic::Forward<char* ()>(L"Demo_GetAuthor")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetTitleName() -> char*
{
  return Zynamic::Forward<char* ()>(L"Demo_GetTitleName")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetTitleDescription() -> char*
{
  return Zynamic::Forward<char* ()>(L"Demo_GetTitleDescription")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetTimeInfo() -> char*
{
  return Zynamic::Forward<char* ()>(L"Demo_GetTimeInfo")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetDuration() -> char*
{
  return Zynamic::Forward<char* ()>(L"Demo_GetDuration")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetSaveScreenName(const char* type) -> char*
{
  return Zynamic::Forward<char* (const char*)>(L"Demo_GetSaveScreenName")(type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetSaveScreenDescription(const char* type) -> char*
{
  return Zynamic::Forward<char* (const char*)>(L"Demo_GetSaveScreenDescription")(type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetConnectionTimeInfoForPlayer(int localClientNum, int* connectTime, int* disconnectTime) -> void
{
  return Zynamic::Forward<void (int, int*, int*)>(L"Demo_GetConnectionTimeInfoForPlayer")(localClientNum, connectTime, disconnectTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetPlayerIndexForClientNum(int clientNum, int serverTime) -> int
{
  return Zynamic::Forward<int (int, int)>(L"Demo_GetPlayerIndexForClientNum")(clientNum, serverTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetNextDefaultBookmarkForPlayer(int localClientNum, int index, int* type, int* time, float* color[0x4]) -> int
{
  return Zynamic::Forward<int (int, int, int*, int*, float*[0x4])>(L"Demo_GetNextDefaultBookmarkForPlayer")(localClientNum, index, type, time, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetClientNumForXuid(int localClientNum, unsigned __int64 xuid) -> int
{
  return Zynamic::Forward<int (int, unsigned __int64)>(L"Demo_GetClientNumForXuid")(localClientNum, xuid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetActivatedColorForButton(int demoControlButtonType, float* color[0x4]) -> bool
{
  return Zynamic::Forward<bool (int, float*[0x4])>(L"Demo_GetActivatedColorForButton")(demoControlButtonType, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_DrawVerticalLine(const struct ScreenPlacement* scrPlace, float x, float y, float w, float h, int horzAlign, int vertAlign, float s1, float t1, float s2, float t2, const float* color, struct Material* material) -> void
{
  return Zynamic::Forward<void (const struct ScreenPlacement*, float, float, float, float, int, int, float, float, float, float, const float*, struct Material*)>(L"Demo_DrawVerticalLine")(scrPlace, x, y, w, h, horzAlign, vertAlign, s1, t1, s2, t2, color, material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetSegmentCount() -> int
{
  return Zynamic::Forward<int ()>(L"Demo_GetSegmentCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetSegmentName(int index) -> char*
{
  return Zynamic::Forward<char* (int)>(L"Demo_GetSegmentName")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetSegmentTransition(int index) -> char*
{
  return Zynamic::Forward<char* (int)>(L"Demo_GetSegmentTransition")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_GetSegmentInformation(int index, const char* s) -> char*
{
  return Zynamic::Forward<char* (int, const char*)>(L"Demo_GetSegmentInformation")(index, s);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsPauseMenuOpen(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Demo_IsPauseMenuOpen")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_OpenSavePopUp(int localClientNum, int type) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Demo_OpenSavePopUp")(localClientNum, type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsSaveDialogOpen(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Demo_IsSaveDialogOpen")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_Error(int localClientNum, const char* errorTitle, const char* errorMessage) -> void
{
  return Zynamic::Forward<void (int, const char*, const char*)>(L"Demo_Error")(localClientNum, errorTitle, errorMessage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Demo_IsErrorDialogOpen(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Demo_IsErrorDialogOpen")(localClientNum);
}

#endif // __UNIMPLEMENTED__
