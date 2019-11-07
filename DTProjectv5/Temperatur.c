/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Temperatur.c
 *
 * Code generated for Simulink model : Temperatur.
 * Model version      : 1.5
 * Simulink Coder version    : 8.12 (R2017a) 16-Feb-2017
 * TLC version       : 8.12 (Feb 10 2017)
 * C/C++ source code generated on  : Mon Jun 17 09:41:31 2019
 *
 * Target selection: Infineon_XMC_Family.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Temperatur.h"

/* External inputs (root inport signals with auto storage) */
ExtU_temp rtU_temp;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_temp rtY_temp;

/* Real-time model */
RT_MODEL_temp rtM_temp_;
RT_MODEL_temp *const rtM_temp = &rtM_temp_;

/* Model step function */
void Temperatur_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/NTC-Widerstand in Temperatur umrechnen' */
  /* Outputs for Atomic SubSystem: '<Root>/gemessene Spannung umrechnen zu Widerstand' */
  /* Outport: '<Root>/TEMP_CELSIUS' incorporates:
   *  Constant: '<Root>/Umrechnung Kelvin//Celsius'
   *  Constant: '<S1>/B'
   *  Constant: '<S2>/Constant1'
   *  Constant: '<S2>/Constant3'
   *  Inport: '<Root>/Spannung am NTC'
   *  Inport: '<Root>/Versorgungsspannung'
   *  Math: '<S1>/Math Function'
   *  Product: '<S1>/Divide'
   *  Product: '<S1>/Divide2'
   *  Product: '<S2>/Divide'
   *  Product: '<S2>/Product'
   *  Sum: '<Root>/Subtract'
   *  Sum: '<S2>/Subtract'
   *  Sum: '<S2>/Subtract1'
   *
   * About '<S1>/Math Function':
   *  Operator: log
   */
  rtY_temp.TEMP_CELSIUS = 3470.0 / log((10000.0 * rtU_temp.Versorgungsspannung /
    (rtU_temp.Versorgungsspannung - rtU_temp.SpannungamNTC) - 10000.0) /
    0.088204556494777056) - 273.15;

  /* End of Outputs for SubSystem: '<Root>/gemessene Spannung umrechnen zu Widerstand' */
  /* End of Outputs for SubSystem: '<Root>/NTC-Widerstand in Temperatur umrechnen' */
}

/* Model initialize function */
void Temperatur_initialize(void)
{
  /* (no initialization code required) */
}
