/*
 * File: ex5_StateChart1.c
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

#include "ex5_StateChart1.h"
#include "rtwtypes.h"

/* Named constants for Chart: '<Root>/Chart1' */
#define ex5_StateC_IN_Counter_ClockWise ((uint8_T)2U)
#define ex5_StateCha_FAST_MODE_DURATION (5000.0)
#define ex5_StateCha_SLOW_MODE_DURATION (10000.0)
#define ex5_StateChart1_DC_MAX_SPEED   (255.0)
#define ex5_StateChart1_IN_ClockWise   ((uint8_T)1U)
#define ex5_StateChart1_IN_Natural     ((uint8_T)3U)
#define ex5_StateChart1_STEP_SIZE      (100.0)

/* Block states (default storage) */
DW_ex5_StateChart1_T ex5_StateChart1_DW;

/* External inputs (root inport signals with default storage) */
ExtU_ex5_StateChart1_T ex5_StateChart1_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ex5_StateChart1_T ex5_StateChart1_Y;

/* Real-time model */
static RT_MODEL_ex5_StateChart1_T ex5_StateChart1_M_;
RT_MODEL_ex5_StateChart1_T *const ex5_StateChart1_M = &ex5_StateChart1_M_;

/* Model step function */
void ex5_StateChart1_step(void)
{
  real_T tmp;

  /* Chart: '<Root>/Chart1' incorporates:
   *  Inport: '<Root>/switch_on'
   */
  if (ex5_StateChart1_DW.is_active_c2_ex5_StateChart1 == 0U) {
    ex5_StateChart1_DW.is_active_c2_ex5_StateChart1 = 1U;
    ex5_StateChart1_DW.is_Servo_Motor = ex5_StateChart1_IN_Natural;
  } else {
    switch (ex5_StateChart1_DW.is_Servo_Motor) {
     case ex5_StateChart1_IN_ClockWise:
      if (ex5_StateChart1_DW.ctr_servo >= 17.0) {
        /* Outport: '<Root>/servo_rotate' */
        ex5_StateChart1_Y.servo_rotate = -1.0;
        ex5_StateChart1_DW.ctr_servo = 0.0;
        ex5_StateChart1_DW.is_Servo_Motor = ex5_StateC_IN_Counter_ClockWise;
      } else if (ex5_StateChart1_DW.ctr_servo < 17.0) {
        ex5_StateChart1_DW.ctr_servo++;
        ex5_StateChart1_DW.is_Servo_Motor = ex5_StateChart1_IN_ClockWise;
      }
      break;

     case ex5_StateC_IN_Counter_ClockWise:
      if (ex5_StateChart1_DW.ctr_servo < 17.0) {
        ex5_StateChart1_DW.ctr_servo++;
        ex5_StateChart1_DW.is_Servo_Motor = ex5_StateC_IN_Counter_ClockWise;
      } else if (ex5_StateChart1_DW.ctr_servo >= 17.0) {
        /* Outport: '<Root>/servo_rotate' */
        ex5_StateChart1_Y.servo_rotate = 0.0;
        ex5_StateChart1_DW.ctr_servo = 0.0;
        ex5_StateChart1_DW.is_Servo_Motor = ex5_StateChart1_IN_Natural;
      }
      break;

     default:
      /* case IN_Natural: */
      tmp = (ex5_StateCha_SLOW_MODE_DURATION - ex5_StateChart1_U.switch_on *
             ex5_StateCha_FAST_MODE_DURATION) / ex5_StateChart1_STEP_SIZE - 1.0;
      if (ex5_StateChart1_DW.ctr_servo >= tmp) {
        /* Outport: '<Root>/servo_rotate' */
        ex5_StateChart1_Y.servo_rotate = 1.0;
        ex5_StateChart1_DW.ctr_servo = 0.0;
        ex5_StateChart1_DW.is_Servo_Motor = ex5_StateChart1_IN_ClockWise;
      } else if (ex5_StateChart1_DW.ctr_servo < tmp) {
        ex5_StateChart1_DW.ctr_servo++;
        ex5_StateChart1_DW.is_Servo_Motor = ex5_StateChart1_IN_Natural;
      }
      break;
    }

    tmp = ex5_StateChart1_DW.DC_PERIOD / ex5_StateChart1_STEP_SIZE - 1.0;
    if (ex5_StateChart1_DW.ctr_dc < tmp) {
      ex5_StateChart1_DW.ctr_dc++;
    } else if (ex5_StateChart1_DW.ctr_dc >= tmp) {
      /* Outport: '<Root>/dc_speed' incorporates:
       *  Constant: '<S1>/Constant'
       *  Gain: '<S1>/Gain'
       *  Inport: '<Root>/temp_adc'
       *  Sum: '<S1>/Sum'
       *  Sum: '<S1>/Sum1'
       */
      ex5_StateChart1_Y.dc_speed = (((ex5_StateChart1_U.temp_adc - 20.0) *
        0.48816568047337278 - 40.0) - 20.0) * ex5_StateChart1_DC_MAX_SPEED /
        275.5;
      ex5_StateChart1_DW.ctr_dc = 0.0;
    }
  }

  /* End of Chart: '<Root>/Chart1' */
}

/* Model initialize function */
void ex5_StateChart1_initialize(void)
{
  /* SystemInitialize for Chart: '<Root>/Chart1' */
  ex5_StateChart1_DW.DC_PERIOD = 1000.0;
}

/* Model terminate function */
void ex5_StateChart1_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
