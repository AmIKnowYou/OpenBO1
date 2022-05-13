//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto ConsumeQuat(const unsigned char** pos, short* out) -> void
{
  return Zynamic::Forward<void (const unsigned char**, short*)>(L"ConsumeQuat")(pos, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ConsumeQuat2(const unsigned char** pos, short* out) -> void
{
  return Zynamic::Forward<void (const unsigned char**, short*)>(L"ConsumeQuat2")(pos, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ReadNoteTracks(const char* name, const unsigned char** pos, struct XAnimParts* parts, function* Alloc) -> void
{
  return Zynamic::Forward<void (const char*, const unsigned char**, struct XAnimParts*, function *)>(L"ReadNoteTracks")(name, pos, parts, Alloc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDeltaQuaternions(struct XAnimDeltaPart* deltaPart, function* Alloc, const unsigned char* pos, unsigned short numloopframes, bool useSmallIndices) -> const unsigned char*
{
  return Zynamic::Forward<const unsigned char* (struct XAnimDeltaPart*, function *, const unsigned char*, unsigned short, bool)>(L"GetDeltaQuaternions")(deltaPart, Alloc, pos, numloopframes, useSmallIndices);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LoadTrans(function* Alloc, const unsigned char* pos, unsigned short numTransIndices, struct XAnimPartTrans* trans) -> const unsigned char*
{
  return Zynamic::Forward<const unsigned char* (function *, const unsigned char*, unsigned short, struct XAnimPartTrans*)>(L"LoadTrans")(Alloc, pos, numTransIndices, trans);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDeltaTranslations(const char* name, struct XAnimDeltaPart* deltaPart, function* Alloc, const unsigned char* pos, unsigned short numloopframes, bool useSmallIndices) -> const unsigned char*
{
  return Zynamic::Forward<const unsigned char* (const char*, struct XAnimDeltaPart*, function *, const unsigned char*, unsigned short, bool)>(L"GetDeltaTranslations")(name, deltaPart, Alloc, pos, numloopframes, useSmallIndices);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimTempAlloc(int size) -> void*
{
  return Zynamic::Forward<void* (int)>(L"XAnimTempAlloc")(size);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetQuaternions(struct XAnimPartQuatPtr* part, const unsigned char* pos, bool bFlipQuat, bool bSimpleQuat, unsigned short numloopframes, bool useSmallIndices) -> const unsigned char*
{
  return Zynamic::Forward<const unsigned char* (struct XAnimPartQuatPtr*, const unsigned char*, bool, bool, unsigned short, bool)>(L"GetQuaternions")(part, pos, bFlipQuat, bSimpleQuat, numloopframes, useSmallIndices);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTranslations(struct XAnimPartTransPtr* part, const unsigned char* pos, unsigned short numloopframes, bool useSmallIndices) -> const unsigned char*
{
  return Zynamic::Forward<const unsigned char* (struct XAnimPartTransPtr*, const unsigned char*, unsigned short, bool)>(L"GetTranslations")(part, pos, numloopframes, useSmallIndices);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetPartQuatType(unsigned int animPartIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int)>(L"XAnimGetPartQuatType")(animPartIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimGetPartTransType(unsigned int animPartIndex) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int)>(L"XAnimGetPartTransType")(animPartIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCompareQuatParts(const void* p0, const void* p1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"XAnimCompareQuatParts")(p0, p1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimCompareTransParts(const void* p0, const void* p1) -> int
{
  return Zynamic::Forward<int (const void*, const void*)>(L"XAnimCompareTransParts")(p0, p1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimIsHighPrecisionPart(const char* name) -> int
{
  return Zynamic::Forward<int (const char*)>(L"XAnimIsHighPrecisionPart")(name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimEmitFrameIndices(unsigned int tableSize, unsigned char** dataByte, short** dataShort, union XAnimIndices* indices, union XAnimDynamicIndices* frameIndices, bool useSmallIndices) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned char**, short**, union XAnimIndices*, union XAnimDynamicIndices*, bool)>(L"XAnimEmitFrameIndices")(tableSize, dataByte, dataShort, indices, frameIndices, useSmallIndices);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XAnimLoadFile(const char* name, function* Alloc, bool streamedVersion) -> struct XAnimParts*
{
  return Zynamic::Forward<struct XAnimParts* (const char*, function *, bool)>(L"XAnimLoadFile")(name, Alloc, streamedVersion);
}

#endif // __UNIMPLEMENTED__
