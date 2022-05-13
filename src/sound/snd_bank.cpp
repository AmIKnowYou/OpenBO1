//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SND_FindInIndex(unsigned int key, const struct SndBank* bank, struct snd_alias_list_t** result) -> bool
{
  return Zynamic::Forward<bool (unsigned int, const struct SndBank*, struct snd_alias_list_t**)>(L"SND_FindInIndex")(key, bank, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AssertBankIndexValid(const struct SndBank* bank) -> void
{
  return Zynamic::Forward<void (const struct SndBank*)>(L"SND_AssertBankIndexValid")(bank);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AddBank(struct SndBank* bank) -> void
{
  return Zynamic::Forward<void (struct SndBank*)>(L"SND_AddBank")(bank);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_RemoveBank(struct SndBank* bank) -> void
{
  return Zynamic::Forward<void (struct SndBank*)>(L"SND_RemoveBank")(bank);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AddPatch(struct SndPatch* patch) -> void
{
  return Zynamic::Forward<void (struct SndPatch*)>(L"SND_AddPatch")(patch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_RemovePatch(struct SndPatch* patch) -> void
{
  return Zynamic::Forward<void (struct SndPatch*)>(L"SND_RemovePatch")(patch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AliasCount() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"SND_AliasCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_IsAliasNameLooping(const char* name) -> bool
{
  return Zynamic::Forward<bool (const char*)>(L"SND_IsAliasNameLooping")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AliasByIndex(unsigned int index) -> struct snd_alias_list_t*
{
  return Zynamic::Forward<struct snd_alias_list_t* (unsigned int)>(L"SND_AliasByIndex")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_BankAliasLookup(unsigned int key) -> struct snd_alias_list_t*
{
  return Zynamic::Forward<struct snd_alias_list_t* (unsigned int)>(L"SND_BankAliasLookup")(key);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindAlias(const char* name) -> struct snd_alias_list_t*
{
  return Zynamic::Forward<struct snd_alias_list_t* (const char*)>(L"SND_FindAlias")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindAliasFromId(unsigned int hash) -> struct snd_alias_list_t*
{
  return Zynamic::Forward<struct snd_alias_list_t* (unsigned int)>(L"SND_FindAliasFromId")(hash);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindAliasId(const char* name) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char*)>(L"SND_FindAliasId")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetRadverb(unsigned int id) -> const struct snd_radverb*
{
  return Zynamic::Forward<const struct snd_radverb* (unsigned int)>(L"SND_GetRadverb")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetSnapshotById(unsigned int id) -> const struct snd_snapshot*
{
  return Zynamic::Forward<const struct snd_snapshot* (unsigned int)>(L"SND_GetSnapshotById")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetOcclusionSnapshot(const struct snd_snapshot* snap) -> const struct snd_snapshot*
{
  return Zynamic::Forward<const struct snd_snapshot* (const struct snd_snapshot*)>(L"SND_GetOcclusionSnapshot")(snap);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindRowAlias(unsigned int id) -> void*
{
  return Zynamic::Forward<void* (unsigned int)>(L"SND_FindRowAlias")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindRowGroup(unsigned int id) -> void*
{
  return Zynamic::Forward<void* (unsigned int)>(L"SND_FindRowGroup")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindRowCurve(unsigned int id) -> void*
{
  return Zynamic::Forward<void* (unsigned int)>(L"SND_FindRowCurve")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindRowPan(unsigned int id) -> void*
{
  return Zynamic::Forward<void* (unsigned int)>(L"SND_FindRowPan")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CL_GetFirstActiveLocalClient() -> int
{
  return Zynamic::Forward<int ()>(L"CL_GetFirstActiveLocalClient")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindRowContext(unsigned int id) -> void*
{
  return Zynamic::Forward<void* (unsigned int)>(L"SND_FindRowContext")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindRowMaster(unsigned int id) -> void*
{
  return Zynamic::Forward<void* (unsigned int)>(L"SND_FindRowMaster")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindAsset(unsigned int table, unsigned int id) -> void*
{
  return Zynamic::Forward<void* (unsigned int, unsigned int)>(L"SND_FindAsset")(table, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PatchValue(unsigned int table, char* asset, unsigned int field, unsigned int value) -> void
{
  return Zynamic::Forward<void (unsigned int, char*, unsigned int, unsigned int)>(L"SND_PatchValue")(table, asset, field, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PatchApply(const struct SndPatch* patch) -> void
{
  return Zynamic::Forward<void (const struct SndPatch*)>(L"SND_PatchApply")(patch);
}

#endif // __UNIMPLEMENTED__
