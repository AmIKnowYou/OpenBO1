//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto R_UpdateOverTime(float fCurrent, float fGoal, int frametime) -> float
{
  return Zynamic::Forward<float (float, float, int)>(L"R_UpdateOverTime")(fCurrent, fGoal, frametime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SetTessQuad(union GfxColor color) -> struct GfxVertex*
{
  return Zynamic::Forward<struct GfxVertex* (union GfxColor)>(L"RB_SetTessQuad")(color);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_TessCoronaBillboard(struct Corona* corona, union GfxColor color, float radius, int query) -> void
{
  return Zynamic::Forward<void (struct Corona*, union GfxColor, float, int)>(L"RB_TessCoronaBillboard")(corona, color, radius, query);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawCoronaSprite(struct Corona* corona, const struct Material* material, union GfxColor color, float radius, int query) -> void
{
  return Zynamic::Forward<void (struct Corona*, const struct Material*, union GfxColor, float, int)>(L"RB_DrawCoronaSprite")(corona, material, color, radius, query);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawCoronaQuerySprite(struct Corona* corona) -> void
{
  return Zynamic::Forward<void (struct Corona*)>(L"RB_DrawCoronaQuerySprite")(corona);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_FindBestCoronaToSpawn(struct CoronaState* state) -> struct GfxLightCorona*
{
  return Zynamic::Forward<struct GfxLightCorona* (struct CoronaState*)>(L"RB_FindBestCoronaToSpawn")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ResetCorona(struct Corona* corona) -> void
{
  return Zynamic::Forward<void (struct Corona*)>(L"RB_ResetCorona")(corona);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_SpawnCorona(struct Corona* corona, struct GfxLightCorona* info) -> void
{
  return Zynamic::Forward<void (struct Corona*, struct GfxLightCorona*)>(L"RB_SpawnCorona")(corona, info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_UnspawnCorona(struct Corona* corona) -> void
{
  return Zynamic::Forward<void (struct Corona*)>(L"RB_UnspawnCorona")(corona);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_PromoteCorona(struct CoronaState* state, struct Corona* corona) -> void
{
  return Zynamic::Forward<void (struct CoronaState*, struct Corona*)>(L"RB_PromoteCorona")(state, corona);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawCorona(struct Corona* corona, int frameTime, const struct Material* coronaMat) -> void
{
  return Zynamic::Forward<void (struct Corona*, int, const struct Material*)>(L"RB_DrawCorona")(corona, frameTime, coronaMat);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawCoronas(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"RB_DrawCoronas")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_ResetCoronas() -> void
{
  return Zynamic::Forward<void ()>(L"RB_ResetCoronas")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_AllocCoronaSpriteQuery(struct Corona* corona) -> void
{
  return Zynamic::Forward<void (struct Corona*)>(L"RB_AllocCoronaSpriteQuery")(corona);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_AllocCoronaSpriteQueries() -> void
{
  return Zynamic::Forward<void ()>(L"RB_AllocCoronaSpriteQueries")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_FreeCoronaSpriteQuery(struct Corona* corona) -> void
{
  return Zynamic::Forward<void (struct Corona*)>(L"RB_FreeCoronaSpriteQuery")(corona);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_FreeCoronaSpriteQueries() -> void
{
  return Zynamic::Forward<void ()>(L"RB_FreeCoronaSpriteQueries")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawWaypoint(struct Material* material, union GfxColor color, float* origin, float radius, bool screenSize, bool alignBottom, bool forceNear) -> void
{
  return Zynamic::Forward<void (struct Material*, union GfxColor, float*, float, bool, bool, bool)>(L"RB_DrawWaypoint")(material, color, origin, radius, screenSize, alignBottom, forceNear);
}

#endif // __UNIMPLEMENTED__
