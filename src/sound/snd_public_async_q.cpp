//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SND_NextCommandIndex(unsigned int i) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int)>(L"SND_NextCommandIndex")(i);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_NextNotifyIndex(unsigned int i) -> unsigned int
{
  return Zynamic::Forward<unsigned int (unsigned int)>(L"SND_NextNotifyIndex")(i);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_InitCommands() -> void
{
  return Zynamic::Forward<void ()>(L"SND_InitCommands")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetNewCommand() -> struct snd_command*
{
  return Zynamic::Forward<struct snd_command* ()>(L"SND_GetNewCommand")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_CommandPush(struct snd_command* cmd) -> unsigned int
{
  return Zynamic::Forward<unsigned int (struct snd_command*)>(L"SND_CommandPush")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_CommandPeek() -> const struct snd_command*
{
  return Zynamic::Forward<const struct snd_command* ()>(L"SND_CommandPeek")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_CommandPop() -> void
{
  return Zynamic::Forward<void ()>(L"SND_CommandPop")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_CommandProcess(const struct snd_command* cmd) -> void
{
  return Zynamic::Forward<void (const struct snd_command*)>(L"SND_CommandProcess")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_CommandPump() -> unsigned int
{
  return Zynamic::Forward<unsigned int ()>(L"SND_CommandPump")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetNewNotify() -> struct snd_notify*
{
  return Zynamic::Forward<struct snd_notify* ()>(L"SND_GetNewNotify")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_NotifyProcess(const struct snd_notify* cmd) -> void
{
  return Zynamic::Forward<void (const struct snd_notify*)>(L"SND_NotifyProcess")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_NotifyPush(struct snd_notify* cmd) -> void
{
  return Zynamic::Forward<void (struct snd_notify*)>(L"SND_NotifyPush")(cmd);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_NotifyPeek() -> const struct snd_notify*
{
  return Zynamic::Forward<const struct snd_notify* ()>(L"SND_NotifyPeek")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_NotifyPop() -> void
{
  return Zynamic::Forward<void ()>(L"SND_NotifyPop")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_NotifyPump() -> void
{
  return Zynamic::Forward<void ()>(L"SND_NotifyPump")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_GetProcessCommandFlag() -> bool
{
  return Zynamic::Forward<bool ()>(L"SND_GetProcessCommandFlag")();
}

#endif // __UNIMPLEMENTED__
