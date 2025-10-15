/*
 * File: ex5_StateChart1.c
 *
 * Code generated for Simulink model 'ex5_StateChart1'.
 *
 * Model version                  : 1.26
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Dec 28 23:43:58 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ex5_StateChart1.h"
#include "rtwtypes.h"

/* Named constants for Chart: '<Root>/Chart1' */
#define ex5_StateC_IN_Counter_ClockWise ((uint8_T)2U)
#define ex5_StateCha_FAST_MODE_DURATION (5000U)
#define ex5_StateChart1_IN_ClockWise   ((uint8_T)1U)
#define ex5_StateChart1_IN_Natural     ((uint8_T)3U)
#define ex5_StateChart1_STEP_SIZE      (100U)

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
  uint32_T tmp;
  uint32_T tmp_0;
  int16_T z;
  uint16_T qY;

  /* Chart: '<Root>/Chart1' incorporates:
   *  Inport: '<Root>/switch_on'
   */
  if (ex5_StateChart1_DW.is_active_c2_ex5_StateChart1 == 0U) {
    ex5_StateChart1_DW.is_active_c2_ex5_StateChart1 = 1U;
    ex5_StateChart1_DW.is_Servo_Motor = ex5_StateChart1_IN_Natural;
  } else {
    switch (ex5_StateChart1_DW.is_Servo_Motor) {
     case ex5_StateChart1_IN_ClockWise:
      if (ex5_StateChart1_DW.ctr_servo >= 35U) {
        /* Outport: '<Root>/servo_rotate' */
        ex5_StateChart1_Y.servo_rotate = -1;
        ex5_StateChart1_DW.ctr_servo = 0U;
        ex5_StateChart1_DW.is_Servo_Motor = ex5_StateC_IN_Counter_ClockWise;
      } else {
        qY = ex5_StateChart1_DW.ctr_servo + /*MW:OvSatOk*/ 1U;
        if (ex5_StateChart1_DW.ctr_servo + 1U < ex5_StateChart1_DW.ctr_servo) {
          qY = MAX_uint16_T;
        }

        ex5_StateChart1_DW.ctr_servo = qY;
        ex5_StateChart1_DW.is_Servo_Motor = ex5_StateChart1_IN_ClockWise;
      }
      break;

     case ex5_StateC_IN_Counter_ClockWise:
      if (ex5_StateChart1_DW.ctr_servo < 35U) {
        qY = ex5_StateChart1_DW.ctr_servo + /*MW:OvSatOk*/ 1U;
        if (ex5_StateChart1_DW.ctr_servo + 1U < ex5_StateChart1_DW.ctr_servo) {
          qY = MAX_uint16_T;
        }

        ex5_StateChart1_DW.ctr_servo = qY;
        ex5_StateChart1_DW.is_Servo_Motor = ex5_StateC_IN_Counter_ClockWise;
      } else {
        /* Outport: '<Root>/servo_rotate' */
        ex5_StateChart1_Y.servo_rotate = 0;
        ex5_StateChart1_DW.ctr_servo = 0U;
        ex5_StateChart1_DW.is_Servo_Motor = ex5_StateChart1_IN_Natural;
      }
      break;

     default:
      /* case IN_Natural: */
      tmp_0 = (uint32_T)ex5_StateChart1_U.switch_on *
        ex5_StateCha_FAST_MODE_DURATION;
      tmp = tmp_0;
      if ((int32_T)tmp_0 > 65535L) {
        tmp = 65535UL;
      }

      /* MW:begin MISRA2012:D4.1 CERT-C:INT30-C 'Justifying MISRA CPP rule violation' */
      qY = 10000U - (uint16_T)tmp;

      /* MW:end MISRA2012:D4.1 CERT-C:INT30-C */
      if (10000U - (uint16_T)tmp > 10000U) {
        qY = 0U;
      }

      z = (int16_T)(qY / ex5_StateChart1_STEP_SIZE);
      if (qY - (uint16_T)z * ex5_StateChart1_STEP_SIZE >= 50U) {
        z = (int16_T)((uint16_T)z + 1U);
      }

      qY = (uint16_T)z - 1U;
      if ((uint16_T)z - 1U > (uint16_T)z) {
        qY = 0U;
      }

      if (ex5_StateChart1_DW.ctr_servo >= qY) {
        /* Outport: '<Root>/servo_rotate' */
        ex5_StateChart1_Y.servo_rotate = 1;
        ex5_StateChart1_DW.ctr_servo = 0U;
        ex5_StateChart1_DW.is_Servo_Motor = ex5_StateChart1_IN_ClockWise;
      } else {
        if ((int32_T)tmp_0 > 65535L) {
          tmp_0 = 65535UL;
        }

        qY = 10000U - (uint16_T)tmp_0;
        if (10000U - (uint16_T)tmp_0 > 10000U) {
          qY = 0U;
        }

        z = (int16_T)(qY / ex5_StateChart1_STEP_SIZE);
        if (qY - (uint16_T)z * ex5_StateChart1_STEP_SIZE >= 50U) {
          z = (int16_T)((uint16_T)z + 1U);
        }

        qY = (uint16_T)z - 1U;
        if ((uint16_T)z - 1U > (uint16_T)z) {
          qY = 0U;
        }

        if (ex5_StateChart1_DW.ctr_servo < qY) {
          qY = ex5_StateChart1_DW.ctr_servo + /*MW:OvSatOk*/ 1U;
          if (ex5_StateChart1_DW.ctr_servo + 1U < ex5_StateChart1_DW.ctr_servo)
          {
            qY = MAX_uint16_T;
          }

          ex5_StateChart1_DW.ctr_servo = qY;
          ex5_StateChart1_DW.is_Servo_Motor = ex5_StateChart1_IN_Natural;
        }
      }
      break;
    }

    if (ex5_StateChart1_DW.ctr_dc < 9U) {
      qY = ex5_StateChart1_DW.ctr_dc + /*MW:OvSatOk*/ 1U;
      if (ex5_StateChart1_DW.ctr_dc + 1U < ex5_StateChart1_DW.ctr_dc) {
        qY = MAX_uint16_T;
      }

      ex5_StateChart1_DW.ctr_dc = qY;
    } else {
      /* Outport: '<Root>/dc_speed' incorporates:
       *  Constant: '<S1>/Constant'
       *  Gain: '<S1>/Gain'
       *  Inport: '<Root>/celsius'
       *  Sum: '<S1>/Sum'
       *  Sum: '<S1>/Sum1'
       */
      ex5_StateChart1_Y.dc_speed = (((ex5_StateChart1_U.celsius - 20.0) *
        0.48816568047337278 - 40.0) - 20.0) * 255.0 / 275.5;
      ex5_StateChart1_DW.ctr_dc = 0U;
    }
  }

  /* End of Chart: '<Root>/Chart1' */
}

/* Model initialize function */
void ex5_StateChart1_initialize(void)
{
  /* (no initialization code required) */
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
