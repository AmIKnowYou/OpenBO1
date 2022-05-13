//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SND_PlayInternal(unsigned int id, int fadeTimeMs, float attenuation, union SndEntHandle entHandle, const float* position, const float* direction, bool notify, struct snd_playback* playback) -> void
{
  return Zynamic::Forward<void (unsigned int, int, float, union SndEntHandle, const float*, const float*, bool, struct snd_playback*)>(L"SND_PlayInternal")(id, fadeTimeMs, attenuation, entHandle, position, direction, notify, playback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Play(unsigned int id, int fadeTimeMs, float attenuation, union SndEntHandle entHandle, const float* position, const float* direction, bool notify) -> void
{
  return Zynamic::Forward<void (unsigned int, int, float, union SndEntHandle, const float*, const float*, bool)>(L"SND_Play")(id, fadeTimeMs, attenuation, entHandle, position, direction, notify);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Play(const char* alias, int fadeTimeMs, float attenuation, union SndEntHandle entHandle, const float* position, const float* direction, bool notify) -> void
{
  return Zynamic::Forward<void (const char*, int, float, union SndEntHandle, const float*, const float*, bool)>(L"SND_Play")(alias, fadeTimeMs, attenuation, entHandle, position, direction, notify);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Playback(unsigned int alias, int fadeTimeMs, float attenuation, union SndEntHandle entHandle, const float* position, const float* direction, bool notify) -> int
{
  return Zynamic::Forward<int (unsigned int, int, float, union SndEntHandle, const float*, const float*, bool)>(L"SND_Playback")(alias, fadeTimeMs, attenuation, entHandle, position, direction, notify);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopSoundAliasOnEnt(union SndEntHandle ent, unsigned int alias_name) -> void
{
  return Zynamic::Forward<void (union SndEntHandle, unsigned int)>(L"SND_StopSoundAliasOnEnt")(ent, alias_name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopSoundsOnEnt(union SndEntHandle ent) -> void
{
  return Zynamic::Forward<void (union SndEntHandle)>(L"SND_StopSoundsOnEnt")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_NotifyCinematicStart(float volume) -> void
{
  return Zynamic::Forward<void (float)>(L"SND_NotifyCinematicStart")(volume);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_NotifyCinematicEnd() -> void
{
  return Zynamic::Forward<void ()>(L"SND_NotifyCinematicEnd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DisconnectListener(int listener) -> void
{
  return Zynamic::Forward<void (int)>(L"SND_DisconnectListener")(listener);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetListener(int listener, int clientNum, enum team_t team, const float* origin, const float* axis[0x3]) -> void
{
  return Zynamic::Forward<void (int, int, enum team_t, const float*, const float*[0x3])>(L"SND_SetListener")(listener, clientNum, team, origin, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopSounds(enum snd_stop_sound_flags flags) -> void
{
  return Zynamic::Forward<void (enum snd_stop_sound_flags)>(L"SND_StopSounds")(flags);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FadeIn() -> void
{
  return Zynamic::Forward<void ()>(L"SND_FadeIn")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FadeOut() -> void
{
  return Zynamic::Forward<void ()>(L"SND_FadeOut")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEnvironmentEffects(int priority, const char* preset, float drylevel, float wetlevel, int fademsec) -> void
{
  return Zynamic::Forward<void (int, const char*, float, float, int)>(L"SND_SetEnvironmentEffects")(priority, preset, drylevel, wetlevel, fademsec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DeactivateEnvironmentEffects(int priority, int fademsec) -> void
{
  return Zynamic::Forward<void (int, int)>(L"SND_DeactivateEnvironmentEffects")(priority, fademsec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetPlaybackAttenuation(int id, float attenuation) -> void
{
  return Zynamic::Forward<void (int, float)>(L"SND_SetPlaybackAttenuation")(id, attenuation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetPlaybackAttenuationRate(int id, float rate) -> void
{
  return Zynamic::Forward<void (int, float)>(L"SND_SetPlaybackAttenuationRate")(id, rate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetPlaybackPitch(int playbackId, float pitch) -> void
{
  return Zynamic::Forward<void (int, float)>(L"SND_SetPlaybackPitch")(playbackId, pitch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetPlaybackPitchRate(int playbackId, float rate) -> void
{
  return Zynamic::Forward<void (int, float)>(L"SND_SetPlaybackPitchRate")(playbackId, rate);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopPlayback(int playbackId) -> void
{
  return Zynamic::Forward<void (int)>(L"SND_StopPlayback")(playbackId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetSnapshot(enum snd_snapshot_type type, const char* snapshotName, float length, float amount) -> void
{
  return Zynamic::Forward<void (enum snd_snapshot_type, const char*, float, float)>(L"SND_SetSnapshot")(type, snapshotName, length, amount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetEntState(union SndEntHandle handle) -> void
{
  return Zynamic::Forward<void (union SndEntHandle)>(L"SND_SetEntState")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PlayLoopAt(unsigned int id, const float* origin) -> void
{
  return Zynamic::Forward<void (unsigned int, const float*)>(L"SND_PlayLoopAt")(id, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopLoopAt(unsigned int id, const float* origin) -> void
{
  return Zynamic::Forward<void (unsigned int, const float*)>(L"SND_StopLoopAt")(id, origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PlayLineAt(unsigned int id, const float* origin0, const float* origin1) -> void
{
  return Zynamic::Forward<void (unsigned int, const float*, const float*)>(L"SND_PlayLineAt")(id, origin0, origin1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopLineAt(unsigned int id, const float* origin0, const float* origin1) -> void
{
  return Zynamic::Forward<void (unsigned int, const float*, const float*)>(L"SND_StopLineAt")(id, origin0, origin1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetContext(const char* type, const char* value) -> void
{
  return Zynamic::Forward<void (const char*, const char*)>(L"SND_SetContext")(type, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetScriptTimescale(float value) -> void
{
  return Zynamic::Forward<void (float)>(L"SND_SetScriptTimescale")(value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindEntState(union SndEntHandle handle, bool createNew) -> struct snd_ent_state*
{
  return Zynamic::Forward<struct snd_ent_state* (union SndEntHandle, bool)>(L"SND_FindEntState")(handle, createNew);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateEntState(union SndEntHandle handle, const float* origin, const float* velocity, const float* orientation[0x3]) -> void
{
  return Zynamic::Forward<void (union SndEntHandle, const float*, const float*, const float*[0x3])>(L"SND_UpdateEntState")(handle, origin, velocity, orientation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetEntState(union SndEntHandle handle, float* origin, float* velocity, float* orientation[0x3]) -> bool
{
  return Zynamic::Forward<bool (union SndEntHandle, float*, float*, float*[0x3])>(L"SND_GetEntState")(handle, origin, velocity, orientation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_SetEntState(union SndEntHandle handle, const float* origin, const float* velocity, const float* orientation[0x3]) -> void
{
  return Zynamic::Forward<void (union SndEntHandle, const float*, const float*, const float*[0x3])>(L"SNDL_SetEntState")(handle, origin, velocity, orientation);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_EntStateFrame() -> void
{
  return Zynamic::Forward<void ()>(L"SND_EntStateFrame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ResetEntState() -> void
{
  return Zynamic::Forward<void ()>(L"SND_ResetEntState")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_EntStateRequest(union SndEntHandle handle) -> void
{
  return Zynamic::Forward<void (union SndEntHandle)>(L"SND_EntStateRequest")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SubtitleNotify(const char* subtitle, unsigned int lengthMs) -> void
{
  return Zynamic::Forward<void (const char*, unsigned int)>(L"SND_SubtitleNotify")(subtitle, lengthMs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LengthNotify(unsigned int ent, unsigned int lengthMs) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int)>(L"SND_LengthNotify")(ent, lengthMs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FreePlaybackNotify(struct snd_playback* playback) -> void
{
  return Zynamic::Forward<void (struct snd_playback*)>(L"SND_FreePlaybackNotify")(playback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ResetPlaybacks() -> void
{
  return Zynamic::Forward<void ()>(L"SND_ResetPlaybacks")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AllocatePlayback() -> struct snd_playback*
{
  return Zynamic::Forward<struct snd_playback* ()>(L"SND_AllocatePlayback")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FreePlayback(struct snd_playback* playback) -> void
{
  return Zynamic::Forward<void (struct snd_playback*)>(L"SND_FreePlayback")(playback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindPlayback(int playbackId) -> struct snd_playback*
{
  return Zynamic::Forward<struct snd_playback* (int)>(L"SND_FindPlayback")(playbackId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_IsPlaying(int playbackId) -> bool
{
  return Zynamic::Forward<bool (int)>(L"SND_IsPlaying")(playbackId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetPlaybackTime(int playbackId) -> int
{
  return Zynamic::Forward<int (int)>(L"SND_GetPlaybackTime")(playbackId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetKnownLength(int playbackId, int* msec) -> bool
{
  return Zynamic::Forward<bool (int, int*)>(L"SND_GetKnownLength")(playbackId, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Frame() -> void
{
  return Zynamic::Forward<void ()>(L"SND_Frame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Update() -> void
{
  return Zynamic::Forward<void ()>(L"SND_Update")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateWait() -> void
{
  return Zynamic::Forward<void ()>(L"SND_UpdateWait")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

void `dynamic initializer for 'updatesound_workerModule''()
{
  return Zynamic::Forward<void ()>(L"`dynamic initializer for 'updatesound_workerModule''")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto updatesound_workerCallback(struct jqBatch* batch) -> int
{
  return Zynamic::Forward<int (struct jqBatch*)>(L"updatesound_workerCallback")(batch);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GameReset() -> void
{
  return Zynamic::Forward<void ()>(L"SND_GameReset")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_BeginFrame(bool isMature, bool isPaused, float timescale, unsigned int cgTime, unsigned int seed) -> void
{
  return Zynamic::Forward<void (bool, bool, float, unsigned int, unsigned int)>(L"SND_BeginFrame")(isMature, isPaused, timescale, cgTime, seed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_EndFrame() -> void
{
  return Zynamic::Forward<void ()>(L"SND_EndFrame")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AsyncInit() -> void
{
  return Zynamic::Forward<void ()>(L"SND_AsyncInit")();
}

#endif // __UNIMPLEMENTED__
