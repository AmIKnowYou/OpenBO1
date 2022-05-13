//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto GetOperand(struct OperandStack* dataStack, struct Operand* data) -> bool
{
  return Zynamic::Forward<bool (struct OperandStack*, struct Operand*)>(L"GetOperand")(dataStack, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTwoOperands(struct OperandStack* dataStack, struct Operand* data1, struct Operand* data2) -> bool
{
  return Zynamic::Forward<bool (struct OperandStack*, struct Operand*, struct Operand*)>(L"GetTwoOperands")(dataStack, data1, data2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetOperandList(struct OperandStack* dataStack, struct OperandList* list) -> bool
{
  return Zynamic::Forward<bool (struct OperandStack*, struct OperandList*)>(L"GetOperandList")(dataStack, list);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddOperandToStack(struct OperandStack* dataStack, struct Operand* data) -> void
{
  return Zynamic::Forward<void (struct OperandStack*, struct Operand*)>(L"AddOperandToStack")(dataStack, data);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetOperandValueInt(struct Operand* source) -> int
{
  return Zynamic::Forward<int (struct Operand*)>(L"GetOperandValueInt")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSourceString(struct Operand operand) -> const char*
{
  return Zynamic::Forward<const char* (struct Operand)>(L"GetSourceString")(operand);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CopyTempString(const char* string) -> const char*
{
  return Zynamic::Forward<const char* (const char*)>(L"CopyTempString")(string);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSourceFloat(struct Operand* source) -> float
{
  return Zynamic::Forward<float (struct Operand*)>(L"GetSourceFloat")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSourceInt(struct Operand* source) -> int
{
  return Zynamic::Forward<int (struct Operand*)>(L"GetSourceInt")(source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNameForValueType(enum expDataType valType) -> const char*
{
  return Zynamic::Forward<const char* (enum expDataType)>(L"GetNameForValueType")(valType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDvarValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDvarValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDvarStringValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDvarStringValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDvarBoolValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDvarBoolValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDvarIntValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDvarIntValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDvarFloatValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDvarFloatValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLocalVar(int localClientNum, struct Operand* source) -> const struct UILocalVar*
{
  return Zynamic::Forward<const struct UILocalVar* (int, struct Operand*)>(L"GetLocalVar")(localClientNum, source);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLocalVarStringValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetLocalVarStringValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLocalVarBoolValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetLocalVarBoolValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLocalVarIntValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetLocalVarIntValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLocalVarFloatValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetLocalVarFloatValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSinValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetSinValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCosValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCosValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetMilliseconds(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetMilliseconds")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPlayerField(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetPlayerField")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFieldForTeam(const int localClientNum, enum team_t team, struct Operand* fieldName, struct Operand* result) -> void
{
  return Zynamic::Forward<void (const int, enum team_t, struct Operand*, struct Operand*)>(L"GetFieldForTeam")(localClientNum, team, fieldName, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetOtherTeamField(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetOtherTeamField")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTeamField(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetTeamField")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTeamMarinesField(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetTeamMarinesField")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTeamOpForField(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetTeamOpForField")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetUIActive(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetUIActive")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsViewportLarge(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsViewportLarge")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFlashbanged(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFlashbanged")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetScoped(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetScoped")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InKillcam(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"InKillcam")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsDualWield(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsDualWield")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsFuelWeapon(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsFuelWeapon")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPartyMissingMapPack(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetPartyMissingMapPack")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPartyMissingMapPackError(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetPartyMissingMapPackError")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsSelectingLocationalKillstreak(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsSelectingLocationalKillstreak")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto isInGuidedMissile(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"isInGuidedMissile")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsInGame(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsInGame")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsSelectingAirstrike(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsSelectingAirstrike")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsSelectingArtillery(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsSelectingArtillery")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsSelectingNapalm(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsSelectingNapalm")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsSelectingMortar(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsSelectingMortar")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsSelectingComlink(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsSelectingComlink")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetScoreboardVisible(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetScoreboardVisible")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetIsIntermission(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetIsIntermission")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetIsSuperUser(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetIsSuperUser")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetIsAutoJoinDevUser(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetIsAutoJoinDevUser")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSelectingLocation(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetSelectingLocation")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShowZombieMap(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"ShowZombieMap")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrivatePartyHostInLobby(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"PrivatePartyHostInLobby")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AloneInPrivateParty(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"AloneInPrivateParty")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AloneInPrivatePartyIgnoreSplitscreen(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"AloneInPrivatePartyIgnoreSplitscreen")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AloneInLobby(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"AloneInLobby")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AloneInLobbyIgnoreSplitscreen(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"AloneInLobbyIgnoreSplitscreen")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GameHost(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GameHost")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InLobby(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"InLobby")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InPrivateParty(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"InPrivateParty")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsVisibilityBitSet(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsVisibilityBitSet")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrivatePartyHost(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"PrivatePartyHost")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Splitscreen(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"Splitscreen")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SplitscreenHost(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"SplitscreenHost")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SplitscreenNum(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"SplitscreenNum")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsCinematicFinished(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsCinematicFinished")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsItemLocked(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsItemLocked")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsItemLockedForAll(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsItemLockedForAll")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentClanTagFeature(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentClanTagFeature")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsClanTagFeatureLocked(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsClanTagFeatureLocked")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetClanTagFeatureCost(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetClanTagFeatureCost")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetClanTagFeatureName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetClanTagFeatureName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsClanTagFeaturePurchased(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsClanTagFeaturePurchased")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetClanTagFeaturePlevel(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetClanTagFeaturePlevel")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsItemDualWieldLocked(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsItemDualWieldLocked")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsItemDualWieldPurchased(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsItemDualWieldPurchased")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsItemNew(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsItemNew")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsItemGroupNew(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsItemGroupNew")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetAttachmentsFormatted(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetAttachmentsFormatted")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetAttachmentName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetAttachmentName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetAttachmentImage(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetAttachmentImage")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetAttachmentDesc(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetAttachmentDesc")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsAttachmentAllowedOnItemIndex(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsAttachmentAllowedOnItemIndex")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFaceCamoIndex(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFaceCamoIndex")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetWeaponOptionImage(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetWeaponOptionImage")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetWeaponOptionName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetWeaponOptionName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetWeaponOptionGroupIndex(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetWeaponOptionGroupIndex")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPooledFileDetails(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetPooledFileDetails")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CanRateFilmInTheater(const int locaClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"CanRateFilmInTheater")(locaClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDemoFileID(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDemoFileID")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFileShareRating(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFileShareRating")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFileShareTotalVotes(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFileShareTotalVotes")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetAutoJoinLobbyStatus(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetAutoJoinLobbyStatus")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCounterTotal(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCounterTotal")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDownloadProgress(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDownloadProgress")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetUploadProgress(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetUploadProgress")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsPremiumSubscriber(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsPremiumSubscriber")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLocalizedTimeRemaining(int secondsRemaining) -> const char*
{
  return Zynamic::Forward<const char* (int)>(L"GetLocalizedTimeRemaining")(secondsRemaining);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetUploadTimeRemaining(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetUploadTimeRemaining")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ShowBusyDotsIndicator(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"ShowBusyDotsIndicator")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetOptionFromIndexAndGroupDvar(int index) -> enum eWeaponOptionGroup
{
  return Zynamic::Forward<enum eWeaponOptionGroup (int)>(L"GetOptionFromIndexAndGroupDvar")(index);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HostMigrationWaitingForPlayers(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"HostMigrationWaitingForPlayers")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentItemOption(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentItemOption")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetWeaponOptionCost(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetWeaponOptionCost")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetWeaponOptionUnlockLvl(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetWeaponOptionUnlockLvl")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetWeaponOptionUnlockPLevel(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetWeaponOptionUnlockPLevel")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemRef(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemRef")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemImage(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemImage")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemUnlockLevel(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemUnlockLevel")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemUnlockPLevel(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemUnlockPLevel")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemCost(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemCost")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemDualWieldCost(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemDualWieldCost")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemSellPrice(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemSellPrice")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemCount(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemCount")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemGroup(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemGroup")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemDesc(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemDesc")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemIndex(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemIndex")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemDualWieldIndex(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemDualWieldIndex")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemDualWieldBaseIndex(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemDualWieldBaseIndex")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDefaultClassSlot(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDefaultClassSlot")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemAttachment(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemAttachment")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentItemMultiText(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentItemMultiText")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCollectiblesCount(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCollectiblesCount")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNumLives(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetNumLives")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PlayersAlive(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"PlayersAlive")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPlayerStatByName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetPlayerStatByName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLowestLocalCP(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetLowestLocalCP")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsWagerServer(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsWagerServer")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetContextHeight(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetContextHeight")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetKeyBinding(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetKeyBinding")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetActionSlotUsable(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetActionSlotUsable")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetHudFade(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetHudFade")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsMenuOpen(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsMenuOpen")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WritingData(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"WritingData")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LogicalNot(const int localClientNum, struct Operand* source, struct Operand* result) -> void
{
  return Zynamic::Forward<void (const int, struct Operand*, struct Operand*)>(L"LogicalNot")(localClientNum, source, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BitwiseNot(const int localClientNum, struct Operand* source, struct Operand* result) -> void
{
  return Zynamic::Forward<void (const int, struct Operand*, struct Operand*)>(L"BitwiseNot")(localClientNum, source, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BitShiftLeft(const int localClientNum, struct Operand* source, struct Operand* bitsSource, struct Operand* result) -> void
{
  return Zynamic::Forward<void (const int, struct Operand*, struct Operand*, struct Operand*)>(L"BitShiftLeft")(localClientNum, source, bitsSource, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BitShiftRight(const int localClientNum, struct Operand* source, struct Operand* bitsSource, struct Operand* result) -> void
{
  return Zynamic::Forward<void (const int, struct Operand*, struct Operand*, struct Operand*)>(L"BitShiftRight")(localClientNum, source, bitsSource, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetAdsJavelin(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetAdsJavelin")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetWeapLockBlink(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetWeapLockBlink")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetWeapAttackTop(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetWeapAttackTop")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetWeapAttackDirect(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetWeapAttackDirect")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ToUpper(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"ToUpper")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPlaylistName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetPlaylistName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SecondsAsTimeDisplay(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"SecondsAsTimeDisplay")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SecondsAsCountdownDisplay(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"SecondsAsCountdownDisplay")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTimeLeft(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetTimeLeft")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetGameTime(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetGameTime")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetBombTime(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetBombTime")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetGametypeObjective(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetGametypeObjective")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPlaylistMaxPartySize(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetPlaylistMaxPartySize")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetGametypeName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetGametypeName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetGametypeInternal(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetGametypeInternal")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetScore(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetScore")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetGameMessageWindowActive(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetGameMessageWindowActive")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetOnlineFriendCount(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"UI_GetOnlineFriendCount")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UI_GetInvitesCount(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"UI_GetInvitesCount")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFollowing(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFollowing")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CanSpecCycle(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"CanSpecCycle")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CanSpecFree(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"CanSpecFree")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetClientInPlace(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetClientInPlace")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPlaceWithTiesForScore(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetPlaceWithTiesForScore")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemLayerName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemLayerName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemLayerState(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemLayerState")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemLayerCanOutline(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemLayerCanOutline")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemLayerCanDuplicate(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemLayerCanDuplicate")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemSelectedLayer(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemSelectedLayer")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemLayerCost(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemLayerCost")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemLayerUnlockLevel(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemLayerUnlockLevel")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemIconName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemIconName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemIconUnlockDesc(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemIconUnlockDesc")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemIconCost(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemIconCost")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemIconState(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemIconState")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemPurchasedLayerCount(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemPurchasedLayerCount")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemIsModified(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemIsModified")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemBackgroundCount(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemBackgroundCount")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemBackgroundIsLocked(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemBackgroundIsLocked")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemBackgroundIsClassified(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemBackgroundIsClassified")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemBackgroundIsPurchased(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemBackgroundIsPurchased")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemBackgroundMaterial(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemBackgroundMaterial")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemPlayerBackgroundMaterial(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemPlayerBackgroundMaterial")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemSelectedBackground(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemSelectedBackground")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemBackgroundName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemBackgroundName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemBackgroundUnlockDesc(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemBackgroundUnlockDesc")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemStateDisplay(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemStateDisplay")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemCategoryDisplay(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemCategoryDisplay")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemFilterCount(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemFilterCount")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemFilterIconID(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemFilterIconID")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EmblemBackgroundCost(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"EmblemBackgroundCost")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GridMove(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GridMove")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetClientName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetClientName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ToOrdinal(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"ToOrdinal")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetScoreForClient(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetScoreForClient")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsDemoPlaying(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsDemoPlaying")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsDemoClipRecording(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsDemoClipRecording")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsDemoClipPlaying(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsDemoClipPlaying")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsDemoMovieRendering(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsDemoMovieRendering")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsDemoThirdPersonCamera(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsDemoThirdPersonCamera")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsDemoMovieCamera(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsDemoMovieCamera")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsDisplayingPartyScoreboard(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsDisplayingPartyScoreboard")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDemoTitleName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDemoTitleName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDemoTitleDescription(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDemoTitleDescription")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDemoAuthor(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDemoAuthor")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDemoTimeInfo(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDemoTimeInfo")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDemoDuration(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDemoDuration")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDemoSegmentCount(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDemoSegmentCount")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDemoSegmentInformation(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDemoSegmentInformation")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsClipModified(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsClipModified")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CanStartDemoPlayback(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"CanStartDemoPlayback")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDemoSaveScreenName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDemoSaveScreenName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDemoSaveScreenDescription(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDemoSaveScreenDescription")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTheaterFilmNotSelectedMessage(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetTheaterFilmNotSelectedMessage")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsCurrentSortedItemEquipped(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsCurrentSortedItemEquipped")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNumSortedItemsEquipped(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetNumSortedItemsEquipped")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsCurrentItemEquippedInAnyCustomClass(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsCurrentItemEquippedInAnyCustomClass")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsItemEquipped(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsItemEquipped")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsCurrentItemPurchased(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsCurrentItemPurchased")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsProItemVersionUnlocked(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsProItemVersionUnlocked")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsProItemVersion(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsProItemVersion")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetProItemVersionCost(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetProItemVersionCost")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsItemPurchased(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsItemPurchased")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsItemAttachmentPointPurchased(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsItemAttachmentPointPurchased")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsCurrentItemAttachmentPurchased(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsCurrentItemAttachmentPurchased")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsCurrentItemOptionPurchased(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsCurrentItemOptionPurchased")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemOptionByName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemOptionByName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsItemOptionPurchasedByName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsItemOptionPurchasedByName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemHasDualWield(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"ItemHasDualWield")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ItemIsDualWield(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"ItemIsDualWield")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentItemCost(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentItemCost")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentItemSellPrice(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentItemSellPrice")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsCurrentItemClassified(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsCurrentItemClassified")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentItemClassifiedHintText(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentItemClassifiedHintText")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentItemAttachmentCost(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentItemAttachmentCost")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentItemName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentItemName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentItemIndex(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentItemIndex")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentItemAttachmentName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentItemAttachmentName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentItemAttachmentDesc(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentItemAttachmentDesc")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentItemAttachmentNum(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentItemAttachmentNum")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentItemAttachmentPoint(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentItemAttachmentPoint")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentItemNumAttachments(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentItemNumAttachments")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemNumAttachmentsEquipped(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemNumAttachmentsEquipped")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemEquippedAttachment(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemEquippedAttachment")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNumItemAttachmentsWithAttachPoint(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetNumItemAttachmentsWithAttachPoint")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PlaylistPlayerCount(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"PlaylistPlayerCount")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CategoryPlayerCountForPlaylist(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"CategoryPlayerCountForPlaylist")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TotalPlayersInPlaylists(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"TotalPlayersInPlaylists")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPlayersRegisteredOnline(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetPlayersRegisteredOnline")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetUserTagFromIndex(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetUserTagFromIndex")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CanShowContentFromUser(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"CanShowContentFromUser")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetUserFileRating(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetUserFileRating")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CanRenderClip(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"CanRenderClip")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFileShareFilterList(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFileShareFilterList")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLiveGroupCount(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetLiveGroupCount")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetBaseLbMenuName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetBaseLbMenuName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLeaderboardMinReqText(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetLeaderboardMinReqText")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentMapName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentMapName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HowManyReadiesNeeded(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"HowManyReadiesNeeded")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsExtraCamActive(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsExtraCamActive")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentWeapon(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentWeapon")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetClanRank(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetClanRank")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsPlayerJoinable(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsPlayerJoinable")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsPlayerInvitable(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsPlayerInvitable")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsRecommendedPlayerInvitable(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsRecommendedPlayerInvitable")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsExtraCamStatic(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsExtraCamStatic")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFlagCarrierForTeam(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFlagCarrierForTeam")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFlagStatusForTeam(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFlagStatusForTeam")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HasTacticalMaskOverlay(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"HasTacticalMaskOverlay")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InVehicle(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"InVehicle")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNumActiveContracts(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetNumActiveContracts")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentContractIndex(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentContractIndex")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetContractName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetContractName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetContractDesc(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetContractDesc")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetContractProgress(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetContractProgress")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetContractRequiredCount(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetContractRequiredCount")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetContractCost(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetContractCost")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTimeUntilNewContracts(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetTimeUntilNewContracts")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsContractActive(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsContractActive")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsContractInProgress(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsContractInProgress")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsContractExpired(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsContractExpired")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsContractComplete(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsContractComplete")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsContractLocked(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsContractLocked")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTimesContractPurchased(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetTimesContractPurchased")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTimesContractPurchasable(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetTimesContractPurchasable")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetContractCooldownTime(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetContractCooldownTime")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetRemainingContractCooldownTime(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetRemainingContractCooldownTime")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetContractUnlockLevel(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetContractUnlockLevel")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetContractRewardText(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetContractRewardText")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetContractExpirationType(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetContractExpirationType")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsTaskInProgress(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsTaskInProgress")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetContractExpirationData(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetContractExpirationData")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetContractCombatTimeLeft(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetContractCombatTimeLeft")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetIndexForActiveContract(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetIndexForActiveContract")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetIndexForNthActiveContract(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetIndexForNthActiveContract")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetClanName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetClanName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPlayerCardTitle(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetPlayerCardTitle")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetClanTagAndName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetClanTagAndName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetXUID(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetXUID")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSellText(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetSellText")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetItemPrice(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetItemPrice")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSelfGamertag(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetSelfGamertag")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetRankByXUID_Internal(const int controllerIndex, unsigned __int64 xuid) -> int
{
  return Zynamic::Forward<int (const int, unsigned __int64)>(L"GetRankByXUID_Internal")(controllerIndex, xuid);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetRankByXUID(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetRankByXUID")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPrestigeByXUID(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetPrestigeByXUID")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCodpointsByXUID(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCodpointsByXUID")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDisplayLevelByXUID(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDisplayLevelByXUID")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetMutedStatus(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetMutedStatus")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsProfileSignedIn(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsProfileSignedIn")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsSignedIn(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsSignedIn")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsSignedInToLive(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsSignedInToLive")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AnySignedIn(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"AnySignedIn")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AnySignedInToLive(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"AnySignedInToLive")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AreStatsFetched(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"AreStatsFetched")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AreContractsFetched(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"AreContractsFetched")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsTimeSynced(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsTimeSynced")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsContentRatingAllowed(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsContentRatingAllowed")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsDemonwareFetchingDone(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsDemonwareFetchingDone")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetUIRect(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetUIRect")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSearchState(struct ddlState_t* searchState, struct OperandList* operandList, int listStartIndex) -> bool
{
  return Zynamic::Forward<bool (struct ddlState_t*, struct OperandList*, int)>(L"GetSearchState")(searchState, operandList, listStartIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDStat(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDStat")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDStatForPreviousMatch(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDStatForPreviousMatch")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsStableStatsBufferInitialized(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsStableStatsBufferInitialized")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetStatForFriendOrSelf(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetStatForFriendOrSelf")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSortedStatsForFriendOrSelf(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetSortedStatsForFriendOrSelf")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetToastPopupWidth(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetToastPopupWidth")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetToastPopupIcon(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetToastPopupIcon")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetToastPopupTitle(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetToastPopupTitle")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetToastPopupDescription(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetToastPopupDescription")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFloatAsFormattedString(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFloatAsFormattedString")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ChangeSortedStatsPivot(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"ChangeSortedStatsPivot")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CanScrollUpOrDown(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"CanScrollUpOrDown")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentScrollBarPosition(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentScrollBarPosition")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCombatRecordInfoBarWidth(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCombatRecordInfoBarWidth")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCombatRecordInfoBarText(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCombatRecordInfoBarText")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCopyClassDialogTitle(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCopyClassDialogTitle")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCopyClassConfirmationText(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCopyClassConfirmationText")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCopyCustomGametypeClassDialogTitle(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCopyCustomGametypeClassDialogTitle")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCopyCustomGametypeClassConfirmationText(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCopyCustomGametypeClassConfirmationText")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCombatRecordInfoBarTagText(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCombatRecordInfoBarTagText")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCombatRecordHistogramHeight(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCombatRecordHistogramHeight")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCombatRecordPieChartText(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCombatRecordPieChartText")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCombatRecordMinMaxScore(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCombatRecordMinMaxScore")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCombatRecordFailedContracts(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCombatRecordFailedContracts")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCombatRecordLockedString(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCombatRecordLockedString")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNumWagerMatchesPlayed(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetNumWagerMatchesPlayed")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNumWagerMatchesWon(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetNumWagerMatchesWon")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetIndexIntoMatchScoreboard(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetIndexIntoMatchScoreboard")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetScoreboardColumnHeader(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetScoreboardColumnHeader")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetWagerPlaceForMatchScoreboard(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetWagerPlaceForMatchScoreboard")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetWagerGametypeNameFromEnum(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetWagerGametypeNameFromEnum")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetAfterActionReportAwardsInfo(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetAfterActionReportAwardsInfo")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNumPersonalBests(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetNumPersonalBests")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPersonalBestName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetPersonalBestName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPersonalBestPrefix(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetPersonalBestPrefix")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPersonalBestValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetPersonalBestValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPersonalBestDelta(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetPersonalBestDelta")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNumWeaponUnlocks(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetNumWeaponUnlocks")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNumFeatureUnlocks(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetNumFeatureUnlocks")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNumStatsMilestones(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetNumStatsMilestones")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetStatsMilestoneData(enum milestoneTableColumns_t comparisonColumn1, const char* value1, enum milestoneTableColumns_t comparisonColumn2, const char* value2, enum milestoneTableColumns_t comparisonColumn3, const char* value3, enum milestoneTableColumns_t returnColumn) -> const char*
{
  return Zynamic::Forward<const char* (enum milestoneTableColumns_t, const char*, enum milestoneTableColumns_t, const char*, enum milestoneTableColumns_t, const char*, enum milestoneTableColumns_t)>(L"GetStatsMilestoneData")(comparisonColumn1, value1, comparisonColumn2, value2, comparisonColumn3, value3, returnColumn);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetStatsMilestoneValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetStatsMilestoneValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetStatsMilestoneName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetStatsMilestoneName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentIndex(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack, struct Operand* result, int* challengeNum, int* milestoneType, char* challengeType) -> bool
{
  return Zynamic::Forward<bool (const int, struct itemDef_s*, struct OperandStack*, struct Operand*, int*, int*, char*)>(L"GetCurrentIndex")(localClientNum, item, dataStack, result, challengeNum, milestoneType, challengeType);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentIndexOfHighlightedFeeder(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack, struct Operand* result, int* challengeNum, int* milestoneType, const char* name) -> bool
{
  return Zynamic::Forward<bool (const int, struct itemDef_s*, struct OperandStack*, struct Operand*, int*, int*, const char*)>(L"GetCurrentIndexOfHighlightedFeeder")(localClientNum, item, dataStack, result, challengeNum, milestoneType, name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentChallengeXpReward(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentChallengeXpReward")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsCurrentChallengeItemClassified(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsCurrentChallengeItemClassified")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetXpReward(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetXpReward")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentChallengeCpReward(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentChallengeCpReward")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCpReward(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCpReward")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCurrentChallengeProgress(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCurrentChallengeProgress")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNumChallenges(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetNumChallenges")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetChallengeProgressString(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetChallengeProgressString")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLbTypeWithButtons(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetLbTypeWithButtons")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrepareProgressDescription(int milestoneType, char* outputString, struct challengeInfo_t* challenge) -> void
{
  return Zynamic::Forward<void (int, char*, struct challengeInfo_t*)>(L"PrepareProgressDescription")(milestoneType, outputString, challenge);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsItemUnlocked(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsItemUnlocked")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsChallengeItemPurchased(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsChallengeItemPurchased")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsWeaponItemPurchased(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsWeaponItemPurchased")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsWeaponItemClassified(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsWeaponItemClassified")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsWeaponItemUnlocked(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsWeaponItemUnlocked")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetProgressString(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetProgressString")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetDescription(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetDescription")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetWeaponName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetWeaponName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetChallengeAttachmentName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetChallengeAttachmentName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetChallengeName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetChallengeName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetChallengeDescription(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetChallengeDescription")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLBFilter(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetLBFilter")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLBTypeByDuration(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetLBTypeByDuration")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetUnlockedWeaponItemIndex(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetUnlockedWeaponItemIndex")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetUnlockedFeatureItemIndex(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetUnlockedFeatureItemIndex")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTotalMatchesPlayed(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetTotalMatchesPlayed")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NeedToPerformCommunitySearch(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"NeedToPerformCommunitySearch")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsFileshareDataSummaryValid(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsFileshareDataSummaryValid")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFileshareRecentGamesCount(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFileshareRecentGamesCount")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFileshareGameType(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFileshareGameType")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFileshareGameTypeName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFileshareGameTypeName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFileshareGameMap(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFileshareGameMap")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFileshareGameMapName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFileshareGameMapName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFileshareGameDate(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFileshareGameDate")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFileshareFileName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFileshareFileName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCacFactionNameWithButtons(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCacFactionNameWithButtons")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFileshareFileSize(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFileshareFileSize")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFileshareFileId(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFileshareFileId")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetMySlotInfo(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetMySlotInfo")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetImageWidth(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetImageWidth")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTextWidth(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetTextWidth")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetTextHeight(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetTextHeight")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto HasFocus(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"HasFocus")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsVisible(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsVisible")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MenuHasFocus(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"MenuHasFocus")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFeederData(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFeederData")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetRank(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetRank")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetPrestige(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetPrestige")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetComposite(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetComposite")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsCompositeValid(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsCompositeValid")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TableLookup(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"TableLookup")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto StatsTableLookup(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"StatsTableLookup")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsClassBonusMatch(const char* tableData, const char* playerData) -> bool
{
  return Zynamic::Forward<bool (const char*, const char*)>(L"IsClassBonusMatch")(tableData, playerData);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClassBonusStatQuery(int controllerIndex, const char* statName, const char* className) -> const char*
{
  return Zynamic::Forward<const char* (int, const char*, const char*)>(L"ClassBonusStatQuery")(controllerIndex, statName, className);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FindClassBonusMatches(int localClientNum, const struct StringTable* table, int* rowMatches, const int numRows, const char* statName, const char* className, const int column, const int ignoreRow) -> int
{
  return Zynamic::Forward<int (int, const struct StringTable*, int*, const int, const char*, const char*, const int, const int)>(L"FindClassBonusMatches")(localClientNum, table, rowMatches, numRows, statName, className, column, ignoreRow);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetClassBonusInternal(int localClientNum, const struct StringTable* table, const char* className) -> int
{
  return Zynamic::Forward<int (int, const struct StringTable*, const char*)>(L"GetClassBonusInternal")(localClientNum, table, className);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetClassBonus(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetClassBonus")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCustomClassLoadoutItem(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCustomClassLoadoutItem")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCustomClassModifier(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCustomClassModifier")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCustomClassName(const int localClienTNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCustomClassName")(localClienTNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetCACItemIndex(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetCACItemIndex")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetMachineID(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetMachineID")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLocalClientNum(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetLocalClientNum")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsPrimaryLocalClient(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsPrimaryLocalClient")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsFriendFromXuid(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"IsFriendFromXuid")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CanSwitchToLobby(const int locaClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"CanSwitchToLobby")(locaClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFeederCount(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetFeederCount")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetMapIndexByName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetMapIndexByName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetGamemodeIndexByName(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetGamemodeIndexByName")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ServerSort(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"ServerSort")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ServerSortDirection(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"ServerSortDirection")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetServerCounts(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetServerCounts")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RandomIntRange(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RandomIntRange")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetSelectedEmblemLayer(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetSelectedEmblemLayer")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MinValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"MinValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MaxValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"MaxValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Select(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"Select")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Choose(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"Choose")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LocalizationError(const char* errorMessage) -> void
{
  return Zynamic::Forward<void (const char*)>(L"LocalizationError")(errorMessage);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ValidateLocalizedStringRef(const char* token, int tokenLen) -> void
{
  return Zynamic::Forward<void (const char*, int)>(L"ValidateLocalizedStringRef")(token, tokenLen);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LocalizeString(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"LocalizeString")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_FUNC_TOINT(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_FUNC_TOINT")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_FUNC_TOSTRING(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_FUNC_TOSTRING")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_FUNC_TOFLOAT(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_FUNC_TOFLOAT")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_FUNC_ISCLANOWNER(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_FUNC_ISCLANOWNER")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_NOOP(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_NOOP")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_FUNC_INVALID(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_FUNC_INVALID")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MakeStringOperandNumber(struct Operand* op) -> void
{
  return Zynamic::Forward<void (struct Operand*)>(L"MakeStringOperandNumber")(op);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_NOT(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_NOT")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_BITWISENOT(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_BITWISENOT")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_BITSHIFTLEFT(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_BITSHIFTLEFT")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_BITSHIFTRIGHT(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_BITSHIFTRIGHT")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_NEGATE(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_NEGATE")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_MULTIPLY(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_MULTIPLY")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_DIVIDE(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_DIVIDE")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_MODULUS(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_MODULUS")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_ADD(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_ADD")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_LESSTHAN(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_LESSTHAN")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_LESSTHANEQUALTO(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_LESSTHANEQUALTO")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_GREATERTHAN(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_GREATERTHAN")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_GREATERTHANEQUALTO(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_GREATERTHANEQUALTO")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_EQUALS(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_EQUALS")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_NOTEQUAL(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_NOTEQUAL")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_AND(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_AND")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_OR(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_OR")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_BITWISEAND(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_BITWISEAND")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_BITWISEOR(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_BITWISEOR")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_SUBTRACT(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_SUBTRACT")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RPN_OP_COMMA(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"RPN_OP_COMMA")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ApproxEquals(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"ApproxEquals")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetLeaderboardValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetLeaderboardValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetStatValue(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"GetStatValue")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Add64(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"Add64")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Sub64(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"Sub64")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Div64(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"Div64")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Mul64(const int localClientNum, struct itemDef_s* item, struct OperandStack* dataStack) -> void
{
  return Zynamic::Forward<void (const int, struct itemDef_s*, struct OperandStack*)>(L"Mul64")(localClientNum, item, dataStack);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Expression_GetIndexForFunction(int func) -> int
{
  return Zynamic::Forward<int (int)>(L"Expression_GetIndexForFunction")(func);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Expression_GetFunctionForOp(int op) -> int
{
  return Zynamic::Forward<int (int)>(L"Expression_GetFunctionForOp")(op);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto EvaluateExpression(const int localClientNum, struct itemDef_s* item, struct ExpressionStatement* statement, struct Operand* results, int resultCount) -> bool
{
  return Zynamic::Forward<bool (const int, struct itemDef_s*, struct ExpressionStatement*, struct Operand*, int)>(L"EvaluateExpression")(localClientNum, item, statement, results, resultCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetExpressionResultString(const int localClientNum, struct itemDef_s* item, struct ExpressionStatement* statement) -> const char*
{
  return Zynamic::Forward<const char* (const int, struct itemDef_s*, struct ExpressionStatement*)>(L"GetExpressionResultString")(localClientNum, item, statement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsExpressionTrue(const int localClientNum, struct itemDef_s* item, struct ExpressionStatement* statement) -> bool
{
  return Zynamic::Forward<bool (const int, struct itemDef_s*, struct ExpressionStatement*)>(L"IsExpressionTrue")(localClientNum, item, statement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetExpressionInt(const int localClientNum, struct itemDef_s* item, struct ExpressionStatement* statement) -> int
{
  return Zynamic::Forward<int (const int, struct itemDef_s*, struct ExpressionStatement*)>(L"GetExpressionInt")(localClientNum, item, statement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetExpressionFloat(const int localClientNum, struct itemDef_s* item, struct ExpressionStatement* statement) -> float
{
  return Zynamic::Forward<float (const int, struct itemDef_s*, struct ExpressionStatement*)>(L"GetExpressionFloat")(localClientNum, item, statement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetExpressionStringInt(const int localClientNum, struct itemDef_s* item, struct ExpressionStatement* statement, const char** outString, int* outInt) -> bool
{
  return Zynamic::Forward<bool (const int, struct itemDef_s*, struct ExpressionStatement*, const char**, int*)>(L"GetExpressionStringInt")(localClientNum, item, statement, outString, outInt);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetExpressionResultStringCompile(const int localClientNum, struct itemDef_s* item, const char** text, void* compileBuffer, int compileBufferSize) -> const char*
{
  return Zynamic::Forward<const char* (const int, struct itemDef_s*, const char**, void*, int)>(L"GetExpressionResultStringCompile")(localClientNum, item, text, compileBuffer, compileBufferSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Expression_MapIndexToFunction(int index, const char* function) -> void
{
  return Zynamic::Forward<void (int, const char*)>(L"Expression_MapIndexToFunction")(index, function);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Expression_Throttle() -> bool
{
  return Zynamic::Forward<bool ()>(L"Expression_Throttle")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Expression_Error(const char* str, ...) -> void
{
  return Zynamic::Forward<void (const char*, ...)>(L"Expression_Error")(str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Expression_Warn(const char* str, ...) -> void
{
  return Zynamic::Forward<void (const char*, ...)>(L"Expression_Warn")(str);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Expression_TraceInternal(const char* str, ...) -> void
{
  return Zynamic::Forward<void (const char*, ...)>(L"Expression_TraceInternal")(str);
}

#endif // __UNIMPLEMENTED__
