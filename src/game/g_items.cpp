//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto Fill_Clip(struct playerState_s* ps, unsigned int weapon) -> void
{
  return Zynamic::Forward<void (struct playerState_s*, unsigned int)>(L"Fill_Clip")(ps, weapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Add_Ammo(struct gentity_s* ent, unsigned int weaponIndex, unsigned char weaponModel, int count, int fillClip) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, unsigned int, unsigned char, int, int)>(L"Add_Ammo")(ent, weaponIndex, weaponModel, count, fillClip);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CurrentPrimaryWeapon(struct playerState_s* ps) -> int
{
  return Zynamic::Forward<int (struct playerState_s*)>(L"CurrentPrimaryWeapon")(ps);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_ItemClipMask(struct gentity_s* ent) -> int
{
  return Zynamic::Forward<int (struct gentity_s*)>(L"G_ItemClipMask")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WeaponPickup_AddWeapon(struct gentity_s* ent, struct gentity_s* other, int weapon, unsigned char weaponModel, struct gentity_s** pDroppedWeapon) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*, int, unsigned char, struct gentity_s**)>(L"WeaponPickup_AddWeapon")(ent, other, weapon, weaponModel, pDroppedWeapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrintPlayerPickupMessage(struct gentity_s* player, int weapIdx) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, int)>(L"PrintPlayerPickupMessage")(player, weapIdx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WeaponPickup_LeechFromWeaponEnt(struct gentity_s* weaponEnt, struct gentity_s* player, int haveExactWeapon, int* pickupEvent, bool suppressNotifies) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, struct gentity_s*, int, int*, bool)>(L"WeaponPickup_LeechFromWeaponEnt")(weaponEnt, player, haveExactWeapon, pickupEvent, suppressNotifies);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WeaponPickup_AddAmmoForNewWeapon(struct gentity_s* weaponEnt, struct gentity_s* player) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*)>(L"WeaponPickup_AddAmmoForNewWeapon")(weaponEnt, player);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WeaponPickup_Notifies(struct gentity_s* thisItem, struct gentity_s* newDroppedItem, struct gentity_s* player, const struct WeaponDef* weapDef, bool pickedUp) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, struct gentity_s*, const struct WeaponDef*, bool)>(L"WeaponPickup_Notifies")(thisItem, newDroppedItem, player, weapDef, pickedUp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WeaponPickup_Grab(struct gentity_s* weaponEnt, struct gentity_s* player, int weapIdx, int* pickupEvent) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*, int, int*)>(L"WeaponPickup_Grab")(weaponEnt, player, weapIdx, pickupEvent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WeaponPickup_Touch(struct gentity_s* weaponEnt, struct gentity_s* player, int weapIdx, int* pickupEvent) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*, int, int*)>(L"WeaponPickup_Touch")(weaponEnt, player, weapIdx, pickupEvent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto WeaponPickup(struct gentity_s* weaponEnt, struct gentity_s* player, int* pickupEvent, int touched) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*, int*, int)>(L"WeaponPickup")(weaponEnt, player, pickupEvent, touched);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Touch_Item_Auto(struct gentity_s* ent, struct gentity_s* other, int bTouched) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int)>(L"Touch_Item_Auto")(ent, other, bTouched);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PrintMessage_CannotGrabItem(struct gentity_s* ent, struct gentity_s* player, int touched, struct gitem_s* item, int weapIndex) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int, struct gitem_s*, int)>(L"PrintMessage_CannotGrabItem")(ent, player, touched, item, weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Touch_Item(struct gentity_s* ent, struct gentity_s* other, int touched) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct gentity_s*, int)>(L"Touch_Item")(ent, other, touched);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetFreeDropCueIdx() -> int
{
  return Zynamic::Forward<int ()>(L"GetFreeDropCueIdx")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DroppedItemClearOwner(struct gentity_s* pSelf) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"DroppedItemClearOwner")(pSelf);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_GetItemClassname(const struct gitem_s* item, unsigned short* out) -> void
{
  return Zynamic::Forward<void (const struct gitem_s*, unsigned short*)>(L"G_GetItemClassname")(item, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LaunchItem(const struct gitem_s* item, float* origin, float* angles, float* velocity, int ownerNum) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (const struct gitem_s*, float*, float*, float*, int)>(L"LaunchItem")(item, origin, angles, velocity, ownerNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Drop_Item(struct gentity_s* ent, const struct gitem_s* item, float angle, int novelocity) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, const struct gitem_s*, float, int)>(L"Drop_Item")(ent, item, angle, novelocity);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ThrowClientWeapon(struct gentity_s* ent, const struct gitem_s* item, float heightIncrease, float velocityIncrease) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, const struct gitem_s*, float, float)>(L"ThrowClientWeapon")(ent, item, heightIncrease, velocityIncrease);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetNonClipAmmoToTransferToWeaponEntity(struct gentity_s* player, int transferWeapon) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, int)>(L"GetNonClipAmmoToTransferToWeaponEntity")(player, transferWeapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PlayerHasAnyAmmoToTransferToWeapon(struct gentity_s* player, int transferWeapon) -> bool
{
  return Zynamic::Forward<bool (struct gentity_s*, int)>(L"PlayerHasAnyAmmoToTransferToWeapon")(player, transferWeapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TransferPlayerAmmoToWeaponEntity(struct gentity_s* player, struct gentity_s* weaponEnt, int transferWeapon) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, struct gentity_s*, int)>(L"TransferPlayerAmmoToWeaponEntity")(player, weaponEnt, transferWeapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TransferRandomAmmoToWeaponEntity(struct gentity_s* weaponEnt, int transferWeapon) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, int)>(L"TransferRandomAmmoToWeaponEntity")(weaponEnt, transferWeapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto TransferSpecifiedAmmoToWeaponEntity(struct gentity_s* weaponEnt, int transferWeapon) -> int
{
  return Zynamic::Forward<int (struct gentity_s*, int)>(L"TransferSpecifiedAmmoToWeaponEntity")(weaponEnt, transferWeapon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ThrowDownWeapon(struct gentity_s* ent, int weapIdx, unsigned char weaponModel, unsigned int tag, float throwHeight, float throwDistance) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, int, unsigned char, unsigned int, float, float)>(L"ThrowDownWeapon")(ent, weapIdx, weaponModel, tag, throwHeight, throwDistance);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Drop_Weapon(struct gentity_s* ent, int weapIdx, unsigned char weaponModel, unsigned int tag) -> struct gentity_s*
{
  return Zynamic::Forward<struct gentity_s* (struct gentity_s*, int, unsigned char, unsigned int)>(L"Drop_Weapon")(ent, weapIdx, weaponModel, tag);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FinishSpawningItem(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"FinishSpawningItem")(ent);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClearRegisteredItems() -> void
{
  return Zynamic::Forward<void ()>(L"ClearRegisteredItems")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SaveRegisteredWeapons() -> void
{
  return Zynamic::Forward<void ()>(L"SaveRegisteredWeapons")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SaveRegisteredItems() -> void
{
  return Zynamic::Forward<void ()>(L"SaveRegisteredItems")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RegisterWeapon(unsigned int weapIndex) -> void
{
  return Zynamic::Forward<void (unsigned int)>(L"G_RegisterWeapon")(weapIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsItemRegistered(int iItemIndex) -> int
{
  return Zynamic::Forward<int (int)>(L"IsItemRegistered")(iItemIndex);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_SpawnItem(struct gentity_s* ent, const struct gitem_s* item) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, const struct gitem_s*)>(L"G_SpawnItem")(ent, item);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_OrientItemToGround(struct gentity_s* ent, struct trace_t* trace) -> void
{
  return Zynamic::Forward<void (struct gentity_s*, struct trace_t*)>(L"G_OrientItemToGround")(ent, trace);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto G_RunItem(struct gentity_s* ent) -> void
{
  return Zynamic::Forward<void (struct gentity_s*)>(L"G_RunItem")(ent);
}

#endif // __UNIMPLEMENTED__
