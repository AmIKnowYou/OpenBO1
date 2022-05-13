//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 's_taskData''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 's_taskData''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 's_userData''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 's_userData''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_ProfileInit() -> void
{
  return Zynamic::Forward<void ()>(L"PCache_ProfileInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetPublicProfileDDL() -> struct ddlDef_t*
{
  return Zynamic::Forward<struct ddlDef_t* ()>(L"PCache_GetPublicProfileDDL")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetPublicProfilesCompleted(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"PCache_GetPublicProfilesCompleted")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetPublicProfilesFailed(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"PCache_GetPublicProfilesFailed")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_SetPublicProfileCompleted(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"PCache_SetPublicProfileCompleted")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_SetPublicProfileFailed(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"PCache_SetPublicProfileFailed")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetPublicProfileCompleted(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"PCache_GetPublicProfileCompleted")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetPublicProfileFailed(struct TaskRecord* task) -> void
{
  return Zynamic::Forward<void (struct TaskRecord*)>(L"PCache_GetPublicProfileFailed")(task);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_NukeProfile(int controlleridx) -> void
{
  return Zynamic::Forward<void (int)>(L"PCache_NukeProfile")(controlleridx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_BatchUpdatePublicProfiles(int controllerIndex, struct PCachePublicProfile* profiles, int count) -> void
{
  return Zynamic::Forward<void (int, struct PCachePublicProfile*, int)>(L"PCache_BatchUpdatePublicProfiles")(controllerIndex, profiles, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetRankInternal(struct PCachePublicProfile* profile, int* rank, int* prestige) -> bool
{
  return Zynamic::Forward<bool (struct PCachePublicProfile*, int*, int*)>(L"PCache_GetRankInternal")(profile, rank, prestige);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetRank(int controllerIndex, unsigned __int64 xuid, int* rank, int* prestige) -> bool
{
  return Zynamic::Forward<bool (int, unsigned __int64, int*, int*)>(L"PCache_GetRank")(controllerIndex, xuid, rank, prestige);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetCodpoints(int controllerIndex, unsigned __int64 xuid, int* codpoints) -> bool
{
  return Zynamic::Forward<bool (int, unsigned __int64, int*)>(L"PCache_GetCodpoints")(controllerIndex, xuid, codpoints);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_UpdateProfileData(int controllerIndex, struct PCachePublicProfile* profile) -> void
{
  return Zynamic::Forward<void (int, struct PCachePublicProfile*)>(L"PCache_UpdateProfileData")(controllerIndex, profile);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetItemFloat(const struct ddlState_t* state, char* buffer, const char* item, float value, float min, float max, int range) -> void
{
  return Zynamic::Forward<void (const struct ddlState_t*, char*, const char*, float, float, float, int)>(L"SetItemFloat")(state, buffer, item, value, min, max, range);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemFloat(const struct ddlState_t* state, char* buffer, const char* item, float min, float max, int range) -> float
{
  return Zynamic::Forward<float (const struct ddlState_t*, char*, const char*, float, float, int)>(L"GetItemFloat")(state, buffer, item, min, max, range);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_GetProfileEmblem(struct PCachePublicProfile* profile, struct CompositeEmblemLayer* layers, int layerCount, short* backgroundID) -> void
{
  return Zynamic::Forward<void (struct PCachePublicProfile*, struct CompositeEmblemLayer*, int, short*)>(L"PCache_GetProfileEmblem")(profile, layers, layerCount, backgroundID);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PCache_SetProfileEmblem(int controllerIndex, const struct CompositeEmblemLayer* layers, int layerCount, short backgroundID) -> void
{
  return Zynamic::Forward<void (int, const struct CompositeEmblemLayer*, int, short)>(L"PCache_SetProfileEmblem")(controllerIndex, layers, layerCount, backgroundID);
}

#endif // __UNIMPLEMENTED__
