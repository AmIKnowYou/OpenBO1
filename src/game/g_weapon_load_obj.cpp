//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto G_ParseAIWeaponAccurayGraphFile(const char* buffer, const char* fileName, float* knots[0x2], int* knotCount) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*, float*[0x2], int*)>(L"G_ParseAIWeaponAccurayGraphFile")(buffer, fileName, knots, knotCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ParseWeaponAccurayGraphInternal(struct WeaponDef* weaponDef, const char* dirName, const char* graphName, float* knots[0x2], int* knotCount) -> bool
{
  return Zynamic::Forward<bool (struct WeaponDef*, const char*, const char*, float*[0x2], int*)>(L"G_ParseWeaponAccurayGraphInternal")(weaponDef, dirName, graphName, knots, knotCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ParseWeaponAccurayGraphs(struct WeaponDef* weaponDef) -> bool
{
  return Zynamic::Forward<bool (struct WeaponDef*)>(L"G_ParseWeaponAccurayGraphs")(weaponDef);
}

#endif // __UNIMPLEMENTED__
