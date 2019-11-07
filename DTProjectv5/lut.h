/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: lut.h
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

#ifndef RTW_HEADER_lut_h_
#define RTW_HEADER_lut_h_
#include "xmc_common.h"
#include "xmc_scu.h"
#ifndef lut_COMMON_INCLUDES_
# define lut_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* lut_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* Constant parameters (auto storage) */
typedef struct {
  /* Expression: [108,96,92,86,80,78,76,72,70,42,38,34,32,30]
   * Referenced by: '<Root>/1-D Lookup Table1'
   */
  real_T uDLookupTable1_tableData[20];

  /* Expression: [1.05, 1.15, 1.2, 1.3, 1.45, 1.55, 1.7, 2.1, 2.2, 2.35, 2.6, 3, 3.15, 3.25]
   * Referenced by: '<Root>/1-D Lookup Table1'
   */
  real_T uDLookupTable1_bp01Data[20];
} ConstP_lut;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In1_lut;                      /* '<Root>/In1' */
} ExtU_lut;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1_lut;                     /* '<Root>/Out1' */
} ExtY_lut;

/* External inputs (root inport signals with auto storage) */
extern ExtU_lut rtU_lut;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_lut rtY_lut;

/* Constant parameters (auto storage) */
extern const ConstP_lut rtConstP_lut;

/* Model entry point functions */
extern void lut_initialize(void);
extern void lut_step(void);

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
 * '<Root>' : 'lut'
 */

/*-
 * Requirements for '<Root>': lut
 */
#endif                                 /* RTW_HEADER_lut_h_ */
