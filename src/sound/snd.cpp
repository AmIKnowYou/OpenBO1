//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_snd() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_snd")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ShouldInit() -> bool
{
  return Zynamic::Forward<bool ()>(L"SND_ShouldInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_IsOnSameTeam(unsigned int listenerIndex, union SndEntHandle entNum) -> bool
{
  return Zynamic::Forward<bool (unsigned int, union SndEntHandle)>(L"SND_IsOnSameTeam")(listenerIndex, entNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetPosition(int index, const float* org) -> void
{
  return Zynamic::Forward<void (int, const float*)>(L"SND_SetPosition")(index, org);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ActiveListenerCount() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"SND_ActiveListenerCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetListenerIndexNearestToOrigin(const float* origin) -> int
{
  return Zynamic::Forward<int (const float*)>(L"SND_GetListenerIndexNearestToOrigin")(origin);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetNearestListenerPosition(const float* position, float* listener) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"SND_GetNearestListenerPosition")(position, listener);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetPlaybackIdNotPlayed(int index) -> int
{
  return Zynamic::Forward<int (int)>(L"SND_SetPlaybackIdNotPlayed")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AcquirePlaybackId() -> int
{
  return Zynamic::Forward<int ()>(L"SND_AcquirePlaybackId")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DoLengthNotify(int msec, void* lengthNotifyData, enum snd_length_type id) -> void
{
  return Zynamic::Forward<void (int, void*, enum snd_length_type)>(L"DoLengthNotify")(msec, lengthNotifyData, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AddLengthNotify(int playbackId, void* lengthNotifyData, enum snd_length_type id) -> bool
{
  return Zynamic::Forward<bool (int, void*, enum snd_length_type)>(L"SND_AddLengthNotify")(playbackId, lengthNotifyData, id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StartLengthNotify(int index, int totalMsec) -> void
{
  return Zynamic::Forward<void (int, int)>(L"SND_StartLengthNotify")(index, totalMsec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ResetVoiceInfo(int index) -> void
{
  return Zynamic::Forward<void (int)>(L"SND_ResetVoiceInfo")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetSeed(unsigned int key, unsigned int global_age) -> float
{
  return Zynamic::Forward<float (unsigned int, unsigned int)>(L"SND_GetSeed")(key, global_age);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetVoiceStartFlux(struct snd_voice_t* voice, float* player) -> void
{
  return Zynamic::Forward<void (struct snd_voice_t*, float*)>(L"SND_SetVoiceStartFlux")(voice, player);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetVoiceStartSeeds(const struct snd_alias_t* alias, struct snd_voice_t* voice) -> void
{
  return Zynamic::Forward<void (const struct snd_alias_t*, struct snd_voice_t*)>(L"SND_SetVoiceStartSeeds")(alias, voice);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetVoiceStartFades(float fadetime, struct snd_voice_t* voice) -> void
{
  return Zynamic::Forward<void (float, struct snd_voice_t*)>(L"SND_SetVoiceStartFades")(fadetime, voice);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateVoicePosition(struct snd_voice_t* voice, const float* startPosition) -> void
{
  return Zynamic::Forward<void (struct snd_voice_t*, const float*)>(L"SND_UpdateVoicePosition")(voice, startPosition);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetVoiceStartInfo(int index, struct SndStartAliasInfo* SndStartAliasInfo) -> void
{
  return Zynamic::Forward<void (int, struct SndStartAliasInfo*)>(L"SND_SetVoiceStartInfo")(index, SndStartAliasInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_SetSoundFileVoiceInfo(int voiceIndex, int srcChannelCount, int baserate, int total_msec, int start_msec, enum SndFileLoadingState loadingState) -> void
{
  return Zynamic::Forward<void (int, int, int, int, int, enum SndFileLoadingState)>(L"SND_SetSoundFileVoiceInfo")(voiceIndex, srcChannelCount, baserate, total_msec, start_msec, loadingState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_GetGlobalPriority(const struct snd_alias_t* alias, float volume) -> float
{
  return Zynamic::Forward<float (const struct snd_alias_t*, float)>(L"Snd_GetGlobalPriority")(alias, volume);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_GetGlobalPriorityVolume(const struct snd_alias_t* alias, const float* org) -> float
{
  return Zynamic::Forward<float (const struct snd_alias_t*, const float*)>(L"Snd_GetGlobalPriorityVolume")(alias, org);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_GetLowestPriority(float* priority, int* channel, unsigned int start, unsigned int count) -> void
{
  return Zynamic::Forward<void (float*, int*, unsigned int, unsigned int)>(L"Snd_GetLowestPriority")(priority, channel, start, count);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindFreeVoice(struct SndStartAliasInfo* startAliasInfo) -> int
{
  return Zynamic::Forward<int (struct SndStartAliasInfo*)>(L"SND_FindFreeVoice")(startAliasInfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ContinueLoopingSound_Internal(int voiceIndex, float volumeScale, int fadeTime, const float* org, struct snd_playback* playback) -> void
{
  return Zynamic::Forward<void (int, float, int, const float*, struct snd_playback*)>(L"SND_ContinueLoopingSound_Internal")(voiceIndex, volumeScale, fadeTime, org, playback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ContinueLoopingSound(unsigned int aliasId, float volumeScale, union SndEntHandle sndEnt, const float* org, int fadeTime, struct snd_playback* playback) -> int
{
  return Zynamic::Forward<int (unsigned int, float, union SndEntHandle, const float*, int, struct snd_playback*)>(L"SND_ContinueLoopingSound")(aliasId, volumeScale, sndEnt, org, fadeTime, playback);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetCurrentContext(unsigned int type) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int)>(L"SND_GetCurrentContext")(type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PickSoundAliasFromList(const struct snd_alias_list_t* aliasList, int objectId) -> struct snd_alias_t*
{
  return Zynamic::Forward<struct snd_alias_t* (const struct snd_alias_list_t*, int)>(L"SND_PickSoundAliasFromList")(aliasList, objectId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PickSoundAlias(const char* name, int objectid) -> struct snd_alias_t*
{
  return Zynamic::Forward<struct snd_alias_t* (const char*, int)>(L"SND_PickSoundAlias")(name, objectid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_CheckValidSecondary(const struct snd_alias_t* alias, const struct snd_alias_t* secondaryAlias) -> bool
{
  return Zynamic::Forward<bool (const struct snd_alias_t*, const struct snd_alias_t*)>(L"SND_CheckValidSecondary")(alias, secondaryAlias);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetPlayingInfo(unsigned int aliasHash, int* pcount, int* poldest, int* least, union SndEntHandle ent, bool useEnt) -> void
{
  return Zynamic::Forward<void (unsigned int, int*, int*, int*, union SndEntHandle, bool)>(L"SND_GetPlayingInfo")(aliasHash, pcount, poldest, least, ent, useEnt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Limit(const char* name, int aliasHash, enum snd_limit_type_t limitType, int limitCount, union SndEntHandle ent, bool useEnt, float priority) -> bool
{
  return Zynamic::Forward<bool (const char*, int, enum snd_limit_type_t, int, union SndEntHandle, bool, float)>(L"SND_Limit")(name, aliasHash, limitType, limitCount, ent, useEnt, priority);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LimitVoice(const struct snd_alias_t* alias, union SndEntHandle ent) -> bool
{
  return Zynamic::Forward<bool (const struct snd_alias_t*, union SndEntHandle)>(L"SND_LimitVoice")(alias, ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AssertValidData(const struct snd_alias_t* alias) -> void
{
  return Zynamic::Forward<void (const struct snd_alias_t*)>(L"SND_AssertValidData")(alias);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PlaySoundAlias(const struct snd_alias_list_t* aliasList, float volumeScale, union SndEntHandle sndEnt, const float* org, int timeshift, int fadeTime, const float* direction, struct snd_playback* playback, struct snd_occlusion_start_cache* ocache) -> int
{
  return Zynamic::Forward<int (const struct snd_alias_list_t*, float, union SndEntHandle, const float*, int, int, const float*, struct snd_playback*, struct snd_occlusion_start_cache*)>(L"SND_PlaySoundAlias")(aliasList, volumeScale, sndEnt, org, timeshift, fadeTime, direction, playback, ocache);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PauseSounds() -> void
{
  return Zynamic::Forward<void ()>(L"SND_PauseSounds")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UnpauseSounds() -> void
{
  return Zynamic::Forward<void ()>(L"SND_UnpauseSounds")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdatePause() -> void
{
  return Zynamic::Forward<void ()>(L"SND_UpdatePause")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateMasterVolumes(float dt) -> void
{
  return Zynamic::Forward<void (float)>(L"SND_UpdateMasterVolumes")(dt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateVoices(int frametime) -> void
{
  return Zynamic::Forward<void (int)>(L"SND_UpdateVoices")(frametime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetCurrentReverb() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"SND_GetCurrentReverb")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateRoomEffects(int frametime) -> void
{
  return Zynamic::Forward<void (int)>(L"SND_UpdateRoomEffects")(frametime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateStaticSounds() -> void
{
  return Zynamic::Forward<void ()>(L"SND_UpdateStaticSounds")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateDebugAlias() -> void
{
  return Zynamic::Forward<void ()>(L"SND_UpdateDebugAlias")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SNDL_Update() -> void
{
  return Zynamic::Forward<void ()>(L"SNDL_Update")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_StopVoice(int voiceIndex) -> void
{
  return Zynamic::Forward<void (int)>(L"SND_StopVoice")(voiceIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_InitGroups() -> void
{
  return Zynamic::Forward<void ()>(L"SND_InitGroups")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Active() -> int
{
  return Zynamic::Forward<int ()>(L"SND_Active")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Init() -> void
{
  return Zynamic::Forward<void ()>(L"SND_Init")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_Shutdown() -> void
{
  return Zynamic::Forward<void ()>(L"SND_Shutdown")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_ShutdownVoices() -> void
{
  return Zynamic::Forward<void ()>(L"SND_ShutdownVoices")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_InitSnapshot() -> void
{
  return Zynamic::Forward<void ()>(L"SND_InitSnapshot")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateSnapshot(float dt) -> void
{
  return Zynamic::Forward<void (float)>(L"SND_UpdateSnapshot")(dt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetPitch(struct snd_voice_t* voice) -> float
{
  return Zynamic::Forward<float (struct snd_voice_t*)>(L"SND_GetPitch")(voice);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetBaseLevel(const struct snd_voice_t* voice) -> float
{
  return Zynamic::Forward<float (const struct snd_voice_t*)>(L"SND_GetBaseLevel")(voice);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetDryLevel(const struct snd_voice_t* voice) -> float
{
  return Zynamic::Forward<float (const struct snd_voice_t*)>(L"SND_GetDryLevel")(voice);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetWetLevel(const struct snd_voice_t* voice) -> float
{
  return Zynamic::Forward<float (const struct snd_voice_t*)>(L"SND_GetWetLevel")(voice);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetDistance(const struct snd_voice_t* channel) -> float
{
  return Zynamic::Forward<float (const struct snd_voice_t*)>(L"SND_GetDistance")(channel);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetLpfLevel(const struct snd_voice_t* voice) -> float
{
  return Zynamic::Forward<float (const struct snd_voice_t*)>(L"SND_GetLpfLevel")(voice);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_DistanceCurveEval(const struct snd_curve* minCurve, const struct snd_curve* curve, float minDist, float maxDist, float dist) -> float
{
  return Zynamic::Forward<float (const struct snd_curve*, const struct snd_curve*, float, float, float)>(L"Snd_DistanceCurveEval")(minCurve, curve, minDist, maxDist, dist);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetVoiceLength(int voiceIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"SND_GetVoiceLength")(voiceIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FixupStereoPan(struct snd_speaker_map* pan) -> void
{
  return Zynamic::Forward<void (struct snd_speaker_map*)>(L"SND_FixupStereoPan")(pan);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdatePanFilter(float dt, struct snd_voice_t* voice) -> void
{
  return Zynamic::Forward<void (float, struct snd_voice_t*)>(L"SND_UpdatePanFilter")(dt, voice);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_UpdateVoice(struct snd_voice_t* voice, float dt) -> void
{
  return Zynamic::Forward<void (struct snd_voice_t*, float)>(L"SND_UpdateVoice")(voice, dt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetOmni(const struct snd_voice_t* voice) -> float
{
  return Zynamic::Forward<float (const struct snd_voice_t*)>(L"SND_GetOmni")(voice);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetPlaybackVoice(int playbackId) -> struct snd_voice_t*
{
  return Zynamic::Forward<struct snd_voice_t* (int)>(L"SND_GetPlaybackVoice")(playbackId);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_IsStream(int index) -> bool
{
  return Zynamic::Forward<bool (int)>(L"SND_IsStream")(index);
}

#endif // __UNIMPLEMENTED__
