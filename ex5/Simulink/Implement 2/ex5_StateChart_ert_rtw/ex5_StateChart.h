/*
 * File: ex5_StateChart.h
 *
 * Code generated for Simulink model 'ex5_StateChart'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Fri Dec 13 17:19:18 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef ex5_StateChart_h_
#define ex5_StateChart_h_
#ifndef ex5_StateChart_COMMON_INCLUDES_
#define ex5_StateChart_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ex5_StateChart_COMMON_INCLUDES_ */

#include "ex5_StateChart_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T fast_mode;                    /* '<Root>/ControllerChart' */
  real_T servo_pw;                     /* '<Root>/ControllerChart' */
  real_T servo_dir;                    /* '<Root>/ControllerChart' */
  real_T DC_MAX_RPM;                   /* '<Root>/ControllerChart' */
  uint8_T is_active_c3_ex5_StateChart; /* '<Root>/ControllerChart' */
  uint8_T is_Servo_Motor;              /* '<Root>/ControllerChart' */
} DW_ex5_StateChart_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Inport;                       /* '<Root>/Inport' */
  real_T Inport1;                      /* '<Root>/Inport1' */
  real_T Inport2;                      /* '<Root>/Inport2' */
} ExtU_ex5_StateChart_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
  real_T Output1;                      /* '<Root>/Output1' */
} ExtY_ex5_StateChart_T;

/* Real-time Model Data Structure */
struct tag_RTM_ex5_StateChart_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_ex5_StateChart_T ex5_StateChart_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_ex5_StateChart_T ex5_StateChart_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ex5_StateChart_T ex5_StateChart_Y;

/* Model entry point functions */
extern void ex5_StateChart_initialize(void);
extern void ex5_StateChart_step(void);
extern void ex5_StateChart_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ex5_StateChart_T *const ex5_StateChart_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant2' : Unused code path elimination
 * Block '<Root>/Constant3' : Unused code path elimination
 */

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
 * '<Root>' : 'ex5_StateChart'
 * '<S1>'   : 'ex5_StateChart/CelsiusScaler Subsystem'
 * '<S2>'   : 'ex5_StateChart/ControllerChart'
 */
#endif                                 /* ex5_StateChart_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
