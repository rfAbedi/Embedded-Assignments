/*
 * File: ex5_StateChart1.c
 *
 * Code generated for Simulink model 'ex5_StateChart1'.
 *
 * Model version                  : 1.30
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Dec 28 22:05:55 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ex5_StateChart1.h"
#include "rtwtypes.h"
#include "ex5_StateChart1_private.h"
#include <math.h>

/* Named constants for Chart: '<Root>/Chart1' */
#define ex5_StateC_IN_Counter_ClockWise ((uint8_T)2U)
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
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function */
void ex5_StateChart1_step(void)
{
  real_T tmp_0;
  int16_T z;
  uint16_T qY;
  uint16_T tmp;

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
      tmp_0 = rt_roundd_snf(ex5_StateChart1_U.switch_on * 5000.0);
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      /* MW:begin MISRA2012:D4.1 CERT-C:INT30-C 'Justifying MISRA CPP rule violation' */
      qY = 10000U - /*MW:OvSatOk*/ tmp;

      /* MW:end MISRA2012:D4.1 CERT-C:INT30-C */
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          tmp = (uint16_T)tmp_0;
        } else {
          tmp = 0U;
        }
      } else {
        tmp = MAX_uint16_T;
      }

      if (10000U - tmp > 10000U) {
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
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp = (uint16_T)tmp_0;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint16_T;
        }

        qY = 10000U - /*MW:OvSatOk*/ tmp;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            tmp = (uint16_T)tmp_0;
          } else {
            tmp = 0U;
          }
        } else {
          tmp = MAX_uint16_T;
        }

        if (10000U - tmp > 10000U) {
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
       *  Constant: '<S1>/Constant1'
       *  Constant: '<S3>/Constant'
       *  Gain: '<S1>/Gain'
       *  Gain: '<S3>/Gain'
       *  Inport: '<Root>/tmp_adc'
       *  Sum: '<S1>/Sum'
       *  Sum: '<S1>/Sum1'
       *  Sum: '<S3>/Sum'
       */
      ex5_StateChart1_Y.dc_speed = (int16_T)((((((int16_T)((uint16_T)
        ((((ex5_StateChart1_U.tmp_adc << 1) - 2560U) * 63985UL) >> 16) >> 1) +
        -5120) << 1) - 5120) * 15165L) >> 14);
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
