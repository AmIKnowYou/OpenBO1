//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto TRACK_rb_stats() -> void
{
  return Zynamic::Forward<void ()>(L"TRACK_rb_stats")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto R_TrackPrims(struct GfxCmdBufPrimState* state, enum GfxPrimStatsTarget target) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*, enum GfxPrimStatsTarget)>(L"R_TrackPrims")(state, target);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_TrackImmediatePrims(struct GfxCmdBufPrimState* state, enum GfxPrimStatsTarget target) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*, enum GfxPrimStatsTarget)>(L"RB_TrackImmediatePrims")(state, target);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_EndTrackImmediatePrims(struct GfxCmdBufPrimState* state) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*)>(L"RB_EndTrackImmediatePrims")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_TrackDrawPrimCall(struct GfxCmdBufPrimState* state, int triCount) -> void
{
  return Zynamic::Forward<void (struct GfxCmdBufPrimState*, int)>(L"RB_TrackDrawPrimCall")(state, triCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Stats_TotalIndexCount(const struct GfxFrameStats* frameStats) -> int
{
  return Zynamic::Forward<int (const struct GfxFrameStats*)>(L"RB_Stats_TotalIndexCount")(frameStats);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Stats_TotalVertexCount(const struct GfxFrameStats* frameStats) -> int
{
  return Zynamic::Forward<int (const struct GfxFrameStats*)>(L"RB_Stats_TotalVertexCount")(frameStats);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Stats_TotalPrimCount(const struct GfxFrameStats* frameStats) -> int
{
  return Zynamic::Forward<int (const struct GfxFrameStats*)>(L"RB_Stats_TotalPrimCount")(frameStats);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Stats_ViewIndexCount(const struct GfxViewStats* viewStats) -> int
{
  return Zynamic::Forward<int (const struct GfxViewStats*)>(L"RB_Stats_ViewIndexCount")(viewStats);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Stats_AccumulatePrimStats(const struct GfxPrimStats* primStats, struct GfxPrimStats* total) -> void
{
  return Zynamic::Forward<void (const struct GfxPrimStats*, struct GfxPrimStats*)>(L"RB_Stats_AccumulatePrimStats")(primStats, total);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Stats_SummarizePrimStats(const char* label, const struct GfxPrimStats* primStats) -> void
{
  return Zynamic::Forward<void (const char*, const struct GfxPrimStats*)>(L"RB_Stats_SummarizePrimStats")(label, primStats);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Stats_Summarize(const char* label, const struct GfxViewStats* viewStats) -> void
{
  return Zynamic::Forward<void (const char*, const struct GfxViewStats*)>(L"RB_Stats_Summarize")(label, viewStats);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Stats_Display(const struct GfxFrameStats* frameStats) -> void
{
  return Zynamic::Forward<void (const struct GfxFrameStats*)>(L"RB_Stats_Display")(frameStats);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Stats_f() -> void
{
  return Zynamic::Forward<void ()>(L"RB_Stats_f")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_Stats_UpdateMaxs(const struct GfxFrameStats* frameStatsCur, struct GfxFrameStats* frameStatsMax) -> void
{
  return Zynamic::Forward<void (const struct GfxFrameStats*, struct GfxFrameStats*)>(L"RB_Stats_UpdateMaxs")(frameStatsCur, frameStatsMax);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto RB_DrawPrimHistogramOverlay() -> void
{
  return Zynamic::Forward<void ()>(L"RB_DrawPrimHistogramOverlay")();
}

#endif // __UNIMPLEMENTED__
