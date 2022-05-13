//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

public inline auto GVAction::GVAction(char* name, char* scriptName, unsigned char parameterType, struct GVValue* parameters, int parametersSize) -> void
{
  return Zynamic::Forward<public void (char*, char*, unsigned char, struct GVValue*, int)>(L"GVAction::GVAction")(name, scriptName, parameterType, parameters, parametersSize);
}

#endif // __UNIMPLEMENTED__
