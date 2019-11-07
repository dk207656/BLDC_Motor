/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: lut.c
 *
 * Code generated for Simulink model : lut.
 * Model version      : 1.12
 * Simulink Coder version    : 8.12 (R2017a) 16-Feb-2017
 * TLC version       : 8.12 (Feb 10 2017)
 * C/C++ source code generated on  : Wed Jun 12 16:08:18 2019
 *
 * Target selection: Infineon_XMC_Family.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objective: Debugging
 * Validation result: Not run
 */

#include "lut.h"

/* Constant parameters (auto storage) */
const ConstP_lut rtConstP_lut = {
  /* Expression: [108,96,92,86,80,78,76,72,70,42,38,34,32,30]
   * Referenced by: '<Root>/1-D Lookup Table1'
   */
  { 108.0, 96.0, 92.0, 86.0, 84.0, 80.0, 78.0, 76.0, 74.0, 75.0, 72.0, 70.0, 42.0, 38.0, 36.0, 34.0, 32.0, 30.0 },

  /* Expression: [1.05, 1.15, 1.2, 1.3, 1.45, 1.55, 1.7, 2.1, 2.2, 2.35, 2.6, 3, 3.15, 3.25]
   * Referenced by: '<Root>/1-D Lookup Table1'
   */
  { 1.05, 1.15, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.9, 2.0,	2.1, 2.2, 2.4, 2.6, 2.8, 3.0, 3.15, 3.25}
};

/* External inputs (root inport signals with auto storage) */
ExtU_lut rtU_lut;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_lut rtY_lut;
uint32_T plook_u32d_binckan(real_T u, const real_T bp[], uint32_T maxIndex);
uint32_T binsearch_u32d(real_T u, const real_T bp[], uint32_T startIndex,
  uint32_T maxIndex);
uint32_T plook_u32d_binckan(real_T u, const real_T bp[], uint32_T maxIndex)
{
  uint32_T bpIndex;

  /* Prelookup - Index only
     Index Search method: 'binary'
     Interpolation method: 'Use nearest'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp[0U]) {
    bpIndex = 0U;
  } else if (u < bp[maxIndex]) {
    bpIndex = binsearch_u32d(u, bp, maxIndex >> 1U, maxIndex);
    if (bp[bpIndex + 1U] - u <= u - bp[bpIndex]) {
      bpIndex++;
    }
  } else {
    bpIndex = maxIndex;
  }

  return bpIndex;
}

uint32_T binsearch_u32d(real_T u, const real_T bp[], uint32_T startIndex,
  uint32_T maxIndex)
{
  uint32_T bpIndex;
  uint32_T iRght;
  uint32_T bpIdx;

  /* Binary Search */
  bpIdx = startIndex;
  bpIndex = 0U;
  iRght = maxIndex;
  while (iRght - bpIndex > 1U) {
    if (u < bp[bpIdx]) {
      iRght = bpIdx;
    } else {
      bpIndex = bpIdx;
    }

    bpIdx = (iRght + bpIndex) >> 1U;
  }

  return bpIndex;
}

/* Model step function */
void lut_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Lookup_n-D: '<Root>/1-D Lookup Table1'
   */
  rtY_lut.Out1_lut = rtConstP_lut.uDLookupTable1_tableData[plook_u32d_binckan
    (rtU_lut.In1_lut, rtConstP_lut.uDLookupTable1_bp01Data, 13U)];
}

/* Model initialize function */
void lut_initialize(void)
{
  /* (no initialization code required) */
}
