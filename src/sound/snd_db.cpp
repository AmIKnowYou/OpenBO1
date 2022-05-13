//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SND_ParseInit(unsigned int groupCount, const struct snd_group* groups, unsigned int curveCount, const struct snd_curve* curves, unsigned int panCount, const struct snd_pan* pans, unsigned int snapshotGroupCount, const struct snd_snapshot_group* snapshotGroups) -> void
{
  return Zynamic::Forward<void (unsigned int, const struct snd_group*, unsigned int, const struct snd_curve*, unsigned int, const struct snd_pan*, unsigned int, const struct snd_snapshot_group*)>(L"SND_ParseInit")(groupCount, groups, curveCount, curves, panCount, pans, snapshotGroupCount, snapshotGroups);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_AliasGetFileName(const struct snd_alias_t* alias, char* filename, int size) -> void
{
  return Zynamic::Forward<void (const struct snd_alias_t*, char*, int)>(L"SND_AliasGetFileName")(alias, filename, size);
}

#endif // __UNIMPLEMENTED__
