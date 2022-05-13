//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#ifdef    __UNIMPLEMENTED__

public inline auto NitrousVehicle::set_brake(float braking) -> void
{
  return Zynamic::Forward<public void (float)>(L"NitrousVehicle::set_brake")(braking);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto NitrousVehicle::set_hand_brake(float braking) -> void
{
  return Zynamic::Forward<public void (float)>(L"NitrousVehicle::set_hand_brake")(braking);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto NitrousVehicle::set_throttle(float throttle) -> void
{
  return Zynamic::Forward<public void (float)>(L"NitrousVehicle::set_throttle")(throttle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public inline auto NitrousVehicle::update_script_target(float* goal_position) -> void
{
  return Zynamic::Forward<public void (float*)>(L"NitrousVehicle::update_script_target")(goal_position);
}

#endif // __UNIMPLEMENTED__
