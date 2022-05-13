//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto SND_IsAliasMusic(const struct snd_alias_t* alias) -> bool
{
  return Zynamic::Forward<bool (const struct snd_alias_t*)>(L"SND_IsAliasMusic")(alias);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto SND_IsAliasTimescale(const struct snd_alias_t* alias) -> bool
{
  return Zynamic::Forward<bool (const struct snd_alias_t*)>(L"SND_IsAliasTimescale")(alias);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto SND_IsAliasVoice(const struct snd_alias_t* alias) -> bool
{
  return Zynamic::Forward<bool (const struct snd_alias_t*)>(L"SND_IsAliasVoice")(alias);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto SND_IsAliasPausable(const struct snd_alias_t* alias) -> bool
{
  return Zynamic::Forward<bool (const struct snd_alias_t*)>(L"SND_IsAliasPausable")(alias);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto SND_IsAliasStopOnDeath(const struct snd_alias_t* alias) -> bool
{
  return Zynamic::Forward<bool (const struct snd_alias_t*)>(L"SND_IsAliasStopOnDeath")(alias);
}

#endif // __UNIMPLEMENTED__
