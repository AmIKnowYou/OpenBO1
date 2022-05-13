//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto SND_FaderSetRate(struct snd_fader_t* fader, float r) -> void
{
  return Zynamic::Forward<void (struct snd_fader_t*, float)>(L"SND_FaderSetRate")(fader, r);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto SND_FaderSetRateTime(struct snd_fader_t* fader, float time) -> void
{
  return Zynamic::Forward<void (struct snd_fader_t*, float)>(L"SND_FaderSetRateTime")(fader, time);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto SND_FaderSetValue(struct snd_fader_t* fader, float v) -> void
{
  return Zynamic::Forward<void (struct snd_fader_t*, float)>(L"SND_FaderSetValue")(fader, v);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto SND_FaderSetGoal(struct snd_fader_t* fader, float g) -> void
{
  return Zynamic::Forward<void (struct snd_fader_t*, float)>(L"SND_FaderSetGoal")(fader, g);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto SND_FaderUpdate(struct snd_fader_t* fader, float dt) -> void
{
  return Zynamic::Forward<void (struct snd_fader_t*, float)>(L"SND_FaderUpdate")(fader, dt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto scoped_performance_error::test(const char* __formal) -> void
{
  return Zynamic::Forward<public void (const char*)>(L"scoped_performance_error::test")(__formal);
}

#endif // __UNIMPLEMENTED__
