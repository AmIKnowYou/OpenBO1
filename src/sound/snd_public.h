//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

inline auto SND_EntHandle(int localClientNum, int entIndex, int useCount, bool isInKillCam, bool isStationary, enum team_t team) -> union SndEntHandle
{
  return Zynamic::Forward<union SndEntHandle (int, int, int, bool, bool, enum team_t)>(L"SND_EntHandle")(localClientNum, entIndex, useCount, isInKillCam, isStationary, team);
}

#endif // __UNIMPLEMENTED__
