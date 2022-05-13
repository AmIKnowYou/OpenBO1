//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SND_RvDelayInit(struct snd_rv_state* state, unsigned int values) -> void
{
  return Zynamic::Forward<void (struct snd_rv_state*, unsigned int)>(L"SND_RvDelayInit")(state, values);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_RvParamsDefault(struct snd_rv_params* params) -> void
{
  return Zynamic::Forward<void (struct snd_rv_params*)>(L"SND_RvParamsDefault")(params);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_RvValidateRange(float value, float min, float max) -> float
{
  return Zynamic::Forward<float (float, float, float)>(L"SND_RvValidateRange")(value, min, max);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_RvParamsValidate(struct snd_rv_params* params) -> void
{
  return Zynamic::Forward<void (struct snd_rv_params*)>(L"SND_RvParamsValidate")(params);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_RvFrameParam(struct snd_rv_params* params, struct snd_rv_state* state, unsigned int frameCount) -> void
{
  return Zynamic::Forward<void (struct snd_rv_params*, struct snd_rv_state*, unsigned int)>(L"SND_RvFrameParam")(params, state, frameCount);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_RvFrame(struct snd_rv_params* params, struct snd_rv_state* state, unsigned int count, const float* inLF, const float* inRF, const float* inLS, const float* inRS, float* outLF, float* outRF, float* outLS, float* outRS) -> void
{
  return Zynamic::Forward<void (struct snd_rv_params*, struct snd_rv_state*, unsigned int, const float*, const float*, const float*, const float*, float*, float*, float*, float*)>(L"SND_RvFrame")(params, state, count, inLF, inRF, inLS, inRS, outLF, outRF, outLS, outRS);
}

#endif // __UNIMPLEMENTED__
