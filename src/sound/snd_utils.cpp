//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SND_GetSpeakerConfigCount() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"SND_GetSpeakerConfigCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_GetSpeakerConfig(unsigned int index) -> const struct snd_speaker_config*
{
  return Zynamic::Forward<const struct snd_speaker_config* (unsigned int)>(L"Snd_GetSpeakerConfig")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_GetMixChannelCount(unsigned int speakerConfig) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int)>(L"Snd_GetMixChannelCount")(speakerConfig);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_NormalizeAngle(float x) -> float
{
  return Zynamic::Forward<float (float)>(L"Snd_NormalizeAngle")(x);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_AngleInInterval(float angle, float left, float right) -> bool
{
  return Zynamic::Forward<bool (float, float, float)>(L"Snd_AngleInInterval")(angle, left, right);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_PanMono(float angle) -> float
{
  return Zynamic::Forward<float (float)>(L"Snd_PanMono")(angle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_PanStereo(float angle, float boost, float* left, float* right) -> void
{
  return Zynamic::Forward<void (float, float, float*, float*)>(L"Snd_PanStereo")(angle, boost, left, right);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_Pan(unsigned int speakerCount, const float* angles, float toSound, float* levels) -> void
{
  return Zynamic::Forward<void (unsigned int, const float*, float, float*)>(L"Snd_Pan")(speakerCount, angles, toSound, levels);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_Pan3d(const struct snd_speaker_config* config, const float* position, const float* forward, const float* listener, float centerSend, float lfeSend, float aliasOmni, struct snd_speaker_map* pan) -> void
{
  return Zynamic::Forward<void (const struct snd_speaker_config*, const float*, const float*, const float*, float, float, float, struct snd_speaker_map*)>(L"Snd_Pan3d")(config, position, forward, listener, centerSend, lfeSend, aliasOmni, pan);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_EqualPowerFadeCoefs(float t, float* a, float* b) -> void
{
  return Zynamic::Forward<void (float, float*, float*)>(L"SND_EqualPowerFadeCoefs")(t, a, b);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetNearestPointOnSegment(const float* P, const float* segmentA, const float* segmentB, float* nearPoint) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, float*)>(L"SND_GetNearestPointOnSegment")(P, segmentA, segmentB, nearPoint);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetNearestPointOnStrip(const float* point, const float* verts[0x3], unsigned int count, float* position) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x3], unsigned int, float*)>(L"SND_GetNearestPointOnStrip")(point, verts, count, position);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_HashAlias(const struct snd_alias_list_t* alias) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const struct snd_alias_list_t*)>(L"SND_HashAlias")(alias);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetAliasName(const struct snd_alias_list_t* alias) -> const char*
{
  return Zynamic::Forward<const char* (const struct snd_alias_list_t*)>(L"SND_GetAliasName")(alias);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_dBToLinear(float db) -> float
{
  return Zynamic::Forward<float (float)>(L"SND_dBToLinear")(db);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LinearToDb(float linear) -> float
{
  return Zynamic::Forward<float (float)>(L"SND_LinearToDb")(linear);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_LinearToDbSpl(float linear) -> float
{
  return Zynamic::Forward<float (float)>(L"SND_LinearToDbSpl")(linear);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_dBSPLToLinear(float db) -> float
{
  return Zynamic::Forward<float (float)>(L"SND_dBSPLToLinear")(db);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_HashName(const char* name) -> unsigned int
{
  return Zynamic::Forward<unsigned int (const char*)>(L"SND_HashName")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_SpeakerMapSetVolume(struct snd_speaker_map* map, int in, int out, float volume) -> void
{
  return Zynamic::Forward<void (struct snd_speaker_map*, int, int, float)>(L"Snd_SpeakerMapSetVolume")(map, in, out, volume);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_SpeakerMapZero(struct snd_speaker_map* map) -> void
{
  return Zynamic::Forward<void (struct snd_speaker_map*)>(L"Snd_SpeakerMapZero")(map);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_SpeakerMapGetIndex(const struct snd_speaker_map* map, int in, int out) -> int
{
  return Zynamic::Forward<int (const struct snd_speaker_map*, int, int)>(L"Snd_SpeakerMapGetIndex")(map, in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_SpeakerMapGetVolume(const struct snd_speaker_map* map, int in, int out) -> float
{
  return Zynamic::Forward<float (const struct snd_speaker_map*, int, int)>(L"Snd_SpeakerMapGetVolume")(map, in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PanToSpeakermap11(const struct snd_pan* pan, struct snd_speaker_map* map) -> void
{
  return Zynamic::Forward<void (const struct snd_pan*, struct snd_speaker_map*)>(L"SND_PanToSpeakermap11")(pan, map);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PanToSpeakermap12(const struct snd_pan* pan, struct snd_speaker_map* map) -> void
{
  return Zynamic::Forward<void (const struct snd_pan*, struct snd_speaker_map*)>(L"SND_PanToSpeakermap12")(pan, map);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PanToSpeakermap16(const struct snd_pan* pan, struct snd_speaker_map* map) -> void
{
  return Zynamic::Forward<void (const struct snd_pan*, struct snd_speaker_map*)>(L"SND_PanToSpeakermap16")(pan, map);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PanToSpeakermap18(const struct snd_pan* pan, struct snd_speaker_map* map) -> void
{
  return Zynamic::Forward<void (const struct snd_pan*, struct snd_speaker_map*)>(L"SND_PanToSpeakermap18")(pan, map);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PanToSpeakermap21(const struct snd_pan* pan, struct snd_speaker_map* map) -> void
{
  return Zynamic::Forward<void (const struct snd_pan*, struct snd_speaker_map*)>(L"SND_PanToSpeakermap21")(pan, map);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PanToSpeakermap22(const struct snd_pan* pan, struct snd_speaker_map* map) -> void
{
  return Zynamic::Forward<void (const struct snd_pan*, struct snd_speaker_map*)>(L"SND_PanToSpeakermap22")(pan, map);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PanToSpeakermap26(const struct snd_pan* pan, struct snd_speaker_map* map) -> void
{
  return Zynamic::Forward<void (const struct snd_pan*, struct snd_speaker_map*)>(L"SND_PanToSpeakermap26")(pan, map);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PanToSpeakermap28(const struct snd_pan* pan, struct snd_speaker_map* map) -> void
{
  return Zynamic::Forward<void (const struct snd_pan*, struct snd_speaker_map*)>(L"SND_PanToSpeakermap28")(pan, map);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_PanToSpeakermap(unsigned int inputChannelCount, unsigned int outputChannelCount, const struct snd_pan* pan, float centerSend, struct snd_speaker_map* map) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int, const struct snd_pan*, float, struct snd_speaker_map*)>(L"SND_PanToSpeakermap")(inputChannelCount, outputChannelCount, pan, centerSend, map);
}

#endif // __UNIMPLEMENTED__
