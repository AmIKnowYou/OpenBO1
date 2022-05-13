//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Material_FromHandle(struct Material* handle) -> const struct Material*
{
  return Zynamic::Forward<const struct Material* (struct Material*)>(L"Material_FromHandle")(handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Material_GetTechniqueSet(const struct Material* material) -> struct MaterialTechniqueSet*
{
  return Zynamic::Forward<struct MaterialTechniqueSet* (const struct Material*)>(L"Material_GetTechniqueSet")(material);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Material_GetTechnique(const struct Material* material, unsigned char techType) -> const struct MaterialTechnique*
{
  return Zynamic::Forward<const struct MaterialTechnique* (const struct Material*, unsigned char)>(L"Material_GetTechnique")(material, techType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Material_HasAnyFogableTechnique(const struct Material* material) -> bool
{
  return Zynamic::Forward<bool (const struct Material*)>(L"Material_HasAnyFogableTechnique")(material);
}

#endif // __UNIMPLEMENTED__
