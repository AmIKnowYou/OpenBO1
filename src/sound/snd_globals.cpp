//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SND_GroupCategory(unsigned int group) -> enum snd_category_t
{
  return Zynamic::Forward<enum snd_category_t (unsigned int)>(L"SND_GroupCategory")(group);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GroupGetAttenuation(unsigned int group) -> float
{
  return Zynamic::Forward<float (unsigned int)>(L"SND_GroupGetAttenuation")(group);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetGroupCount() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"SND_GetGroupCount")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetGroupByIndex(unsigned int index) -> const struct snd_group*
{
  return Zynamic::Forward<const struct snd_group* (unsigned int)>(L"SND_GetGroupByIndex")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetMaster(unsigned int id) -> const struct snd_master*
{
  return Zynamic::Forward<const struct snd_master* (unsigned int)>(L"SND_GetMaster")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetMasterByConfig(unsigned int i) -> const struct snd_master*
{
  return Zynamic::Forward<const struct snd_master* (unsigned int)>(L"SND_GetMasterByConfig")(i);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetMasterCurrent() -> const struct snd_master*
{
  return Zynamic::Forward<const struct snd_master* ()>(L"SND_GetMasterCurrent")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetCurveById(unsigned int id) -> const struct snd_curve*
{
  return Zynamic::Forward<const struct snd_curve* (unsigned int)>(L"SND_GetCurveById")(id);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetCurveByIndex(unsigned int i) -> const struct snd_curve*
{
  return Zynamic::Forward<const struct snd_curve* (unsigned int)>(L"SND_GetCurveByIndex")(i);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetPanByIndex(int i) -> const struct snd_pan*
{
  return Zynamic::Forward<const struct snd_pan* (int)>(L"SND_GetPanByIndex")(i);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindContextIndex(unsigned int type) -> int
{
  return Zynamic::Forward<int (unsigned int)>(L"SND_FindContextIndex")(type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_FindContextValueIndex(unsigned int type, unsigned int value) -> int
{
  return Zynamic::Forward<int (unsigned int, unsigned int)>(L"SND_FindContextValueIndex")(type, value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_CurveEval(const struct snd_curve* curve, float x) -> float
{
  return Zynamic::Forward<float (const struct snd_curve*, float)>(L"Snd_CurveEval")(curve, x);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Snd_CurveEvalOverRange(const struct snd_curve* curve, float x, float minimum, float maximum) -> float
{
  return Zynamic::Forward<float (const struct snd_curve*, float, float, float)>(L"Snd_CurveEvalOverRange")(curve, x, minimum, maximum);
}

#endif // __UNIMPLEMENTED__
