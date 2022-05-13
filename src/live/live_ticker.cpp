//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto LiveTicker_GetStreamNameTextInternal(enum streamName_t streamName) -> const char*
{
  return Zynamic::Forward<const char* (enum streamName_t)>(L"LiveTicker_GetStreamNameTextInternal")(streamName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_DumpTickerInternal() -> void
{
  return Zynamic::Forward<void ()>(L"LiveTicker_DumpTickerInternal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_SetDefaultDisplayOrder() -> void
{
  return Zynamic::Forward<void ()>(L"LiveTicker_SetDefaultDisplayOrder")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_InitializeInternal() -> void
{
  return Zynamic::Forward<void ()>(L"LiveTicker_InitializeInternal")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_InsertMessageInternal(const char* text, const enum streamName_t streamName) -> void
{
  return Zynamic::Forward<void (const char*, const enum streamName_t)>(L"LiveTicker_InsertMessageInternal")(text, streamName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_IsStreamPopulated(enum streamName_t streamName) -> bool
{
  return Zynamic::Forward<bool (enum streamName_t)>(L"LiveTicker_IsStreamPopulated")(streamName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_GetTickerMessageTextWidth(const char* text, int maxChars, struct Font_s* font, float scale) -> int
{
  return Zynamic::Forward<int (const char*, int, struct Font_s*, float)>(L"LiveTicker_GetTickerMessageTextWidth")(text, maxChars, font, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_MoveToFirstStream() -> void
{
  return Zynamic::Forward<void ()>(L"LiveTicker_MoveToFirstStream")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_MoveToNextStream() -> void
{
  return Zynamic::Forward<void ()>(L"LiveTicker_MoveToNextStream")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_MoveToNextMessage(enum streamName_t streamName) -> void
{
  return Zynamic::Forward<void (enum streamName_t)>(L"LiveTicker_MoveToNextMessage")(streamName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_ReplaceMessages(const char* text, const enum streamName_t streamName, const bool isMultiple) -> void
{
  return Zynamic::Forward<void (const char*, const enum streamName_t, const bool)>(L"LiveTicker_ReplaceMessages")(text, streamName, isMultiple);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_AddMessages(const char* text, const enum streamName_t streamName, const bool isMultiple) -> void
{
  return Zynamic::Forward<void (const char*, const enum streamName_t, const bool)>(L"LiveTicker_AddMessages")(text, streamName, isMultiple);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_RemoveStream(const enum streamName_t streamName) -> void
{
  return Zynamic::Forward<void (const enum streamName_t)>(L"LiveTicker_RemoveStream")(streamName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_GetCurrentMessage(const float scrX, const float baseX, const float baseY, const float baseAlpha, struct Font_s* const font, const float scale, float& xCoord, float& yCoord, float& alpha) -> const char*
{
  return Zynamic::Forward<const char* (const float, const float, const float, const float, struct Font_s* const, const float, float&, float&, float&)>(L"LiveTicker_GetCurrentMessage")(scrX, baseX, baseY, baseAlpha, font, scale, xCoord, yCoord, alpha);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_GetCurrentMessageCategory(const float baseAlpha, float baseX, float baseWidth, struct Font_s* font, float baseScale, float& outXCoord, float& outAlpha, float& outScale) -> const char*
{
  return Zynamic::Forward<const char* (const float, float, float, struct Font_s*, float, float&, float&, float&)>(L"LiveTicker_GetCurrentMessageCategory")(baseAlpha, baseX, baseWidth, font, baseScale, outXCoord, outAlpha, outScale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_SetBatchSize(enum streamName_t streamName, int batchSize) -> void
{
  return Zynamic::Forward<void (enum streamName_t, int)>(L"LiveTicker_SetBatchSize")(streamName, batchSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_SetContractMsgsBatchSize_f() -> void
{
  return Zynamic::Forward<void ()>(L"LiveTicker_SetContractMsgsBatchSize_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_SetEventMsgsBatchSize_f() -> void
{
  return Zynamic::Forward<void ()>(L"LiveTicker_SetEventMsgsBatchSize_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_SetCODMsgsBatchSize_f() -> void
{
  return Zynamic::Forward<void ()>(L"LiveTicker_SetCODMsgsBatchSize_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_SetFriendMsgsBatchSize_f() -> void
{
  return Zynamic::Forward<void ()>(L"LiveTicker_SetFriendMsgsBatchSize_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_SetClanMsgsBatchSize_f() -> void
{
  return Zynamic::Forward<void ()>(L"LiveTicker_SetClanMsgsBatchSize_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_DumpTickerInternal_f() -> void
{
  return Zynamic::Forward<void ()>(L"LiveTicker_DumpTickerInternal_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LiveTicker_Init() -> void
{
  return Zynamic::Forward<void ()>(L"LiveTicker_Init")();
}

#endif // __UNIMPLEMENTED__
