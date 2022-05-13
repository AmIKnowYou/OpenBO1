//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto Path_IsValidClaimNode(const struct pathnode_t* node) -> int
{
  return Zynamic::Forward<int (const struct pathnode_t*)>(L"Path_IsValidClaimNode")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Path_IsCoverNode(const struct pathnode_t* node) -> int
{
  return Zynamic::Forward<int (const struct pathnode_t*)>(L"Path_IsCoverNode")(node);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

inline auto Path_IsPathStanceNode(const struct pathnode_t* node) -> int
{
  return Zynamic::Forward<int (const struct pathnode_t*)>(L"Path_IsPathStanceNode")(node);
}

#endif // __UNIMPLEMENTED__
