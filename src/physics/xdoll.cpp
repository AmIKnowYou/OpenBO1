//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto XDoll_InitBody(struct XDollBody& body) -> void
{
  return Zynamic::Forward<void (struct XDollBody&)>(L"XDoll_InitBody")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_GetUnusedBody() -> int
{
  return Zynamic::Forward<int ()>(L"XDoll_GetUnusedBody")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_SnapshotBonePositions(struct XDollBody& body, struct XDollBoneOrientation* boneSnapshot) -> void
{
  return Zynamic::Forward<void (struct XDollBody&, struct XDollBoneOrientation*)>(L"XDoll_SnapshotBonePositions")(body, boneSnapshot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_DestroyConstraint(struct XDoll_ConstraintInfo& cinfo) -> void
{
  return Zynamic::Forward<void (struct XDoll_ConstraintInfo&)>(L"XDoll_DestroyConstraint")(cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_CreateHingeConstraint(class rigid_body* rb1, class rigid_body* rb2, const class phys_vec3& b1_anchor_loc, const class phys_vec3& b1_hinge_axis_loc, const class phys_vec3& b1_ref_axis_loc, float damp, float lowStop, float highStop) -> class rigid_body_constraint_hinge*
{
  return Zynamic::Forward<class rigid_body_constraint_hinge* (class rigid_body*, class rigid_body*, const class phys_vec3&, const class phys_vec3&, const class phys_vec3&, float, float, float)>(L"XDoll_CreateHingeConstraint")(rb1, rb2, b1_anchor_loc, b1_hinge_axis_loc, b1_ref_axis_loc, damp, lowStop, highStop);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_CreatePointConstraint(class rigid_body* rb1, class rigid_body* rb2, const class phys_vec3& b1_anchor_loc) -> class rigid_body_constraint_point*
{
  return Zynamic::Forward<class rigid_body_constraint_point* (class rigid_body*, class rigid_body*, const class phys_vec3&)>(L"XDoll_CreatePointConstraint")(rb1, rb2, b1_anchor_loc);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_CreateActuatorConstraint(class rigid_body* rb1, class rigid_body* rb2, float power) -> class rigid_body_constraint_angular_actuator*
{
  return Zynamic::Forward<class rigid_body_constraint_angular_actuator* (class rigid_body*, class rigid_body*, float)>(L"XDoll_CreateActuatorConstraint")(rb1, rb2, power);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_IsXDollConstraint(enum ConstraintType type) -> bool
{
  return Zynamic::Forward<bool (enum ConstraintType)>(L"XDoll_IsXDollConstraint")(type);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_Activate(const struct PhysConstraints& constraintsDef, int health) -> bool
{
  return Zynamic::Forward<bool (const struct PhysConstraints&, int)>(L"XDoll_Activate")(constraintsDef, health);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_SetCollides(struct XDollBone& bone, bool collides) -> void
{
  return Zynamic::Forward<void (struct XDollBone&, bool)>(L"XDoll_SetCollides")(bone, collides);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_SetCollides(struct XDollBody& body, bool collides) -> void
{
  return Zynamic::Forward<void (struct XDollBody&, bool)>(L"XDoll_SetCollides")(body, collides);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_SetCollides(int xdoll_handle, bool collides) -> void
{
  return Zynamic::Forward<void (int, bool)>(L"XDoll_SetCollides")(xdoll_handle, collides);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_GetStableTime(int xdoll_handle) -> int
{
  return Zynamic::Forward<int (int)>(L"XDoll_GetStableTime")(xdoll_handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_CreatePhysObj(struct XDollBody& body, struct XDollBone& bone, struct XModel* model, const struct cpose_t& pose, struct PhysPreset* physPreset, bool collide) -> bool
{
  return Zynamic::Forward<bool (struct XDollBody&, struct XDollBone&, struct XModel*, const struct cpose_t&, struct PhysPreset*, bool)>(L"XDoll_CreatePhysObj")(body, bone, model, pose, physPreset, collide);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_UpdateTimers(struct XDollBody& body, int msec) -> void
{
  return Zynamic::Forward<void (struct XDollBody&, int)>(L"XDoll_UpdateTimers")(body, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_UpdateStability(struct XDollBody& body, int msec) -> void
{
  return Zynamic::Forward<void (struct XDollBody&, int)>(L"XDoll_UpdateStability")(body, msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_Update(int msec) -> void
{
  return Zynamic::Forward<void (int)>(L"XDoll_Update")(msec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_GetRigidBody(struct XDollBody& body, const char* bone_name) -> class rigid_body*
{
  return Zynamic::Forward<class rigid_body* (struct XDollBody&, const char*)>(L"XDoll_GetRigidBody")(body, bone_name);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_CreateConstraint(struct XDollBody& body, const struct PhysConstraint& constraint, struct XDoll_ConstraintInfo& cinfo) -> void
{
  return Zynamic::Forward<void (struct XDollBody&, const struct PhysConstraint&, struct XDoll_ConstraintInfo&)>(L"XDoll_CreateConstraint")(body, constraint, cinfo);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_DestroyXDoll(int xdoll_handle) -> void
{
  return Zynamic::Forward<void (int)>(L"XDoll_DestroyXDoll")(xdoll_handle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_DestroyXDoll(struct XDollBody& body) -> void
{
  return Zynamic::Forward<void (struct XDollBody&)>(L"XDoll_DestroyXDoll")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_CreateXDollForBoneLaunch(int localClientNum, int entity_index, int piece_index, int bone_name, struct PhysPreset* physPreset) -> int
{
  return Zynamic::Forward<int (int, int, int, int, struct PhysPreset*)>(L"XDoll_CreateXDollForBoneLaunch")(localClientNum, entity_index, piece_index, bone_name, physPreset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_CreateXDollForConstraints(int localClientNum, int entity_index, int piece_index, int health, struct PhysConstraints* constraints, struct PhysPreset* physPreset) -> int
{
  return Zynamic::Forward<int (int, int, int, int, struct PhysConstraints*, struct PhysPreset*)>(L"XDoll_CreateXDollForConstraints")(localClientNum, entity_index, piece_index, health, constraints, physPreset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_UpdateHealth(int xdoll_handle, int health) -> void
{
  return Zynamic::Forward<void (int, int)>(L"XDoll_UpdateHealth")(xdoll_handle, health);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_ApplyForce(int xdoll_handle, const float* hitp, const float* hitd, const int mod) -> void
{
  return Zynamic::Forward<void (int, const float*, const float*, const int)>(L"XDoll_ApplyForce")(xdoll_handle, hitp, hitd, mod);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_HandleBody(int xdollHandle) -> struct XDollBody*
{
  return Zynamic::Forward<struct XDollBody* (int)>(L"XDoll_HandleBody")(xdollHandle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_BodyDObj(struct XDollBody& body, int localClientNum) -> struct DObj*
{
  return Zynamic::Forward<struct DObj* (struct XDollBody&, int)>(L"XDoll_BodyDObj")(body, localClientNum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_BodyBoneOrientations(struct XDollBody& body) -> struct XDollBoneOrientation*
{
  return Zynamic::Forward<struct XDollBoneOrientation* (struct XDollBody&)>(L"XDoll_BodyBoneOrientations")(body);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto XDoll_DoControllers(int xdoll_handle, int* partBits, int localClientNum) -> void
{
  return Zynamic::Forward<void (int, int*, int)>(L"XDoll_DoControllers")(xdoll_handle, partBits, localClientNum);
}

#endif // __UNIMPLEMENTED__
