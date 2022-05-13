//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'TRACKINST_playlistEntries''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'TRACKINST_playlistEntries''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'TRACKINST_playlists''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'TRACKINST_playlists''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'TRACKINST_s_playlistStringBuffer''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'TRACKINST_s_playlistStringBuffer''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'TRACKINST_s_playlistRuleBuffer''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'TRACKINST_s_playlistRuleBuffer''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_Strdup(const char* src) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"Playlist_Strdup")(src);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_Strdup_Newline(const char* src) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"Playlist_Strdup_Newline")(src);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_BeginRules() -> const char*
{
  return Zynamic::Forward<const char* ()>(L"Playlist_BeginRules")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_AppendRules(const char* base, const char* token) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*)>(L"Playlist_AppendRules")(base, token);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetCategoryIdByName(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"Playlist_GetCategoryIdByName")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ParseIntRange(const char* field, const char** pData, int min, int max) -> int
{
  return Zynamic::Forward<int (const char*, const char**, int, int)>(L"ParseIntRange")(field, pData, min, max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_ParsePlaylists(const char* buffer) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Playlist_ParsePlaylists")(buffer);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_HasCategory(const int playlistId, const char* category) -> bool
{
  return Zynamic::Forward<bool (const int, const char*)>(L"Playlist_HasCategory")(playlistId, category);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetPlaylistCount() -> int
{
  return Zynamic::Forward<int ()>(L"Playlist_GetPlaylistCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetCategoryCount() -> int
{
  return Zynamic::Forward<int ()>(L"Playlist_GetCategoryCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetPlaylistCount(const int category) -> int
{
  return Zynamic::Forward<int (const int)>(L"Playlist_GetPlaylistCount")(category);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_ValidatePlaylistNum() -> void
{
  return Zynamic::Forward<void ()>(L"Playlist_ValidatePlaylistNum")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetPlaylistIdForNum(const int controllerIndex, const int num) -> int
{
  return Zynamic::Forward<int (const int, const int)>(L"Playlist_GetPlaylistIdForNum")(controllerIndex, num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetPlaylistIdForNum(const int controllerIndex, const int categoryPlaylistNum, const int categoryNum) -> int
{
  return Zynamic::Forward<int (const int, const int, const int)>(L"Playlist_GetPlaylistIdForNum")(controllerIndex, categoryPlaylistNum, categoryNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetPlaylistNumFromId(const int controllerIndex, const int id) -> int
{
  return Zynamic::Forward<int (const int, const int)>(L"Playlist_GetPlaylistNumFromId")(controllerIndex, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetCategoryIdForNum(const int num) -> int
{
  return Zynamic::Forward<int (const int)>(L"Playlist_GetCategoryIdForNum")(num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetCategoryIdForPlaylistId(const int num) -> int
{
  return Zynamic::Forward<int (const int)>(L"Playlist_GetCategoryIdForPlaylistId")(num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetNumEntries(int playlistId) -> int
{
  return Zynamic::Forward<int (int)>(L"Playlist_GetNumEntries")(playlistId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetEntry(int playlistId, int entry) -> struct playlistEntry*
{
  return Zynamic::Forward<struct playlistEntry* (int, int)>(L"Playlist_GetEntry")(playlistId, entry);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_ResetCategoryFilter() -> void
{
  return Zynamic::Forward<void ()>(L"Playlist_ResetCategoryFilter")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_EnableCategoryInFilter(const char* filterName) -> void
{
  return Zynamic::Forward<void (const char*)>(L"Playlist_EnableCategoryInFilter")(filterName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetCategoryLocalizedName(const int controllerIndex, const int categoryId) -> const char*
{
  return Zynamic::Forward<const char* (const int, const int)>(L"Playlist_GetCategoryLocalizedName")(controllerIndex, categoryId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetPlaylistName(const int controllerIndex, const int playlistId) -> const char*
{
  return Zynamic::Forward<const char* (const int, const int)>(L"Playlist_GetPlaylistName")(controllerIndex, playlistId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetPlaylistDescription(const int controllerIndex, const int playlistId) -> const char*
{
  return Zynamic::Forward<const char* (const int, const int)>(L"Playlist_GetPlaylistDescription")(controllerIndex, playlistId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetPlaylistIconName(const int controllerIndex, const int playlistId) -> const char*
{
  return Zynamic::Forward<const char* (const int, const int)>(L"Playlist_GetPlaylistIconName")(controllerIndex, playlistId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetCategoryIconName(const int controllerIndex, const int categoryId) -> const char*
{
  return Zynamic::Forward<const char* (const int, const int)>(L"Playlist_GetCategoryIconName")(controllerIndex, categoryId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_IsLocked(const int controllerIndex, const int playlistId, const int xp, const int prestige, const int gametypeBan, const int partyCount) -> enum PlaylistLockState
{
  return Zynamic::Forward<enum PlaylistLockState (const int, const int, const int, const int, const int, const int)>(L"Playlist_IsLocked")(controllerIndex, playlistId, xp, prestige, gametypeBan, partyCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_CategoryIsLocked(const int controllerIndex, const int categoryId, const int xp, const int prestige, const int gametypeBan, const int partyCount) -> enum PlaylistLockState
{
  return Zynamic::Forward<enum PlaylistLockState (const int, const int, const int, const int, const int, const int)>(L"Playlist_CategoryIsLocked")(controllerIndex, categoryId, xp, prestige, gametypeBan, partyCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetMapPacksUsedByPlaylist(const int playlistId) -> int
{
  return Zynamic::Forward<int (const int)>(L"Playlist_GetMapPacksUsedByPlaylist")(playlistId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_DoWeHaveRequiredDLC(const int controllerIndex, const int playlistId) -> bool
{
  return Zynamic::Forward<bool (const int, const int)>(L"Playlist_DoWeHaveRequiredDLC")(controllerIndex, playlistId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetCategoryInternalName(const int categoryId) -> const char*
{
  return Zynamic::Forward<const char* (const int)>(L"Playlist_GetCategoryInternalName")(categoryId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_ResetWeights(const int playlistId) -> void
{
  return Zynamic::Forward<void (const int)>(L"Playlist_ResetWeights")(playlistId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_CalcTotalWeights(const int playlistId, const int lastSelection) -> int
{
  return Zynamic::Forward<int (const int, const int)>(L"Playlist_CalcTotalWeights")(playlistId, lastSelection);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_FindEntryByWeight(const int playlistId, const int selectedWeight, const int lastSelection) -> int
{
  return Zynamic::Forward<int (const int, const int, const int)>(L"Playlist_FindEntryByWeight")(playlistId, selectedWeight, lastSelection);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_FindGametype(const char* gametypeInternalName) -> struct playlistGametype*
{
  return Zynamic::Forward<struct playlistGametype* (const char*)>(L"Playlist_FindGametype")(gametypeInternalName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetGametypeCount() -> int
{
  return Zynamic::Forward<int ()>(L"Playlist_GetGametypeCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetGametypeLocalizedName(int index) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"Playlist_GetGametypeLocalizedName")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetGametypeInternalName(int index) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"Playlist_GetGametypeInternalName")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_MarkEntryPlayed(const int playlistId, const int entryNum) -> void
{
  return Zynamic::Forward<void (const int, const int)>(L"Playlist_MarkEntryPlayed")(playlistId, entryNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_ChooseEntry(const int localControllerIndex, const int lastSelection) -> int
{
  return Zynamic::Forward<int (const int, const int)>(L"Playlist_ChooseEntry")(localControllerIndex, lastSelection);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_RunRules(const int localControllerIndex, const int entryNum) -> void
{
  return Zynamic::Forward<void (const int, const int)>(L"Playlist_RunRules")(localControllerIndex, entryNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetVersionNumber() -> int
{
  return Zynamic::Forward<int ()>(L"Playlist_GetVersionNumber")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetUnlockXp(const int localControllerIndex, const int playlistId) -> int
{
  return Zynamic::Forward<int (const int, const int)>(L"Playlist_GetUnlockXp")(localControllerIndex, playlistId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetUnlockPLevel(const int localControllerIndex, const int playlistId) -> int
{
  return Zynamic::Forward<int (const int, const int)>(L"Playlist_GetUnlockPLevel")(localControllerIndex, playlistId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetMaxPartySize(const int localControllerIndex, const int playlistId) -> int
{
  return Zynamic::Forward<int (const int, const int)>(L"Playlist_GetMaxPartySize")(localControllerIndex, playlistId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetMinPartySize(const int localControllerIndex, const int playlistId) -> int
{
  return Zynamic::Forward<int (const int, const int)>(L"Playlist_GetMinPartySize")(localControllerIndex, playlistId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetWagerBet(const int localControllerIndex, const int playlistId) -> int
{
  return Zynamic::Forward<int (const int, const int)>(L"Playlist_GetWagerBet")(localControllerIndex, playlistId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_SetPrevPlaylist() -> void
{
  return Zynamic::Forward<void ()>(L"Playlist_SetPrevPlaylist")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetPrevPlaylist() -> void
{
  return Zynamic::Forward<void ()>(L"Playlist_GetPrevPlaylist")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_SetPlaylistEntry(int num) -> void
{
  return Zynamic::Forward<void (int)>(L"Playlist_SetPlaylistEntry")(num);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_SetSVMapRotation() -> void
{
  return Zynamic::Forward<void ()>(L"Playlist_SetSVMapRotation")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_RegisterDvars() -> void
{
  return Zynamic::Forward<void ()>(L"Playlist_RegisterDvars")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_SetSVMapRotationCurrent(int entryNum) -> void
{
  return Zynamic::Forward<void (int)>(L"Playlist_SetSVMapRotationCurrent")(entryNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_SVMapRotate() -> void
{
  return Zynamic::Forward<void ()>(L"Playlist_SVMapRotate")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_Fetch_f() -> void
{
  return Zynamic::Forward<void ()>(L"Playlist_Fetch_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_Pick_f() -> void
{
  return Zynamic::Forward<void ()>(L"Playlist_Pick_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_Init() -> void
{
  return Zynamic::Forward<void ()>(L"Playlist_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Playlist_GetWagerAmount(int version, int index, int* wagerAmount) -> int
{
  return Zynamic::Forward<int (int, int, int*)>(L"Playlist_GetWagerAmount")(version, index, wagerAmount);
}

#endif // __UNIMPLEMENTED__
