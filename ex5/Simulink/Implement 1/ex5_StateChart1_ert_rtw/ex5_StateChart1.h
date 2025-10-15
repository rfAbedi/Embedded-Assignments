/*
 * File: ex5_StateChart1.h
 *
 * Code generated for Simulink model 'ex5_StateChart1'.
 *
 * Model version                  : 1.21
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Fri Dec 13 20:31:26 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef ex5_StateChart1_h_
#define ex5_StateChart1_h_
#ifndef ex5_StateChart1_COMMON_INCLUDES_
#define ex5_StateChart1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ex5_StateChart1_COMMON_INCLUDES_ */

#include "ex5_StateChart1_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T ctr_dc;                       /* '<Root>/Chart1' */
  real_T ctr_servo;                    /* '<Root>/Chart1' */
  real_T DC_PERIOD;                    /* '<Root>/Chart1' */
  uint8_T is_active_c2_ex5_StateChart1;/* '<Root>/Chart1' */
  uint8_T is_Servo_Motor;              /* '<Root>/Chart1' */
} DW_ex5_StateChart1_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T temp_adc;                     /* '<Root>/temp_adc' */
  real_T switch_on;                    /* '<Root>/switch_on' */
} ExtU_ex5_StateChart1_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T servo_rotate;                 /* '<Root>/servo_rotate' */
  real_T dc_speed;                     /* '<Root>/dc_speed' */
} ExtY_ex5_StateChart1_T;

/* Real-time Model Data Structure */
struct tag_RTM_ex5_StateChart1_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_ex5_StateChart1_T ex5_StateChart1_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_ex5_StateChart1_T ex5_StateChart1_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ex5_StateChart1_T ex5_StateChart1_Y;

/* Model entry point functions */
extern void ex5_StateChart1_initialize(void);
extern void ex5_StateChart1_step(void);
extern void ex5_StateChart1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ex5_StateChart1_T *const ex5_StateChart1_M;

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
 * '<Root>' : 'ex5_StateChart1'
 * '<S1>'   : 'ex5_StateChart1/CelsiusScaler Subsystem'
 * '<S2>'   : 'ex5_StateChart1/Chart1'
 */
#endif                                 /* ex5_StateChart1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
