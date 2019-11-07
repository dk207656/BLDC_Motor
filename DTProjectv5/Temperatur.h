/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Temperatur.h
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

#ifndef RTW_HEADER_Temperatur_h_
#define RTW_HEADER_Temperatur_h_
#include <math.h>
#include "xmc_common.h"
#include "xmc_scu.h"
#ifndef Temperatur_COMMON_INCLUDES_
# define Temperatur_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Temperatur_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#define Temperatur_M                   (rtM_temp)

/* Forward declaration for rtModel */
typedef struct tag_RTM_temp RT_MODEL_temp;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T SpannungamNTC;                /* '<Root>/Spannung am NTC' */
  real_T Versorgungsspannung;          /* '<Root>/Versorgungsspannung' */
} ExtU_temp;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T TEMP_CELSIUS;                 /* '<Root>/TEMP_CELSIUS' */
} ExtY_temp;

/* Real-time Model Data Structure */
struct tag_RTM_temp {
  const char_T *errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_temp rtU_temp;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_temp rtY_temp;

/* Model entry point functions */
extern void Temperatur_initialize(void);
extern void Temperatur_step(void);

/* Real-time Model object */
extern RT_MODEL_temp *const rtM_temp;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Temperatur'
 * '<S1>'   : 'Temperatur/NTC-Widerstand in Temperatur umrechnen'
 * '<S2>'   : 'Temperatur/gemessene Spannung umrechnen zu Widerstand'
 */

/*-
 * Requirements for '<Root>': Temperatur
 */
#endif                                 /* RTW_HEADER_Temperatur_h_ */
