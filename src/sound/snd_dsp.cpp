//! SPDX-License-Identifier: GPL-3.0-or-later

#ifdef    __UNIMPLEMENTED__

auto SND_DspInit() -> void
{
  return Zynamic::Forward<void ()>(L"SND_DspInit")();
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspMul(unsigned int count, const float* a, const float* b, float* c) -> void
{
  return Zynamic::Forward<void (unsigned int, const float*, const float*, float*)>(L"SND_DspMul")(count, a, b, c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspScale(unsigned int count, float a, float* c) -> void
{
  return Zynamic::Forward<void (unsigned int, float, float*)>(L"SND_DspScale")(count, a, c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspScaleCache(unsigned int count, float a, float* c) -> void
{
  return Zynamic::Forward<void (unsigned int, float, float*)>(L"SND_DspScaleCache")(count, a, c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspScale(unsigned int count, float a, const float* b, float* c) -> void
{
  return Zynamic::Forward<void (unsigned int, float, const float*, float*)>(L"SND_DspScale")(count, a, b, c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspSum(unsigned int count, const float* a, float* c) -> void
{
  return Zynamic::Forward<void (unsigned int, const float*, float*)>(L"SND_DspSum")(count, a, c);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspOnePoleFilterMono(unsigned int count, float* frames, float b0, float a1, float* y1) -> void
{
  return Zynamic::Forward<void (unsigned int, float*, float, float, float*)>(L"SND_DspOnePoleFilterMono")(count, frames, b0, a1, y1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_OcclusionLpfCoef(float occlusionLevel, float occlusionRatio, float sampleRate, float* b0, float* a1) -> void
{
  return Zynamic::Forward<void (float, float, float, float*, float*)>(L"SND_OcclusionLpfCoef")(occlusionLevel, occlusionRatio, sampleRate, b0, a1);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspBiquadInPlace(const struct snd_dsp_biquad_coef* coef, struct snd_dsp_biquad_state* state, unsigned int count, float* input) -> void
{
  return Zynamic::Forward<void (const struct snd_dsp_biquad_coef*, struct snd_dsp_biquad_state*, unsigned int, float*)>(L"SND_DspBiquadInPlace")(coef, state, count, input);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspBiquadDenormal(struct snd_dsp_biquad_state* state) -> void
{
  return Zynamic::Forward<void (struct snd_dsp_biquad_state*)>(L"SND_DspBiquadDenormal")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspBiquadNanCheck(struct snd_dsp_biquad_state* state) -> void
{
  return Zynamic::Forward<void (struct snd_dsp_biquad_state*)>(L"SND_DspBiquadNanCheck")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspBiquadNormalize(float* a, float* b, struct snd_dsp_biquad_coef* coef) -> void
{
  return Zynamic::Forward<void (float*, float*, struct snd_dsp_biquad_coef*)>(L"SND_DspBiquadNormalize")(a, b, coef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspBiquadHShelve(float Fs, float db, float Fhz, float q, struct snd_dsp_biquad_coef* coef) -> void
{
  return Zynamic::Forward<void (float, float, float, float, struct snd_dsp_biquad_coef*)>(L"SND_DspBiquadHShelve")(Fs, db, Fhz, q, coef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspBiquadLShelve(float Fs, float db, float Fhz, float q, struct snd_dsp_biquad_coef* coef) -> void
{
  return Zynamic::Forward<void (float, float, float, float, struct snd_dsp_biquad_coef*)>(L"SND_DspBiquadLShelve")(Fs, db, Fhz, q, coef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspBiquadPeak(float Fs, float db, float Fhz, float q, struct snd_dsp_biquad_coef* coef) -> void
{
  return Zynamic::Forward<void (float, float, float, float, struct snd_dsp_biquad_coef*)>(L"SND_DspBiquadPeak")(Fs, db, Fhz, q, coef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspBiquadBpf(float Fs, float Fhz, float q, struct snd_dsp_biquad_coef* coef) -> void
{
  return Zynamic::Forward<void (float, float, float, struct snd_dsp_biquad_coef*)>(L"SND_DspBiquadBpf")(Fs, Fhz, q, coef);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspPolyDistortion(unsigned int count, float amount, float* frame, float* temp) -> void
{
  return Zynamic::Forward<void (unsigned int, float, float*, float*)>(L"SND_DspPolyDistortion")(count, amount, frame, temp);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspClip(unsigned int count, float* c, float minimum, float maximum) -> void
{
  return Zynamic::Forward<void (unsigned int, float*, float, float)>(L"SND_DspClip")(count, c, minimum, maximum);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspDecayConstant(float time, float dt, float targetAmplitude) -> float
{
  return Zynamic::Forward<float (float, float, float)>(L"SND_DspDecayConstant")(time, dt, targetAmplitude);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspSquelch(const struct snd_dsp_squelch_param* param, struct snd_dsp_squelch_state* state, float frameRate, unsigned int frameCount, float* input) -> void
{
  return Zynamic::Forward<void (const struct snd_dsp_squelch_param*, struct snd_dsp_squelch_state*, float, unsigned int, float*)>(L"SND_DspSquelch")(param, state, frameRate, frameCount, input);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspFutzMono(const struct snd_dsp_futz_param* param, struct snd_dsp_futz_state* state, float rate, unsigned int count, float* input, float* tempa, float* tempb) -> void
{
  return Zynamic::Forward<void (const struct snd_dsp_futz_param*, struct snd_dsp_futz_state*, float, unsigned int, float*, float*, float*)>(L"SND_DspFutzMono")(param, state, rate, count, input, tempa, tempb);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspInterleave(unsigned int channel_count, unsigned int frame_count, const float* in, float* out) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int, const float*, float*)>(L"SND_DspInterleave")(channel_count, frame_count, in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspUninterleave(unsigned int channel_count, unsigned int frame_count, const float* in, float* out) -> void
{
  return Zynamic::Forward<void (unsigned int, unsigned int, const float*, float*)>(L"SND_DspUninterleave")(channel_count, frame_count, in, out);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspLog(float m) -> float
{
  return Zynamic::Forward<float (float)>(L"SND_DspLog")(m);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspExp(float x) -> float
{
  return Zynamic::Forward<float (float)>(L"SND_DspExp")(x);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspDynamoDenormal(struct snd_dsp_dynamo_state* state) -> void
{
  return Zynamic::Forward<void (struct snd_dsp_dynamo_state*)>(L"SND_DspDynamoDenormal")(state);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspDynamo(unsigned int frameCount, float sampleRate, float TH, float R, float TA, float TR, struct snd_dsp_dynamo_state* state, float* input, float* gain) -> void
{
  return Zynamic::Forward<void (unsigned int, float, float, float, float, float, struct snd_dsp_dynamo_state*, float*, float*)>(L"SND_DspDynamo")(frameCount, sampleRate, TH, R, TA, TR, state, input, gain);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspFxSourceMono(const struct snd_dsp_source_params* params, struct snd_dsp_source_state* state, unsigned int frameCount, float* frames, float* tempa, float* tempb) -> void
{
  return Zynamic::Forward<void (const struct snd_dsp_source_params*, struct snd_dsp_source_state*, unsigned int, float*, float*, float*)>(L"SND_DspFxSourceMono")(params, state, frameCount, frames, tempa, tempb);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspFxMasterNoVoiceSingleChannel(unsigned int frameCount, float frameRate, float* frames, struct snd_dsp_master_no_voice_params* params, struct snd_dsp_master_no_voice_state* state, struct snd_dsp_meters* meters) -> void
{
  return Zynamic::Forward<void (unsigned int, float, float*, struct snd_dsp_master_no_voice_params*, struct snd_dsp_master_no_voice_state*, struct snd_dsp_meters*)>(L"SND_DspFxMasterNoVoiceSingleChannel")(frameCount, frameRate, frames, params, state, meters);
}

#endif // __UNIMPLEMENTED__
#ifdef    __UNIMPLEMENTED__

auto SND_DspFxMasterSingleChannel(unsigned int frameCount, float frameRate, float* frames, struct snd_dsp_master_params* params, struct snd_dsp_master_state* state, struct snd_dsp_meters* meters) -> void
{
  return Zynamic::Forward<void (unsigned int, float, float*, struct snd_dsp_master_params*, struct snd_dsp_master_state*, struct snd_dsp_meters*)>(L"SND_DspFxMasterSingleChannel")(frameCount, frameRate, frames, params, state, meters);
}

#endif // __UNIMPLEMENTED__
