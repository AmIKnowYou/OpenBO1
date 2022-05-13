//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

public auto dwQoSMultiProbeListener::dwQoSMultiProbeListener() -> void
{
  return Zynamic::Forward<public void ()>(L"dwQoSMultiProbeListener::dwQoSMultiProbeListener")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dwQoSMultiProbeListener::addProbe(const class bdQoSRemoteAddr addr) -> void
{
  return Zynamic::Forward<public void (const class bdQoSRemoteAddr)>(L"dwQoSMultiProbeListener::addProbe")(addr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dwQoSMultiProbeListener::onQoSProbeSuccess(const class bdQoSProbeInfo& info) -> void
{
  return Zynamic::Forward<public void (const class bdQoSProbeInfo&)>(L"dwQoSMultiProbeListener::onQoSProbeSuccess")(info);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dwQoSMultiProbeListener::onQoSProbeFail(class bdReference<bdCommonAddr> addr) -> void
{
  return Zynamic::Forward<public void (class bdReference<bdCommonAddr>)>(L"dwQoSMultiProbeListener::onQoSProbeFail")(addr);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dwQoSMultiProbeListener::clean() -> void
{
  return Zynamic::Forward<public void ()>(L"dwQoSMultiProbeListener::clean")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

public auto dwQoSMultiProbeListener::complete() -> enum taskCompleteResults
{
  return Zynamic::Forward<public enum taskCompleteResults ()>(L"dwQoSMultiProbeListener::complete")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwStartQoSProbes(class dwQoSMultiProbeListener* listener, const unsigned int numProbes, class bdQoSRemoteAddr* serverAddrs) -> void
{
  return Zynamic::Forward<void (class dwQoSMultiProbeListener*, const unsigned int, class bdQoSRemoteAddr*)>(L"dwStartQoSProbes")(listener, numProbes, serverAddrs);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto dwClearQoSProbes() -> void
{
  return Zynamic::Forward<void ()>(L"dwClearQoSProbes")();
}

#endif // __UNIMPLEMENTED__
