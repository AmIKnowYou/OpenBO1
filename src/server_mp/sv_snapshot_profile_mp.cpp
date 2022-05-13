//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto MSG_PacketAnalyze_SetPacketEntityType(struct SnapshotInfo_s* snapInfo, enum PacketEntityType packetEntityType, bool archived) -> void
{
  return Zynamic::Forward<void (struct SnapshotInfo_s*, enum PacketEntityType, bool)>(L"MSG_PacketAnalyze_SetPacketEntityType")(snapInfo, packetEntityType, archived);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_GetEntityTypeString(const int packetEntityType) -> const char*
{
  return Zynamic::Forward<const char* (const int)>(L"SV_GetEntityTypeString")(packetEntityType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PacketAnalyze_TrackSnapshotSize(const int size) -> void
{
  return Zynamic::Forward<void (const int)>(L"SV_PacketAnalyze_TrackSnapshotSize")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PacketAnalyze_TrackPacketCompression(const int clientNum, const int originalSize, const int compressedSize) -> void
{
  return Zynamic::Forward<void (const int, const int, const int)>(L"SV_PacketAnalyze_TrackPacketCompression")(clientNum, originalSize, compressedSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PacketAnalyze_TrackETypeBytes(int eType, int number, int bits, bool archived, const struct NetFieldList* fieldList) -> void
{
  return Zynamic::Forward<void (int, int, int, bool, const struct NetFieldList*)>(L"SV_PacketAnalyze_TrackETypeBytes")(eType, number, bits, archived, fieldList);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PacketAnalyze_TrackPS_ClearBits(int bits) -> void
{
  return Zynamic::Forward<void (int)>(L"SV_PacketAnalyze_TrackPS_ClearBits")(bits);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PacketAnalyze_TrackPS_FieldDeltasBits(int bits, bool isDemoPlayerState) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"SV_PacketAnalyze_TrackPS_FieldDeltasBits")(bits, isDemoPlayerState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PacketAnalyze_TrackPS_HudelemBits(int bits, bool isDemoPlayerState) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"SV_PacketAnalyze_TrackPS_HudelemBits")(bits, isDemoPlayerState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PacketAnalyze_TrackPS_StatsBits(int bits, bool isDemoPlayerState) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"SV_PacketAnalyze_TrackPS_StatsBits")(bits, isDemoPlayerState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PacketAnalyze_TrackPS_WeaponBits(int bits, bool isDemoPlayerState) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"SV_PacketAnalyze_TrackPS_WeaponBits")(bits, isDemoPlayerState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PacketAnalyze_TrackPS_AmmoPoolBits(int bits, bool isDemoPlayerState) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"SV_PacketAnalyze_TrackPS_AmmoPoolBits")(bits, isDemoPlayerState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PacketAnalyze_TrackPS_AmmoClipBits(int bits, bool isDemoPlayerState) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"SV_PacketAnalyze_TrackPS_AmmoClipBits")(bits, isDemoPlayerState);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SV_PacketAnalyze_TrackPS_ObjectivesBits(int bits, bool isDemoPlayerState) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"SV_PacketAnalyze_TrackPS_ObjectivesBits")(bits, isDemoPlayerState);
}

#endif // __UNIMPLEMENTED__
