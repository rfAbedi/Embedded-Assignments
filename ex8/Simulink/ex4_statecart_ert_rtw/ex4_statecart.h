/*
 * File: ex4_statecart.h
 *
 * Code generated for Simulink model 'ex4_statecart'.
 *
 * Model version                  : 1.21
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Jan  4 21:08:40 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef ex4_statecart_h_
#define ex4_statecart_h_
#ifndef ex4_statecart_COMMON_INCLUDES_
#define ex4_statecart_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* ex4_statecart_COMMON_INCLUDES_ */

#include "ex4_statecart_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c1_ex4_statecart;  /* '<Root>/Chart1' */
  uint8_T is_c1_ex4_statecart;         /* '<Root>/Chart1' */
  uint8_T is_Mode;                     /* '<Root>/Chart1' */
  uint8_T is_Vol;                      /* '<Root>/Chart1' */
} DW_ex4_statecart_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T dec;                          /* '<Root>/dec' */
  real_T inc;                          /* '<Root>/inc' */
  real_T t_on;                         /* '<Root>/t_on' */
  real_T t_off;                        /* '<Root>/t_off' */
  real_T stop;                         /* '<Root>/stop' */
  real_T start;                        /* '<Root>/start' */
} ExtU_ex4_statecart_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T vol1;                         /* '<Root>/vol1' */
  real_T vol2;                         /* '<Root>/vol2' */
  real_T off;                          /* '<Root>/off' */
  real_T on;                           /* '<Root>/on' */
  real_T shut;                         /* '<Root>/shut' */
} ExtY_ex4_statecart_T;

/* Real-time Model Data Structure */
struct tag_RTM_ex4_statecart_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_ex4_statecart_T ex4_statecart_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_ex4_statecart_T ex4_statecart_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ex4_statecart_T ex4_statecart_Y;

/* Model entry point functions */
extern void ex4_statecart_initialize(void);
extern void ex4_statecart_step(void);
extern void ex4_statecart_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ex4_statecart_T *const ex4_statecart_M;

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
 * '<Root>' : 'ex4_statecart'
 * '<S1>'   : 'ex4_statecart/Chart1'
 */
#endif                                 /* ex4_statecart_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
