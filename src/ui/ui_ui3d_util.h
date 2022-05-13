//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

public inline auto ScopedScrPlaceViewStack::ScopedScrPlaceViewStack(struct ScreenPlacementStack* stack, const struct ScreenPlacement* newPlacement) -> void
{
  return Zynamic::Forward<public void (struct ScreenPlacementStack*, const struct ScreenPlacement*)>(L"ScopedScrPlaceViewStack::ScopedScrPlaceViewStack")(stack, newPlacement);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto ScopedScrPlaceViewStack::~ScopedScrPlaceViewStack() -> void
{
  return Zynamic::Forward<public void ()>(L"ScopedScrPlaceViewStack::~ScopedScrPlaceViewStack")();
}

#endif // __UNIMPLEMENTED__
