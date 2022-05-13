//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_cl_console() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_cl_console")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ToggleConsole() -> void
{
  return Zynamic::Forward<void ()>(L"Con_ToggleConsole")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetupChatField(const int localClientNum, int teamChat, int widthInPixels) -> void
{
  return Zynamic::Forward<void (const int, int, int)>(L"SetupChatField")(localClientNum, teamChat, widthInPixels);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ChatModePublic_f() -> void
{
  return Zynamic::Forward<void ()>(L"Con_ChatModePublic_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ChatModeTeam_f() -> void
{
  return Zynamic::Forward<void ()>(L"Con_ChatModeTeam_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Echo_f() -> void
{
  return Zynamic::Forward<void ()>(L"Con_Echo_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_GetTextCopy(char* text, int maxSize) -> void
{
  return Zynamic::Forward<void (char*, int)>(L"Con_GetTextCopy")(text, maxSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ResetMessageWindowTimes(struct MessageWindow* msgwnd, int serverTime) -> void
{
  return Zynamic::Forward<void (struct MessageWindow*, int)>(L"Con_ResetMessageWindowTimes")(msgwnd, serverTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_TimeJumped(int localClientNum, int serverTime) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Con_TimeJumped")(localClientNum, serverTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_NudgeMessageWindowTimes(struct MessageWindow* msgwnd, int serverTimeNudge, int serverTime) -> void
{
  return Zynamic::Forward<void (struct MessageWindow*, int, int)>(L"Con_NudgeMessageWindowTimes")(msgwnd, serverTimeNudge, serverTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_TimeNudged(int localClientNum, int serverTimeNudge) -> void
{
  return Zynamic::Forward<void (int, int)>(L"Con_TimeNudged")(localClientNum, serverTimeNudge);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ClearMessageWindow(struct MessageWindow* msgwnd) -> void
{
  return Zynamic::Forward<void (struct MessageWindow*)>(L"Con_ClearMessageWindow")(msgwnd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ClearNotify(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Con_ClearNotify")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ClearMiniConsole(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Con_ClearMiniConsole")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ClearErrors(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Con_ClearErrors")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_CheckResize() -> void
{
  return Zynamic::Forward<void ()>(L"Con_CheckResize")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_InitMessageWindow(struct MessageWindow* msgwnd, struct Message* messages, struct MessageLine* lines, char* text, int lineCount, int padding, int textPoolSize, int scrollTime, int fadeIn, int fadeOut) -> void
{
  return Zynamic::Forward<void (struct MessageWindow*, struct Message*, struct MessageLine*, char*, int, int, int, int, int, int)>(L"Con_InitMessageWindow")(msgwnd, messages, lines, text, lineCount, padding, textPoolSize, scrollTime, fadeIn, fadeOut);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Clear_f() -> void
{
  return Zynamic::Forward<void ()>(L"Con_Clear_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_OneTimeInit() -> void
{
  return Zynamic::Forward<void ()>(L"Con_OneTimeInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Init() -> void
{
  return Zynamic::Forward<void ()>(L"Con_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GamerProfile_WriteSettings(int controllerIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"GamerProfile_WriteSettings")(controllerIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_InitClientAssets() -> void
{
  return Zynamic::Forward<void ()>(L"Con_InitClientAssets")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_GetDefaultMsgDuration(enum print_msg_dest_t dest) -> int
{
  return Zynamic::Forward<int (enum print_msg_dest_t)>(L"Con_GetDefaultMsgDuration")(dest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_UpdateMessage(int localClientNum, struct MessageWindow* msgwnd, int duration) -> void
{
  return Zynamic::Forward<void (int, struct MessageWindow*, int)>(L"Con_UpdateMessage")(localClientNum, msgwnd, duration);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_FreeFirstMessageWindowLine(struct MessageWindow* msgwnd) -> void
{
  return Zynamic::Forward<void (struct MessageWindow*)>(L"Con_FreeFirstMessageWindowLine")(msgwnd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_NeedToFreeMessageWindowLine(struct MessageWindow* msgwnd, int charCount) -> bool
{
  return Zynamic::Forward<bool (struct MessageWindow*, int)>(L"Con_NeedToFreeMessageWindowLine")(msgwnd, charCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_CopyCurrentConsoleLineText(struct MessageWindow* msgwnd, struct MessageLine* msgLine) -> void
{
  return Zynamic::Forward<void (struct MessageWindow*, struct MessageLine*)>(L"Con_CopyCurrentConsoleLineText")(msgwnd, msgLine);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LatestActiveTypewrittenLineIdx(struct MessageWindow* msgwnd) -> int
{
  return Zynamic::Forward<int (struct MessageWindow*)>(L"LatestActiveTypewrittenLineIdx")(msgwnd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrintableCharsCount(const struct MessageWindow* msgwnd, struct MessageLine* line) -> int
{
  return Zynamic::Forward<int (const struct MessageWindow*, struct MessageLine*)>(L"PrintableCharsCount")(msgwnd, line);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrintTimeTotal(struct MessageWindow* msgwnd, struct MessageLine* line) -> int
{
  return Zynamic::Forward<int (struct MessageWindow*, struct MessageLine*)>(L"PrintTimeTotal")(msgwnd, line);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrintTimeWriteOut(struct MessageWindow* msgwnd, struct MessageLine* line) -> int
{
  return Zynamic::Forward<int (struct MessageWindow*, struct MessageLine*)>(L"PrintTimeWriteOut")(msgwnd, line);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNextValidPrintTimeForLine(int localClientNum, struct MessageWindow* msgwnd, int flags) -> int
{
  return Zynamic::Forward<int (int, struct MessageWindow*, int)>(L"GetNextValidPrintTimeForLine")(localClientNum, msgwnd, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_UpdateMessageWindowLine(int localClientNum, struct MessageWindow* msgwnd, int linefeed, int flags) -> void
{
  return Zynamic::Forward<void (int, struct MessageWindow*, int, int)>(L"Con_UpdateMessageWindowLine")(localClientNum, msgwnd, linefeed, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_GetDestWindow(int localClientNum, enum print_msg_dest_t dest) -> struct MessageWindow*
{
  return Zynamic::Forward<struct MessageWindow* (int, enum print_msg_dest_t)>(L"Con_GetDestWindow")(localClientNum, dest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_UpdateNotifyMessageWindow(int localClientNum, int channel, int duration, int flags, enum print_msg_dest_t dest) -> void
{
  return Zynamic::Forward<void (int, int, int, int, enum print_msg_dest_t)>(L"Con_UpdateNotifyMessageWindow")(localClientNum, channel, duration, flags, dest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_UpdateNotifyMessage(int localClientNum, int channel, int duration, int flags) -> void
{
  return Zynamic::Forward<void (int, int, int, int)>(L"Con_UpdateNotifyMessage")(localClientNum, channel, duration, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_UpdateNotifyLineWindow(int localClientNum, int channel, bool lineFeed, int flags, enum print_msg_dest_t dest) -> void
{
  return Zynamic::Forward<void (int, int, bool, int, enum print_msg_dest_t)>(L"Con_UpdateNotifyLineWindow")(localClientNum, channel, lineFeed, flags, dest);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_UpdateNotifyLine(int localClientNum, int channel, bool lineFeed, int flags) -> void
{
  return Zynamic::Forward<void (int, int, bool, int)>(L"Con_UpdateNotifyLine")(localClientNum, channel, lineFeed, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Linefeed(int localClientNum, int channel, int flags) -> void
{
  return Zynamic::Forward<void (int, int, int)>(L"Con_Linefeed")(localClientNum, channel, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_InitMessageBuffer() -> void
{
  return Zynamic::Forward<void ()>(L"Con_InitMessageBuffer")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_TextLineWrapPosition(const char* txt, int bufferSize, int pixelsAvailable, struct Font_s* font, float scale, int lineBroken) -> const char*
{
  return Zynamic::Forward<const char* (const char*, int, int, struct Font_s*, float, int)>(L"CL_TextLineWrapPosition")(txt, bufferSize, pixelsAvailable, font, scale, lineBroken);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ConsolePrint_AddLine(int localClientNum, int channel, const char* txt, int duration, int pixelWidth, char color, int flags) -> char
{
  return Zynamic::Forward<char (int, int, const char*, int, int, char, int)>(L"CL_ConsolePrint_AddLine")(localClientNum, channel, txt, duration, pixelWidth, color, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ConsolePrint(int localClientNum, int channel, const char* txt, int duration, int pixelWidth, int flags) -> void
{
  return Zynamic::Forward<void (int, int, const char*, int, int, int)>(L"CL_ConsolePrint")(localClientNum, channel, txt, duration, pixelWidth, flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ConsoleFixPosition() -> void
{
  return Zynamic::Forward<void ()>(L"CL_ConsoleFixPosition")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AddMessageChar(char* msg, unsigned int msgLen, unsigned int msgMaxLen, char c) -> int
{
  return Zynamic::Forward<int (char*, unsigned int, unsigned int, char)>(L"CL_AddMessageChar")(msg, msgLen, msgMaxLen, c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_AddMessageIcon(char* msg, unsigned int msgLen, unsigned int msgMaxLen, struct Material* iconShader, float iconWidth, float iconHeight, bool horzFlipIcon) -> int
{
  return Zynamic::Forward<int (char*, unsigned int, unsigned int, struct Material*, float, float, bool)>(L"CL_AddMessageIcon")(msg, msgLen, msgMaxLen, iconShader, iconWidth, iconHeight, horzFlipIcon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ReviveMessagePrint(int localClientNum, const char* reviveString, struct Material* iconShader, float iconWidth, float iconHeight, bool horzFlipIcon) -> void
{
  return Zynamic::Forward<void (int, const char*, struct Material*, float, float, bool)>(L"CL_ReviveMessagePrint")(localClientNum, reviveString, iconShader, iconWidth, iconHeight, horzFlipIcon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_DeathMessagePrint(int localClientNum, const char* attackerName, char attackerColorIndex, const char* victimName, char victimColorIndex, struct Material* iconShader, float iconWidth, float iconHeight, bool horzFlipIcon) -> void
{
  return Zynamic::Forward<void (int, const char*, char, const char*, char, struct Material*, float, float, bool)>(L"CL_DeathMessagePrint")(localClientNum, attackerName, attackerColorIndex, victimName, victimColorIndex, iconShader, iconWidth, iconHeight, horzFlipIcon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_AutoCompleteFromList(const char** strings, unsigned int stringCount, const char* prefix, char* completed, unsigned int sizeofCompleted) -> void
{
  return Zynamic::Forward<void (const char**, unsigned int, const char*, char*, unsigned int)>(L"Con_AutoCompleteFromList")(strings, stringCount, prefix, completed, sizeofCompleted);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_TokenizeInput() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"Con_TokenizeInput")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_AnySpaceAfterCommand() -> bool
{
  return Zynamic::Forward<bool ()>(L"Con_AnySpaceAfterCommand")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConDrawInput_TextWidth(const char* text) -> int
{
  return Zynamic::Forward<int (const char*)>(L"ConDrawInput_TextWidth")(text);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConDrawInput_Text(const char* str, const float* color) -> void
{
  return Zynamic::Forward<void (const char*, const float*)>(L"ConDrawInput_Text")(str, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConDrawInput_TextLimitChars(const char* str, int maxChars, const float* color) -> void
{
  return Zynamic::Forward<void (const char*, int, const float*)>(L"ConDrawInput_TextLimitChars")(str, maxChars, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConDrawInput_TextAndOver(const char* str, const float* color) -> void
{
  return Zynamic::Forward<void (const char*, const float*)>(L"ConDrawInput_TextAndOver")(str, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConDraw_Box(float x, float y, float w, float h, const float* color) -> void
{
  return Zynamic::Forward<void (float, float, float, float, const float*)>(L"ConDraw_Box")(x, y, w, h, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConDrawInput_Box(int lines, const float* color) -> void
{
  return Zynamic::Forward<void (int, const float*)>(L"ConDrawInput_Box")(lines, color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_GetAutoCompleteColorCodedStringDiscontiguous(const char* query, const char* matchToText, int matchTextLen, char* colorCoded) -> int
{
  return Zynamic::Forward<int (const char*, const char*, int, char*)>(L"Con_GetAutoCompleteColorCodedStringDiscontiguous")(query, matchToText, matchTextLen, colorCoded);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_GetAutoCompleteColorCodedStringContiguous(const char* query, const char* matchToText, int matchTextLen, char* colorCoded) -> int
{
  return Zynamic::Forward<int (const char*, const char*, int, char*)>(L"Con_GetAutoCompleteColorCodedStringContiguous")(query, matchToText, matchTextLen, colorCoded);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_GetAutoCompleteColorCodedString(const char* query, const char* matchToText, int matchTextLen, bool isDvarCommand, const char* originalCommand, char* colorCoded) -> int
{
  return Zynamic::Forward<int (const char*, const char*, int, bool, const char*, char*)>(L"Con_GetAutoCompleteColorCodedString")(query, matchToText, matchTextLen, isDvarCommand, originalCommand, colorCoded);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_IsAutoCompleteMatch(const char* query, const char* matchToText, int matchTextLen) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*, int)>(L"Con_IsAutoCompleteMatch")(query, matchToText, matchTextLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConDrawInput_IncrMatchCounter(const char* str) -> void
{
  return Zynamic::Forward<void (const char*)>(L"ConDrawInput_IncrMatchCounter")(str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConDrawInput_DvarMatch(const char* str) -> void
{
  return Zynamic::Forward<void (const char*)>(L"ConDrawInput_DvarMatch")(str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConDrawInput_TextFieldFirstArgChar() -> int
{
  return Zynamic::Forward<int ()>(L"ConDrawInput_TextFieldFirstArgChar")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConDrawInput_AutoCompleteArg(const char** stringList, int stringCount) -> void
{
  return Zynamic::Forward<void (const char**, int)>(L"ConDrawInput_AutoCompleteArg")(stringList, stringCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConDrawInput_GetDvarDescriptionLines(const struct dvar_s* dvar) -> int
{
  return Zynamic::Forward<int (const struct dvar_s*)>(L"ConDrawInput_GetDvarDescriptionLines")(dvar);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConDrawInput_DetailedDvarMatch(const char* str) -> void
{
  return Zynamic::Forward<void (const char*)>(L"ConDrawInput_DetailedDvarMatch")(str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConDrawInput_DetailedCmdMatch(const char* str) -> void
{
  return Zynamic::Forward<void (const char*)>(L"ConDrawInput_DetailedCmdMatch")(str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConDrawInput_CmdMatch(const char* str) -> void
{
  return Zynamic::Forward<void (const char*)>(L"ConDrawInput_CmdMatch")(str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawAutoCompleteChoice(int localClientNum, bool isDvarCommand, const char* originalCommand) -> void
{
  return Zynamic::Forward<void (int, bool, const char*)>(L"Con_DrawAutoCompleteChoice")(localClientNum, isDvarCommand, originalCommand);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawInputPrompt(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Con_DrawInputPrompt")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_HasTooManyMatchesToShow() -> bool
{
  return Zynamic::Forward<bool ()>(L"Con_HasTooManyMatchesToShow")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_IsDvarCommand(const char* cmd) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"Con_IsDvarCommand")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ForEach(bool isDvarCommand, function* callbackDvar, function* callbackCmd) -> void
{
  return Zynamic::Forward<void (bool, function *, function *)>(L"Con_ForEach")(isDvarCommand, callbackDvar, callbackCmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawInput(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Con_DrawInput")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_CycleAutoComplete(int step) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Con_CycleAutoComplete")(step);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_HasActiveAutoComplete() -> bool
{
  return Zynamic::Forward<bool ()>(L"Con_HasActiveAutoComplete")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_CommitToAutoComplete() -> bool
{
  return Zynamic::Forward<bool ()>(L"Con_CommitToAutoComplete")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_CancelAutoComplete() -> bool
{
  return Zynamic::Forward<bool ()>(L"Con_CancelAutoComplete")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_AllowAutoCompleteCycling(bool isAllowed) -> void
{
  return Zynamic::Forward<void (bool)>(L"Con_AllowAutoCompleteCycling")(isAllowed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ShouldProcessMessage(struct Message* message, int serverTime) -> bool
{
  return Zynamic::Forward<bool (struct Message*, int)>(L"Con_ShouldProcessMessage")(message, serverTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LineVisible(const struct MessageWindow* msgwnd, int lineIdx, int time) -> bool
{
  return Zynamic::Forward<bool (const struct MessageWindow*, int, int)>(L"LineVisible")(msgwnd, lineIdx, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TypewriterSounds(int localClientNum, const struct MessageWindow* msgwnd, struct MessageLine* line) -> void
{
  return Zynamic::Forward<void (int, const struct MessageWindow*, struct MessageLine*)>(L"TypewriterSounds")(localClientNum, msgwnd, line);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawMessageLineOnHUD(int localClientNum, const struct ScreenPlacement* scrPlace, int x, int y, int charHeight, int horzAlign, int vertAlign, struct Font_s* font, const struct MessageWindow* msgwnd, int lineIdx, float* color, int textStyle, float msgwndScale, int textAlignMode) -> void
{
  return Zynamic::Forward<void (int, const struct ScreenPlacement*, int, int, int, int, int, struct Font_s*, const struct MessageWindow*, int, float*, int, float, int)>(L"Con_DrawMessageLineOnHUD")(localClientNum, scrPlace, x, y, charHeight, horzAlign, vertAlign, font, msgwnd, lineIdx, color, textStyle, msgwndScale, textAlignMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_CullFinishedLines(int serverTime, struct MessageWindow* msgwnd) -> void
{
  return Zynamic::Forward<void (int, struct MessageWindow*)>(L"Con_CullFinishedLines")(serverTime, msgwnd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_GetMessageAlpha(struct Message* message, struct MessageWindow* msgwnd, int serverTime, bool scrollsIntoPlace) -> float
{
  return Zynamic::Forward<float (struct Message*, struct MessageWindow*, int, bool)>(L"Con_GetMessageAlpha")(message, msgwnd, serverTime, scrollsIntoPlace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawMessageWindowNewToOld(int localClientNum, struct MessageWindow* msgwnd, int x, int y, int hudCharHeight, int horzAlign, int vertAlign, bool up, struct Font_s* font, float* color, int textStyle, float msgwndScale, int textAlignMode) -> void
{
  return Zynamic::Forward<void (int, struct MessageWindow*, int, int, int, int, int, bool, struct Font_s*, float*, int, float, int)>(L"Con_DrawMessageWindowNewToOld")(localClientNum, msgwnd, x, y, hudCharHeight, horzAlign, vertAlign, up, font, color, textStyle, msgwndScale, textAlignMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawMessageWindowOldToNew(int localClientNum, struct MessageWindow* msgwnd, int x, int y, int charHeight, int horzAlign, int vertAlign, bool up, struct Font_s* font, float* color, int textStyle, float msgwndScale, int textAlignMode) -> void
{
  return Zynamic::Forward<void (int, struct MessageWindow*, int, int, int, int, int, bool, struct Font_s*, float*, int, float, int)>(L"Con_DrawMessageWindowOldToNew")(localClientNum, msgwnd, x, y, charHeight, horzAlign, vertAlign, up, font, color, textStyle, msgwndScale, textAlignMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_ShouldntDrawMessageWindow(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"CL_ShouldntDrawMessageWindow")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawMessageWindow(int localClientNum, struct MessageWindow* msgwnd, int x, int y, int charHeight, int horzAlign, int vertAlign, struct Font_s* font, float* color, int textStyle, float msgwndScale, enum msgwnd_mode_t mode, int textAlignMode) -> void
{
  return Zynamic::Forward<void (int, struct MessageWindow*, int, int, int, int, int, struct Font_s*, float*, int, float, enum msgwnd_mode_t, int)>(L"Con_DrawMessageWindow")(localClientNum, msgwnd, x, y, charHeight, horzAlign, vertAlign, font, color, textStyle, msgwndScale, mode, textAlignMode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawGameMessageWindow(int localClientNum, int windowIndex, int xPos, int yPos, int horzAlign, int vertAlign, struct Font_s* font, float fontScale, float* color, int textStyle, int textAlignMode, enum msgwnd_mode_t mode) -> void
{
  return Zynamic::Forward<void (int, int, int, int, int, int, struct Font_s*, float, float*, int, int, enum msgwnd_mode_t)>(L"Con_DrawGameMessageWindow")(localClientNum, windowIndex, xPos, yPos, horzAlign, vertAlign, font, fontScale, color, textStyle, textAlignMode, mode);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawMiniConsole(int localClientNum, int xPos, int yPos, float alpha) -> void
{
  return Zynamic::Forward<void (int, int, int, float)>(L"Con_DrawMiniConsole")(localClientNum, xPos, yPos, alpha);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawErrors(int localClientNum, int xPos, int yPos, float alpha) -> void
{
  return Zynamic::Forward<void (int, int, int, float)>(L"Con_DrawErrors")(localClientNum, xPos, yPos, alpha);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_IsValidGameMessageWindow(int windowIndex) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Con_IsValidGameMessageWindow")(windowIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_IsGameMessageWindowActive(int localClientNum, int windowIndex) -> bool
{
  return Zynamic::Forward<bool (int, int)>(L"Con_IsGameMessageWindowActive")(localClientNum, windowIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawSay(int localClientNum, int x, int y) -> void
{
  return Zynamic::Forward<void (int, int, int)>(L"Con_DrawSay")(localClientNum, x, y);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_ToggleConsoleOutput() -> void
{
  return Zynamic::Forward<void ()>(L"Con_ToggleConsoleOutput")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawOutputScrollBar(float x, float y, float width, float height) -> void
{
  return Zynamic::Forward<void (float, float, float, float)>(L"Con_DrawOutputScrollBar")(x, y, width, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawOutputText(float x, float y, float width, float height) -> void
{
  return Zynamic::Forward<void (float, float, float, float)>(L"Con_DrawOutputText")(x, y, width, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_GetVersionString() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"Con_GetVersionString")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawOutputVersion(float x, float y, float width, float height) -> void
{
  return Zynamic::Forward<void (float, float, float, float)>(L"Con_DrawOutputVersion")(x, y, width, height);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawOuputWindow() -> void
{
  return Zynamic::Forward<void ()>(L"Con_DrawOuputWindow")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawSolidConsole(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Con_DrawSolidConsole")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_DrawConsole(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Con_DrawConsole")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_PageUp() -> void
{
  return Zynamic::Forward<void ()>(L"Con_PageUp")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_PageDown() -> void
{
  return Zynamic::Forward<void ()>(L"Con_PageDown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Top() -> void
{
  return Zynamic::Forward<void ()>(L"Con_Top")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Bottom() -> void
{
  return Zynamic::Forward<void ()>(L"Con_Bottom")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Close(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Con_Close")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_IsActive(int localClientNum) -> bool
{
  return Zynamic::Forward<bool (int)>(L"Con_IsActive")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_PlayTextFXPulseSounds(int localClientNum, int currentTime, int strLength, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int* soundTimeKeeper) -> void
{
  return Zynamic::Forward<void (int, int, int, int, int, int, int*)>(L"CL_PlayTextFXPulseSounds")(localClientNum, currentTime, strLength, fxBirthTime, fxLetterTime, fxDecayStartTime, soundTimeKeeper);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Restricted_SigleExist(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"Con_Restricted_SigleExist")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Restricted_Add(const char* name) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Con_Restricted_Add")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Restricted_SetState(enum e_restricted_initState state) -> void
{
  return Zynamic::Forward<void (enum e_restricted_initState)>(L"Con_Restricted_SetState")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Restricted_ShutDown() -> void
{
  return Zynamic::Forward<void ()>(L"Con_Restricted_ShutDown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Restricted_GetState() -> enum e_restricted_initState
{
  return Zynamic::Forward<enum e_restricted_initState ()>(L"Con_Restricted_GetState")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Restricted_SecureConfigs() -> void
{
  return Zynamic::Forward<void ()>(L"Con_Restricted_SecureConfigs")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Restricted_InitLists() -> void
{
  return Zynamic::Forward<void ()>(L"Con_Restricted_InitLists")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Restricted_LoadTable(const struct StringTable* table) -> void
{
  return Zynamic::Forward<void (const struct StringTable*)>(L"Con_Restricted_LoadTable")(table);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Restricted_SetLists() -> void
{
  return Zynamic::Forward<void ()>(L"Con_Restricted_SetLists")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Restricted_ResetLists() -> void
{
  return Zynamic::Forward<void ()>(L"Con_Restricted_ResetLists")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Restricted_Reset() -> void
{
  return Zynamic::Forward<void ()>(L"Con_Restricted_Reset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Restricted_ForEach(bool isDvarCommand, function* callbackDvar, function* callbackCmd) -> void
{
  return Zynamic::Forward<void (bool, function *, function *)>(L"Con_Restricted_ForEach")(isDvarCommand, callbackDvar, callbackCmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Restricted_RestrictBuf(const char* buf, int start, int length, char* buffer, int buffer_size) -> int
{
  return Zynamic::Forward<int (const char*, int, int, char*, int)>(L"Con_Restricted_RestrictBuf")(buf, start, length, buffer, buffer_size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Restricted_ExecuteBuf(int localClientNum, int controllerIndex, const char* buffer) -> void
{
  return Zynamic::Forward<void (int, int, const char*)>(L"Con_Restricted_ExecuteBuf")(localClientNum, controllerIndex, buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Restricted_AddBuf(const char* buf) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Con_Restricted_AddBuf")(buf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Con_Restricted_ValidateConfig(const char* fileName) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"Con_Restricted_ValidateConfig")(fileName);
}

#endif // __UNIMPLEMENTED__
