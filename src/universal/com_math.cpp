//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_com_math() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_com_math")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto random() -> float
{
  return Zynamic::Forward<float ()>(L"random")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto crandom() -> float
{
  return Zynamic::Forward<float ()>(L"crandom")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GaussianRandom(float* f0, float* f1) -> void
{
  return Zynamic::Forward<void (float*, float*)>(L"GaussianRandom")(f0, f1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RandWithSeed(int* seed) -> int
{
  return Zynamic::Forward<int (int*)>(L"RandWithSeed")(seed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto randomhash(int value) -> float
{
  return Zynamic::Forward<float (int)>(L"randomhash")(value);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointInCircleFromUniformDeviates(float radiusDeviate, float yawDeviate, float* point) -> void
{
  return Zynamic::Forward<void (float, float, float*)>(L"PointInCircleFromUniformDeviates")(radiusDeviate, yawDeviate, point);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LinearTrack(float tgt, float cur, float rate, float deltaTime) -> float
{
  return Zynamic::Forward<float (float, float, float, float)>(L"LinearTrack")(tgt, cur, rate, deltaTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto LinearTrackAngle(float tgt, float cur, float rate, float deltaTime) -> float
{
  return Zynamic::Forward<float (float, float, float, float)>(L"LinearTrackAngle")(tgt, cur, rate, deltaTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DiffTrack(float tgt, float cur, float rate, float deltaTime) -> float
{
  return Zynamic::Forward<float (float, float, float, float)>(L"DiffTrack")(tgt, cur, rate, deltaTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DiffTrackAngle(float tgt, float cur, float rate, float deltaTime) -> float
{
  return Zynamic::Forward<float (float, float, float, float)>(L"DiffTrackAngle")(tgt, cur, rate, deltaTime);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GraphGetValueFromFraction(const int knotCount, const float* knots[0x2], const float fraction) -> float
{
  return Zynamic::Forward<float (const int, const float*[0x2], const float)>(L"GraphGetValueFromFraction")(knotCount, knots, fraction);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Q_acos(const float c) -> float
{
  return Zynamic::Forward<float (const float)>(L"Q_acos")(c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClampChar(const int i) -> signed char
{
  return Zynamic::Forward<signed char (const int)>(L"ClampChar")(i);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClampShort(const int i) -> short
{
  return Zynamic::Forward<short (const int)>(L"ClampShort")(i);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto DirToByte(const float* dir) -> unsigned char
{
  return Zynamic::Forward<unsigned char (const float*)>(L"DirToByte")(dir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ByteToDir(const int b, float* dir) -> void
{
  return Zynamic::Forward<void (const int, float*)>(L"ByteToDir")(b, dir);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VecNCompareCustomEpsilon(const float* v0, const float* v1, float epsilon, int coordCount) -> int
{
  return Zynamic::Forward<int (const float*, const float*, float, int)>(L"VecNCompareCustomEpsilon")(v0, v1, epsilon, coordCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec3ProjectionCoords(const float* dir, int* xCoord, int* yCoord) -> void
{
  return Zynamic::Forward<void (const float*, int*, int*)>(L"Vec3ProjectionCoords")(dir, xCoord, yCoord);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RotatePointAroundVector(float* dst, const float* dir, const float* point, const float degrees) -> void
{
  return Zynamic::Forward<void (float*, const float*, const float*, const float)>(L"RotatePointAroundVector")(dst, dir, point, degrees);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Vec3Basis_RightHanded(const float* forward, float* left, float* up) -> void
{
  return Zynamic::Forward<void (const float*, float*, float*)>(L"Vec3Basis_RightHanded")(forward, left, up);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vectoyaw(const float* vec) -> float
{
  return Zynamic::Forward<float (const float*)>(L"vectoyaw")(vec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vectosignedyaw(const float* vec) -> float
{
  return Zynamic::Forward<float (const float*)>(L"vectosignedyaw")(vec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vectopitch(const float* vec) -> float
{
  return Zynamic::Forward<float (const float*)>(L"vectopitch")(vec);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto vectoangles(const float* vec, float* angles) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"vectoangles")(vec, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UnitQuatToAngles(const float* quat, float* angles) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"UnitQuatToAngles")(quat, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto YawVectors(const float yaw, float* forward, float* right) -> void
{
  return Zynamic::Forward<void (const float, float*, float*)>(L"YawVectors")(yaw, forward, right);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto YawVectors2D(const float yaw, float* forward, float* right) -> void
{
  return Zynamic::Forward<void (const float, float*, float*)>(L"YawVectors2D")(yaw, forward, right);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PerpendicularVector(const float* src, float* dst) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"PerpendicularVector")(src, dst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointToLineDistSq(const float* point, const float* start, const float* end) -> float
{
  return Zynamic::Forward<float (const float*, const float*, const float*)>(L"PointToLineDistSq")(point, start, end);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointToLineDistSq2D(const float* point, const float* start, const float* end) -> float
{
  return Zynamic::Forward<float (const float*, const float*, const float*)>(L"PointToLineDistSq2D")(point, start, end);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BoxInPlanes(const float* planes[0x4], unsigned int numPlanes, const float* mins, const float* maxs) -> int
{
  return Zynamic::Forward<int (const float*[0x4], unsigned int, const float*, const float*)>(L"BoxInPlanes")(planes, numPlanes, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SphereInPlanes(const float* planes[0x4], unsigned int numPlanes, const float* center, const float radius) -> int
{
  return Zynamic::Forward<int (const float*[0x4], unsigned int, const float*, const float)>(L"SphereInPlanes")(planes, numPlanes, center, radius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixIdentity33(float* out[0x3]) -> void
{
  return Zynamic::Forward<void (float*[0x3])>(L"MatrixIdentity33")(out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixIdentity44(float* out[0x4]) -> void
{
  return Zynamic::Forward<void (float*[0x4])>(L"MatrixIdentity44")(out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixMultiply(const float* in1[0x3], const float* in2[0x3], float* out[0x3]) -> void
{
  return Zynamic::Forward<void (const float*[0x3], const float*[0x3], float*[0x3])>(L"MatrixMultiply")(in1, in2, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixVecMultiply(const float* mulMat[0x3], const float* mulVec, float* solution) -> void
{
  return Zynamic::Forward<void (const float*[0x3], const float*, float*)>(L"MatrixVecMultiply")(mulMat, mulVec, solution);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixVecMultiply(const float* mulMat[0x4], const float* mulVec, float* solution) -> void
{
  return Zynamic::Forward<void (const float*[0x4], const float*, float*)>(L"MatrixVecMultiply")(mulMat, mulVec, solution);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixVecMultiplyProject(const float* mulMat[0x4], const float* mulVec, float* solution) -> void
{
  return Zynamic::Forward<void (const float*[0x4], const float*, float*)>(L"MatrixVecMultiplyProject")(mulMat, mulVec, solution);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixMultiplyEquals(const float* in[0x3], float* out[0x3]) -> void
{
  return Zynamic::Forward<void (const float*[0x3], float*[0x3])>(L"MatrixMultiplyEquals")(in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixMultiply43(const float* in1[0x3], const float* in2[0x3], float* out[0x3]) -> void
{
  return Zynamic::Forward<void (const float*[0x3], const float*[0x3], float*[0x3])>(L"MatrixMultiply43")(in1, in2, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixMultiply44(const float* in1[0x4], const float* in2[0x4], float* out[0x4]) -> void
{
  return Zynamic::Forward<void (const float*[0x4], const float*[0x4], float*[0x4])>(L"MatrixMultiply44")(in1, in2, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixTranspose(const float* in[0x3], float* out[0x3]) -> void
{
  return Zynamic::Forward<void (const float*[0x3], float*[0x3])>(L"MatrixTranspose")(in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixTranspose44(const float* in, float* out) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"MatrixTranspose44")(in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixInverse(const float* in[0x3], float* out[0x3]) -> void
{
  return Zynamic::Forward<void (const float*[0x3], float*[0x3])>(L"MatrixInverse")(in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixInverseOrthogonal43(const float* in[0x3], float* out[0x3]) -> void
{
  return Zynamic::Forward<void (const float*[0x3], float*[0x3])>(L"MatrixInverseOrthogonal43")(in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixInverse44(const float* mat, float* dst) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"MatrixInverse44")(mat, dst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixTransformVector44(const float* vec, const float* mat[0x4], float* out) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x4], float*)>(L"MatrixTransformVector44")(vec, mat, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixTransformVector43(const float* in1, const float* in2[0x3], float* out) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x3], float*)>(L"MatrixTransformVector43")(in1, in2, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixTransposeTransformVector43(const float* in1, const float* in2[0x3], float* out) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x3], float*)>(L"MatrixTransposeTransformVector43")(in1, in2, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixTransformVector43Equals(float* out, const float* in) -> void
{
  return Zynamic::Forward<void (float*, const float*)>(L"MatrixTransformVector43Equals")(out, in);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto VectorAngleMultiply(float* vec, float angle) -> void
{
  return Zynamic::Forward<void (float*, float)>(L"VectorAngleMultiply")(vec, angle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UnitQuatToAxis(const float* quat, float* axis[0x3]) -> void
{
  return Zynamic::Forward<void (const float*, float*[0x3])>(L"UnitQuatToAxis")(quat, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto UnitQuatToForward(const float* quat, float* forward) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"UnitQuatToForward")(quat, forward);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto QuatSlerp(const float* from, const float* to, float frac, float* result) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float, float*)>(L"QuatSlerp")(from, to, frac, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RotationToYaw(const float* rot) -> float
{
  return Zynamic::Forward<float (const float*)>(L"RotationToYaw")(rot);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixRotationZ(float* mat[0x3], float degree) -> void
{
  return Zynamic::Forward<void (float*[0x3], float)>(L"MatrixRotationZ")(mat, degree);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto FinitePerspectiveMatrix(float tanHalfFovX, float tanHalfFovY, float zNear, float zFar, float* mtx[0x4]) -> void
{
  return Zynamic::Forward<void (float, float, float, float, float*[0x4])>(L"FinitePerspectiveMatrix")(tanHalfFovX, tanHalfFovY, zNear, zFar, mtx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpotLightViewMatrix(const float* direction, float rotation, float* mtx[0x4]) -> void
{
  return Zynamic::Forward<void (const float*, float, float*[0x4])>(L"SpotLightViewMatrix")(direction, rotation, mtx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpotLightViewMatrixDir3(const float* dirx, const float* diry, const float* dirz, float* mtx[0x4]) -> void
{
  return Zynamic::Forward<void (const float*, const float*, const float*, float*[0x4])>(L"SpotLightViewMatrixDir3")(dirx, diry, dirz, mtx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SpotLightProjectionMatrix(float cosFov, float zNear, float zFar, float* mtx[0x4]) -> void
{
  return Zynamic::Forward<void (float, float, float, float*[0x4])>(L"SpotLightProjectionMatrix")(cosFov, zNear, zFar, mtx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto InfinitePerspectiveMatrix(float tanHalfFovX, float tanHalfFovY, float zNear, float* mtx[0x4]) -> void
{
  return Zynamic::Forward<void (float, float, float, float*[0x4])>(L"InfinitePerspectiveMatrix")(tanHalfFovX, tanHalfFovY, zNear, mtx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto MatrixForViewer(const float* origin, const float* axis[0x3], float* mtx[0x4]) -> void
{
  return Zynamic::Forward<void (const float*, const float*[0x3], float*[0x4])>(L"MatrixForViewer")(origin, axis, mtx);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AnglesSubtract(const float* v1, const float* v2, float* v3) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"AnglesSubtract")(v1, v2, v3);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AngleNormalize360(const float angle) -> float
{
  return Zynamic::Forward<float (const float)>(L"AngleNormalize360")(angle);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AngleDelta(const float angle1, const float angle2) -> float
{
  return Zynamic::Forward<float (const float, const float)>(L"AngleDelta")(angle1, angle2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RadiusFromBounds(const float* mins, const float* maxs) -> float
{
  return Zynamic::Forward<float (const float*, const float*)>(L"RadiusFromBounds")(mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RadiusFromBounds2D(const float* mins, const float* maxs) -> float
{
  return Zynamic::Forward<float (const float*, const float*)>(L"RadiusFromBounds2D")(mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RadiusFromBoundsSq(const float* mins, const float* maxs) -> float
{
  return Zynamic::Forward<float (const float*, const float*)>(L"RadiusFromBoundsSq")(mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RadiusFromBounds2DSq(const float* mins, const float* maxs) -> float
{
  return Zynamic::Forward<float (const float*, const float*)>(L"RadiusFromBounds2DSq")(mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ExtendBounds(float* mins, float* maxs, const float* offset) -> void
{
  return Zynamic::Forward<void (float*, float*, const float*)>(L"ExtendBounds")(mins, maxs, offset);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ExpandBoundsToWidth(float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (float*, float*)>(L"ExpandBoundsToWidth")(mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClearBounds(float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (float*, float*)>(L"ClearBounds")(mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsClearedBounds(const float* mins, const float* maxs) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*)>(L"IsClearedBounds")(mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ClearBounds2D(float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (float*, float*)>(L"ClearBounds2D")(mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddPointToBounds(const float* v, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (const float*, float*, float*)>(L"AddPointToBounds")(v, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AddPointToBounds2D(const float* v, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (const float*, float*, float*)>(L"AddPointToBounds2D")(v, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointInBounds(const float* v, const float* mins, const float* maxs) -> int
{
  return Zynamic::Forward<int (const float*, const float*, const float*)>(L"PointInBounds")(v, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PointInBounds2D(const float* v, const float* mins, const float* maxs) -> int
{
  return Zynamic::Forward<int (const float*, const float*, const float*)>(L"PointInBounds2D")(v, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BoundsOverlap(const float* mins0, const float* maxs0, const float* mins1, const float* maxs1) -> int
{
  return Zynamic::Forward<int (const float*, const float*, const float*, const float*)>(L"BoundsOverlap")(mins0, maxs0, mins1, maxs1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ExpandBounds(const float* addedmins, const float* addedmaxs, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*, float*)>(L"ExpandBounds")(addedmins, addedmaxs, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ExpandBounds2D(const float* addedmins, const float* addedmaxs, float* mins, float* maxs) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*, float*)>(L"ExpandBounds2D")(addedmins, addedmaxs, mins, maxs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto GetRotatedBounds(const float* baseBounds[0x3], const float* origin, const float* axis[0x3], float* rotatedBounds[0x3]) -> void
{
  return Zynamic::Forward<void (const float*[0x3], const float*, const float*[0x3], float*[0x3])>(L"GetRotatedBounds")(baseBounds, origin, axis, rotatedBounds);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AxisClear(float* axis[0x3]) -> void
{
  return Zynamic::Forward<void (float*[0x3])>(L"AxisClear")(axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AxisTranspose(const float* in[0x3], float* out[0x3]) -> void
{
  return Zynamic::Forward<void (const float*[0x3], float*[0x3])>(L"AxisTranspose")(in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AxisTransformVec3(const float* axes[0x3], const float* vec, float* out) -> void
{
  return Zynamic::Forward<void (const float*[0x3], const float*, float*)>(L"AxisTransformVec3")(axes, vec, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto YawToAxis(float yaw, float* axis[0x3]) -> void
{
  return Zynamic::Forward<void (float, float*[0x3])>(L"YawToAxis")(yaw, axis);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AxisToAngles(const float* axis[0x3], float* angles) -> void
{
  return Zynamic::Forward<void (const float*[0x3], float*)>(L"AxisToAngles")(axis, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Axis4ToAngles(const float* axis[0x4], float* angles) -> void
{
  return Zynamic::Forward<void (const float*[0x4], float*)>(L"Axis4ToAngles")(axis, angles);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IntersectPlanes(const float** plane, float* xyz) -> int
{
  return Zynamic::Forward<int (const float**, float*)>(L"IntersectPlanes")(plane, xyz);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SnapPointToIntersectingPlanes(const float** planes, float* xyz, float snapGrid, float snapEpsilon) -> void
{
  return Zynamic::Forward<void (const float**, float*, float, float)>(L"SnapPointToIntersectingPlanes")(planes, xyz, snapGrid, snapEpsilon);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ProjectedWindingContainsCoplanarPoint(const float* verts[0x3], int vertCount, int x, int y, const float* point) -> int
{
  return Zynamic::Forward<int (const float*[0x3], int, int, int, const float*)>(L"ProjectedWindingContainsCoplanarPoint")(verts, vertCount, x, y, point);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PlaneFromPoints(float* plane, const float* v0, const float* v1, const float* v2) -> int
{
  return Zynamic::Forward<int (float*, const float*, const float*, const float*)>(L"PlaneFromPoints")(plane, v0, v1, v2);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ProjectPointOnPlane(const float* p, const float* normal, float* dst) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"ProjectPointOnPlane")(p, normal, dst);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SetPlaneSignbits(struct cplane_s* out) -> void
{
  return Zynamic::Forward<void (struct cplane_s*)>(L"SetPlaneSignbits")(out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BoxOnPlaneSide(const float* emins, const float* emaxs, const struct cplane_s* p) -> int
{
  return Zynamic::Forward<int (const float*, const float*, const struct cplane_s*)>(L"BoxOnPlaneSide")(emins, emaxs, p);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto IsPosInsideArc(const float* pos, float posRadius, const float* arcOrigin, float arcRadius, float arcAngle0, float arcAngle1, float arcHalfHeight) -> int
{
  return Zynamic::Forward<int (const float*, float, const float*, float, float, float, float)>(L"IsPosInsideArc")(pos, posRadius, arcOrigin, arcRadius, arcAngle0, arcAngle1, arcHalfHeight);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto BoxDistSqrdExceeds(const float* absmin, const float* absmax, const float* org, const float fogOpaqueDistSqrd) -> int
{
  return Zynamic::Forward<int (const float*, const float*, const float*, const float)>(L"BoxDistSqrdExceeds")(absmin, absmax, org, fogOpaqueDistSqrd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Q_rint(const float in) -> float
{
  return Zynamic::Forward<float (const float)>(L"Q_rint")(in);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ColorNormalize(const float* in, float* out) -> float
{
  return Zynamic::Forward<float (const float*, float*)>(L"ColorNormalize")(in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto ColorSRGBtoLinear(const float* in, float* out) -> void
{
  return Zynamic::Forward<void (const float*, float*)>(L"ColorSRGBtoLinear")(in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto PitchForYawOnNormal(const float fYaw, const float* normal) -> float
{
  return Zynamic::Forward<float (const float, const float*)>(L"PitchForYawOnNormal")(fYaw, normal);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto NearestPitchAndYawOnPlane(const float* angles, const float* normal, float* result) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float*)>(L"NearestPitchAndYawOnPlane")(angles, normal, result);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto Rand_Init(int seed) -> void
{
  return Zynamic::Forward<void (int)>(L"Rand_Init")(seed);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto flrand(float min, float max) -> float
{
  return Zynamic::Forward<float (float, float)>(L"flrand")(min, max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto irand(int min, int max) -> int
{
  return Zynamic::Forward<int (int, int)>(L"irand")(min, max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto AxisToQuat(const float* mat[0x3], float* out) -> void
{
  return Zynamic::Forward<void (const float*[0x3], float*)>(L"AxisToQuat")(mat, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto QuatLerp(const float* qa, const float* qb, float frac, float* out) -> void
{
  return Zynamic::Forward<void (const float*, const float*, float, float*)>(L"QuatLerp")(qa, qb, frac, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CullBoxFromCone(const float* coneOrg, const float* coneDir, float cosHalfFov, const float* boxCenter, const float* boxHalfSize) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, float, const float*, const float*)>(L"CullBoxFromCone")(coneOrg, coneDir, cosHalfFov, boxCenter, boxHalfSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CullBoxFromSphere(const float* sphereOrg, float radius, const float* boxCenter, const float* boxHalfSize) -> bool
{
  return Zynamic::Forward<bool (const float*, float, const float*, const float*)>(L"CullBoxFromSphere")(sphereOrg, radius, boxCenter, boxHalfSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CullBoxFromConicSectionOfSphere(const float* coneOrg, const float* coneDir, float cosHalfFov, float radius, const float* boxCenter, const float* boxHalfSize) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, float, float, const float*, const float*)>(L"CullBoxFromConicSectionOfSphere")(coneOrg, coneDir, cosHalfFov, radius, boxCenter, boxHalfSize);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto CullSphereFromCone(const float* coneOrg, const float* coneDir, float cosHalfFov, const float* sphereCenter, float radius) -> bool
{
  return Zynamic::Forward<bool (const float*, const float*, float, const float*, float)>(L"CullSphereFromCone")(coneOrg, coneDir, cosHalfFov, sphereCenter, radius);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto colorTempToXYZ(float colorTemp, float* XYZ) -> void
{
  return Zynamic::Forward<void (float, float*)>(L"colorTempToXYZ")(colorTemp, XYZ);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto colorTempMatrix(float* finalMatrix[0x4], float colorTemp) -> void
{
  return Zynamic::Forward<void (float*[0x4], float)>(L"colorTempMatrix")(finalMatrix, colorTemp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto colorHueMatrix(float* finalMatrix[0x4], float hue) -> void
{
  return Zynamic::Forward<void (float*[0x4], float)>(L"colorHueMatrix")(finalMatrix, hue);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto colorSaturationMatrix(float* finalMatrix[0x4], float saturation) -> void
{
  return Zynamic::Forward<void (float*[0x4], float)>(L"colorSaturationMatrix")(finalMatrix, saturation);
}

#endif // __UNIMPLEMENTED__
