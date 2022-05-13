//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Scr_IsInOpcodeMemory(enum scriptInstance_t inst, const char* pos) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, const char*)>(L"Scr_IsInOpcodeMemory")(inst, pos);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_IsIdentifier(const char* token) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"Scr_IsIdentifier")(token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetFunctionHandle(enum scriptInstance_t inst, const char* filename, const char* name) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, const char*, const char*)>(L"Scr_GetFunctionHandle")(inst, filename, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SL_BeginLoadScripts(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"SL_BeginLoadScripts")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SL_TransferToCanonicalString(enum scriptInstance_t inst, unsigned int stringValue) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, unsigned int)>(L"SL_TransferToCanonicalString")(inst, stringValue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SL_GetCanonicalString(enum scriptInstance_t inst, const char* str) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, const char*)>(L"SL_GetCanonicalString")(inst, str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_BeginLoadScripts(enum scriptInstance_t inst, int user) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int)>(L"Scr_BeginLoadScripts")(inst, user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_BeginLoadAnimTrees(enum scriptInstance_t inst, int user) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, int)>(L"Scr_BeginLoadAnimTrees")(inst, user);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_ScanFile(enum scriptInstance_t inst, char* buf, int max_size) -> int
{
  return Zynamic::Forward<int (enum scriptInstance_t, char*, int)>(L"Scr_ScanFile")(inst, buf, max_size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_LoadScriptInternal(enum scriptInstance_t inst, const char* filename, struct PrecacheEntry* entries, int entriesCount) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, const char*, struct PrecacheEntry*, int)>(L"Scr_LoadScriptInternal")(inst, filename, entries, entriesCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_LoadScript(enum scriptInstance_t inst, const char* filename) -> unsigned int
{
  return Zynamic::Forward<unsigned int (enum scriptInstance_t, const char*)>(L"Scr_LoadScript")(inst, filename);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PostCompileScripts(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_PostCompileScripts")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EndLoadScripts(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_EndLoadScripts")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_PrecacheAnimTrees(enum scriptInstance_t inst, function* Alloc, int user, bool modChecksum) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, function *, int, bool)>(L"Scr_PrecacheAnimTrees")(inst, Alloc, user, modChecksum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_EndLoadAnimTrees(enum scriptInstance_t inst) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t)>(L"Scr_EndLoadAnimTrees")(inst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_FreeScripts(enum scriptInstance_t inst, unsigned char sys) -> void
{
  return Zynamic::Forward<void (enum scriptInstance_t, unsigned char)>(L"Scr_FreeScripts")(inst, sys);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_GetGenericField(unsigned char* b, enum fieldtype_t type, int ofs, enum scriptInstance_t inst, unsigned int whichbits) -> void
{
  return Zynamic::Forward<void (unsigned char*, enum fieldtype_t, int, enum scriptInstance_t, unsigned int)>(L"Scr_GetGenericField")(b, type, ofs, inst, whichbits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Scr_SetGenericField(unsigned char* b, enum fieldtype_t type, int ofs, enum scriptInstance_t inst, unsigned int whichbits) -> void
{
  return Zynamic::Forward<void (unsigned char*, enum fieldtype_t, int, enum scriptInstance_t, unsigned int)>(L"Scr_SetGenericField")(b, type, ofs, inst, whichbits);
}

#endif // __UNIMPLEMENTED__
