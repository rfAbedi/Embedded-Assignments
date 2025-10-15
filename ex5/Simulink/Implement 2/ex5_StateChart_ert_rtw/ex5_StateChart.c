/*
 * File: ex5_StateChart.c
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

#include "ex5_StateChart.h"
#include "rtwtypes.h"
#include "ex5_StateChart_private.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <float.h>

/* Named constants for Chart: '<Root>/ControllerChart' */
#define ex5_StateCha_IN_Check_Direction ((uint8_T)1U)
#define ex5_StateChart_DC_MAX_SPEED    (255.0)
#define ex5_StateChart_IN_Check_Mode   ((uint8_T)2U)
#define ex5_StateChart_IN_Pulse_Down   ((uint8_T)3U)
#define ex5_StateChart_IN_Pulse_High   ((uint8_T)4U)
#define ex5_StateChart_JUMP            (25.0)
#define ex5_StateChart_SENSOR_PERIOD   (1.0E+6)
#define ex5_StateChart_SERVO_MAX_PW    (2000.0)
#define ex5_StateChart_SERVO_MIN_PW    (1000.0)
#define ex5_StateChart_SERVO_PERIOD    (20000.0)
#define ex5_StateChart_SWITCH_PERIOD   (100000.0)

/* Block states (default storage) */
DW_ex5_StateChart_T ex5_StateChart_DW;

/* External inputs (root inport signals with default storage) */
ExtU_ex5_StateChart_T ex5_StateChart_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ex5_StateChart_T ex5_StateChart_Y;

/* Real-time model */
static RT_MODEL_ex5_StateChart_T ex5_StateChart_M_;
RT_MODEL_ex5_StateChart_T *const ex5_StateChart_M = &ex5_StateChart_M_;
real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T q;
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else {
    if (u1 < 0.0) {
      q = ceil(u1);
    } else {
      q = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != q)) {
      q = fabs(u0 / u1);
      if (!(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q)) {
        y = 0.0 * u0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

/* Model step function */
void ex5_StateChart_step(void)
{
  real_T tmp;
  real_T tmp_0;

  /* Chart: '<Root>/ControllerChart' incorporates:
   *  Inport: '<Root>/Inport1'
   *  Inport: '<Root>/Inport2'
   */
  if (ex5_StateChart_DW.is_active_c3_ex5_StateChart == 0U) {
    ex5_StateChart_DW.is_active_c3_ex5_StateChart = 1U;

    /* Outport: '<Root>/Output' */
    ex5_StateChart_Y.Output = 1.0;
    ex5_StateChart_DW.is_Servo_Motor = ex5_StateChart_IN_Pulse_High;
  } else {
    if (rt_remd_snf(ex5_StateChart_U.Inport2, ex5_StateChart_SENSOR_PERIOD) ==
        0.0) {
      /* Outport: '<Root>/Output1' incorporates:
       *  Constant: '<S1>/Constant'
       *  Gain: '<S1>/Gain'
       *  Inport: '<Root>/Inport'
       *  Sum: '<S1>/Sum'
       *  Sum: '<S1>/Sum1'
       */
      ex5_StateChart_Y.Output1 = (((ex5_StateChart_U.Inport - 20.0) *
        0.48816568047337278 - 40.0) - 20.0) * ex5_StateChart_DC_MAX_SPEED /
        (ex5_StateChart_DW.DC_MAX_RPM / 60.0);
    }

    if (rt_remd_snf(ex5_StateChart_U.Inport2, ex5_StateChart_SWITCH_PERIOD) ==
        0.0) {
      ex5_StateChart_DW.fast_mode = ex5_StateChart_U.Inport1;
    }

    switch (ex5_StateChart_DW.is_Servo_Motor) {
     case ex5_StateCha_IN_Check_Direction:
      if (ex5_StateChart_DW.servo_pw >= ex5_StateChart_SERVO_MAX_PW) {
        ex5_StateChart_DW.servo_dir = -1.0;
      } else if (ex5_StateChart_DW.servo_pw <= ex5_StateChart_SERVO_MIN_PW) {
        ex5_StateChart_DW.servo_dir = 1.0;
      }

      ex5_StateChart_DW.is_Servo_Motor = ex5_StateChart_IN_Pulse_High;
      break;

     case ex5_StateChart_IN_Check_Mode:
      if (ex5_StateChart_DW.fast_mode == 1.0) {
        ex5_StateChart_DW.servo_pw += ex5_StateChart_JUMP *
          ex5_StateChart_DW.servo_dir * 2.0 * ex5_StateChart_SERVO_MIN_PW /
          500.0;
        ex5_StateChart_DW.is_Servo_Motor = ex5_StateCha_IN_Check_Direction;
      } else if (ex5_StateChart_DW.fast_mode == 1.0) {
        ex5_StateChart_DW.servo_pw += ex5_StateChart_JUMP *
          ex5_StateChart_DW.servo_dir * 2.0 * ex5_StateChart_SERVO_MIN_PW /
          250.0;
        ex5_StateChart_DW.is_Servo_Motor = ex5_StateCha_IN_Check_Direction;
      }
      break;

     case ex5_StateChart_IN_Pulse_Down:
      tmp = rt_remd_snf(ex5_StateChart_U.Inport2, ex5_StateChart_SERVO_PERIOD);
      tmp_0 = rt_remd_snf(ex5_StateChart_U.Inport2, 500000.0);
      if ((tmp == 0.0) && (tmp_0 == 0.0)) {
        /* Outport: '<Root>/Output' */
        ex5_StateChart_Y.Output = 1.0;
        ex5_StateChart_DW.is_Servo_Motor = ex5_StateChart_IN_Check_Mode;
      } else if ((tmp == 0.0) && (tmp_0 != 0.0)) {
        /* Outport: '<Root>/Output' */
        ex5_StateChart_Y.Output = 1.0;
        ex5_StateChart_DW.is_Servo_Motor = ex5_StateChart_IN_Pulse_High;
      }
      break;

     default:
      /* case IN_Pulse_High: */
      if (rt_remd_snf(ex5_StateChart_U.Inport2, ex5_StateChart_DW.servo_pw) ==
          0.0) {
        /* Outport: '<Root>/Output' */
        ex5_StateChart_Y.Output = 0.0;
        ex5_StateChart_DW.is_Servo_Motor = ex5_StateChart_IN_Pulse_Down;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/ControllerChart' */
}

/* Model initialize function */
void ex5_StateChart_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* SystemInitialize for Chart: '<Root>/ControllerChart' */
  ex5_StateChart_DW.servo_pw = 1000.0;
  ex5_StateChart_DW.servo_dir = 1.0;
  ex5_StateChart_DW.DC_MAX_RPM = 16530.0;
}

/* Model terminate function */
void ex5_StateChart_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
