//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SNDL_AliasName(const char* name, unsigned int id) -> void
{
  return Zynamic::Forward<void (const char*, unsigned int)>(L"SNDL_AliasName")(name, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_Play(unsigned int aliasHash, int fadeTimeMs, float attenuation, union SndEntHandle entHandle, const float* position, const float* direction, bool notify, struct snd_playback* playback) -> int
{
  return Zynamic::Forward<int (unsigned int, int, float, union SndEntHandle, const float*, const float*, bool, struct snd_playback*)>(L"SNDL_Play")(aliasHash, fadeTimeMs, attenuation, entHandle, position, direction, notify, playback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StopSoundAliasesOnEnt(union SndEntHandle sndEnt, unsigned int name) -> void
{
  return Zynamic::Forward<void (union SndEntHandle, unsigned int)>(L"StopSoundAliasesOnEnt")(sndEnt, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_StopSoundAliasOnEnt(union SndEntHandle sndEnt, unsigned int name) -> void
{
  return Zynamic::Forward<void (union SndEntHandle, unsigned int)>(L"SNDL_StopSoundAliasOnEnt")(sndEnt, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_StopSoundsOnEnt(union SndEntHandle sndEnt) -> void
{
  return Zynamic::Forward<void (union SndEntHandle)>(L"SNDL_StopSoundsOnEnt")(sndEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_NotifyCinematicStart(float volume) -> void
{
  return Zynamic::Forward<void (float)>(L"SNDL_NotifyCinematicStart")(volume);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_NotifyCinematicEnd() -> void
{
  return Zynamic::Forward<void ()>(L"SNDL_NotifyCinematicEnd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_DisconnectListener(int localClientNum) -> void
{
  return Zynamic::Forward<void (int)>(L"SNDL_DisconnectListener")(localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_SetListener(int localClientNum, int clientNum, enum team_t team, const float* origin, const float* inAxis[0x3]) -> void
{
  return Zynamic::Forward<void (int, int, enum team_t, const float*, const float*[0x3])>(L"SNDL_SetListener")(localClientNum, clientNum, team, origin, inAxis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_StopSounds(enum snd_stop_sound_flags which) -> void
{
  return Zynamic::Forward<void (enum snd_stop_sound_flags)>(L"SNDL_StopSounds")(which);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_FadeOut() -> void
{
  return Zynamic::Forward<void ()>(L"SNDL_FadeOut")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_FadeIn() -> void
{
  return Zynamic::Forward<void ()>(L"SNDL_FadeIn")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_SetEnvironmentEffects(int priority, unsigned int roomstring, float drylevel, float wetlevel, int fademsec) -> void
{
  return Zynamic::Forward<void (int, unsigned int, float, float, int)>(L"SNDL_SetEnvironmentEffects")(priority, roomstring, drylevel, wetlevel, fademsec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_DeactivateEnvironmentEffects(int priority, int fademsec) -> void
{
  return Zynamic::Forward<void (int, int)>(L"SNDL_DeactivateEnvironmentEffects")(priority, fademsec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_SetPlaybackAttenuation(int playbackId, float attenuation) -> void
{
  return Zynamic::Forward<void (int, float)>(L"SNDL_SetPlaybackAttenuation")(playbackId, attenuation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_SetPlaybackAttenuationRate(int playbackId, float rate) -> void
{
  return Zynamic::Forward<void (int, float)>(L"SNDL_SetPlaybackAttenuationRate")(playbackId, rate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_SetPlaybackPitch(int playbackId, float pitch) -> void
{
  return Zynamic::Forward<void (int, float)>(L"SNDL_SetPlaybackPitch")(playbackId, pitch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_SetPlaybackPitchRate(int playbackId, float rate) -> void
{
  return Zynamic::Forward<void (int, float)>(L"SNDL_SetPlaybackPitchRate")(playbackId, rate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_StopPlayback(int playbackId) -> void
{
  return Zynamic::Forward<void (int)>(L"SNDL_StopPlayback")(playbackId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_SetSnapshot(enum snd_snapshot_type type, unsigned int id, float length, float amount) -> void
{
  return Zynamic::Forward<void (enum snd_snapshot_type, unsigned int, float, float)>(L"SNDL_SetSnapshot")(type, id, length, amount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_SetGameState(bool isMature, bool isPaused, float timescale, unsigned int cg_time, unsigned int seed) -> void
{
  return Zynamic::Forward<void (bool, bool, float, unsigned int, unsigned int)>(L"SNDL_SetGameState")(isMature, isPaused, timescale, cg_time, seed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_SetScriptTimescale(float value) -> void
{
  return Zynamic::Forward<void (float)>(L"SNDL_SetScriptTimescale")(value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_PlayLoopAt(unsigned int id, const float* origin) -> void
{
  return Zynamic::Forward<void (unsigned int, const float*)>(L"SNDL_PlayLoopAt")(id, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_StopLoopAt(unsigned int id, const float* origin) -> void
{
  return Zynamic::Forward<void (unsigned int, const float*)>(L"SNDL_StopLoopAt")(id, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_PlayLineAt(unsigned int id, const float* origin0, const float* origin1) -> void
{
  return Zynamic::Forward<void (unsigned int, const float*, const float*)>(L"SNDL_PlayLineAt")(id, origin0, origin1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_StopLineAt(unsigned int id, const float* origin0, const float* origin1) -> void
{
  return Zynamic::Forward<void (unsigned int, const float*, const float*)>(L"SNDL_StopLineAt")(id, origin0, origin1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_GetPlaybackTime(int playbackId) -> int
{
  return Zynamic::Forward<int (int)>(L"SNDL_GetPlaybackTime")(playbackId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_GameReset() -> void
{
  return Zynamic::Forward<void ()>(L"SNDL_GameReset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_SetContext(unsigned int type, unsigned int value) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int)>(L"SNDL_SetContext")(type, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_UpdateLoopingSounds() -> void
{
  return Zynamic::Forward<void ()>(L"SNDL_UpdateLoopingSounds")();
}

#endif // __UNIMPLEMENTED__
