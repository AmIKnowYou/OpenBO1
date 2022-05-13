//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto CG_ShouldPlaySoundOnLocalClient(int localClientNum, int entitynum, const float* origin, unsigned int aliasname) -> bool
{
  return Zynamic::Forward<bool (int, int, const float*, unsigned int)>(L"CG_ShouldPlaySoundOnLocalClient")(localClientNum, entitynum, origin, aliasname);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SndEntHandle(int localClientNum, int entIndex) -> union SndEntHandle
{
  return Zynamic::Forward<union SndEntHandle (int, int)>(L"CG_SndEntHandle")(localClientNum, entIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlaySound(int localClientNum, int entitynum, const float* origin, int fadeMs, bool doNotify, float attenuation, unsigned int id) -> void
{
  return Zynamic::Forward<void (int, int, const float*, int, bool, float, unsigned int)>(L"CG_PlaySound")(localClientNum, entitynum, origin, fadeMs, doNotify, attenuation, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlaySound(int localClientNum, int entitynum, const float* origin, int fadeMs, bool doNotify, float attenuation, const char* name) -> void
{
  return Zynamic::Forward<void (int, int, const float*, int, bool, float, const char*)>(L"CG_PlaySound")(localClientNum, entitynum, origin, fadeMs, doNotify, attenuation, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlaySound(int localClientNum, const float* origin, int fadeMs, bool doNotify, float attenuation, const char* name) -> void
{
  return Zynamic::Forward<void (int, const float*, int, bool, float, const char*)>(L"CG_PlaySound")(localClientNum, origin, fadeMs, doNotify, attenuation, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlaySoundWithHandle(int localClientNum, int entitynum, const float* origin, int fadeMs, bool doNotify, float volume, unsigned int id) -> int
{
  return Zynamic::Forward<int (int, int, const float*, int, bool, float, unsigned int)>(L"CG_PlaySoundWithHandle")(localClientNum, entitynum, origin, fadeMs, doNotify, volume, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlaySoundWithHandle(int localClientNum, int entitynum, const float* origin, int fadeMs, bool doNotify, float attenuation, const char* name) -> int
{
  return Zynamic::Forward<int (int, int, const float*, int, bool, float, const char*)>(L"CG_PlaySoundWithHandle")(localClientNum, entitynum, origin, fadeMs, doNotify, attenuation, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PumpEntityLoopSound(int localClientNum, const struct centity_s* cent) -> void
{
  return Zynamic::Forward<void (int, const struct centity_s*)>(L"CG_PumpEntityLoopSound")(localClientNum, cent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_PlayAnimScriptSoundAlias(int clientIndex, struct snd_alias_list_t* aliasList) -> void
{
  return Zynamic::Forward<void (int, struct snd_alias_list_t*)>(L"CG_PlayAnimScriptSoundAlias")(clientIndex, aliasList);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SubtitlePrint(int msec, const char* subtitle) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"CG_SubtitlePrint")(msec, subtitle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SubtitleSndLengthNotify(int msec, const char* lengthNotifyData) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"CG_SubtitleSndLengthNotify")(msec, lengthNotifyData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_CopySoundEntityOrientation(int localClientNum, int entIndex, float* origin_out, float* axis_out[0x3]) -> void
{
  return Zynamic::Forward<void (int, int, float*, float*[0x3])>(L"CG_CopySoundEntityOrientation")(localClientNum, entIndex, origin_out, axis_out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SoundGetUseCount(const union SndEntHandle sndEnt) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const union SndEntHandle)>(L"CG_SoundGetUseCount")(sndEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SoundEntInUse(const union SndEntHandle sndEnt) -> bool
{
  return Zynamic::Forward<bool (const union SndEntHandle)>(L"CG_SoundEntInUse")(sndEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_GetSoundEntityOrientation(const union SndEntHandle sndEnt, float* origin_out, float* axis_out[0x3], float* velocity_out) -> void
{
  return Zynamic::Forward<void (const union SndEntHandle, float*, float*[0x3], float*)>(L"CG_GetSoundEntityOrientation")(sndEnt, origin_out, axis_out, velocity_out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_StopSoundAlias(int localClientNum, int entityNum, unsigned int aliasName) -> void
{
  return Zynamic::Forward<void (int, int, unsigned int)>(L"CG_StopSoundAlias")(localClientNum, entityNum, aliasName);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FireManagerUpdate(unsigned int listener, unsigned int index, const float* location, float level) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int, const float*, float)>(L"CG_FireManagerUpdate")(listener, index, location, level);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SndFireReset() -> void
{
  return Zynamic::Forward<void ()>(L"CG_SndFireReset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SndUpdateFire() -> void
{
  return Zynamic::Forward<void ()>(L"CG_SndUpdateFire")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_FlameSourceUpdate(int localClientNum, int entityNum, const float* sourcePosition, const float* flamePosition, enum snd_flame_source_flags flags, const char* flameOffLoopSound, const char* flameIgniteSound, const char* flameOnLoopSound, const char* flameCooldownSound) -> void
{
  return Zynamic::Forward<void (int, int, const float*, const float*, enum snd_flame_source_flags, const char*, const char*, const char*, const char*)>(L"CG_FlameSourceUpdate")(localClientNum, entityNum, sourcePosition, flamePosition, flags, flameOffLoopSound, flameIgniteSound, flameOnLoopSound, flameCooldownSound);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SoundWhizbyPath(const float* p1, const float* p2, const float* p3, float r, float* start, float* end) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, const float*, float, float*, float*)>(L"CG_SoundWhizbyPath")(p1, p2, p3, r, start, end);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SoundWhizby(int localClientNum, const struct WeaponDef* weapDef, const float* shotPosition, const float* shotDirection, const float* position) -> void
{
  return Zynamic::Forward<void (int, const struct WeaponDef*, const float*, const float*, const float*)>(L"CG_SoundWhizby")(localClientNum, weapDef, shotPosition, shotDirection, position);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SndUpdate() -> void
{
  return Zynamic::Forward<void ()>(L"CG_SndUpdate")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CG_SndGameReset() -> void
{
  return Zynamic::Forward<void ()>(L"CG_SndGameReset")();
}

#endif // __UNIMPLEMENTED__
