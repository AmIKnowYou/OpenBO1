//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto GraphFloat_ParseBuffer(struct GraphFloat* graph, const char* buffer, const char* fileName) -> void
{
  return Zynamic::Forward<void (struct GraphFloat*, const char*, const char*)>(L"GraphFloat_ParseBuffer")(graph, buffer, fileName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GraphFloat_Load(struct GraphFloat* graph, const char* fileName, float scale) -> void
{
  return Zynamic::Forward<void (struct GraphFloat*, const char*, float)>(L"GraphFloat_Load")(graph, fileName, scale);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GraphFloat_Load(const char* fileName) -> struct GraphFloat*
{
  return Zynamic::Forward<struct GraphFloat* (const char*)>(L"GraphFloat_Load")(fileName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GraphFloat_GetValue(const struct GraphFloat* graph, float fraction) -> float
{
  return Zynamic::Forward<float (const struct GraphFloat*, float)>(L"GraphFloat_GetValue")(graph, fraction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GraphFloat_SaveToFile(const struct GraphFloat* graph) -> void
{
  return Zynamic::Forward<void (const struct GraphFloat*)>(L"GraphFloat_SaveToFile")(graph);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GraphFloat_DevGuiCB_Event(const struct DevGraph* graph, enum DevEventType event, int localClientNum) -> void
{
  return Zynamic::Forward<void (const struct DevGraph*, enum DevEventType, int)>(L"GraphFloat_DevGuiCB_Event")(graph, event, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GraphFloat_DevGuiCB_Text(const struct DevGraph* devGuiGraph, float inputX, float inputY, char* text, const int textLength) -> void
{
  return Zynamic::Forward<void (const struct DevGraph*, float, float, char*, const int)>(L"GraphFloat_DevGuiCB_Text")(devGuiGraph, inputX, inputY, text, textLength);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GraphFloat_CreateDevGui(struct GraphFloat* graph, const char* devguiPath) -> void
{
  return Zynamic::Forward<void (struct GraphFloat*, const char*)>(L"GraphFloat_CreateDevGui")(graph, devguiPath);
}

#endif // __UNIMPLEMENTED__
