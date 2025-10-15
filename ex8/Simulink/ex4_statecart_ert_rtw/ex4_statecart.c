/*
 * File: ex4_statecart.c
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

#include "ex4_statecart.h"
#include "rtwtypes.h"

/* Named constants for Chart: '<Root>/Chart1' */
#define ex4_statecar_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define ex4_statecart_IN_Off           ((uint8_T)1U)
#define ex4_statecart_IN_On            ((uint8_T)2U)
#define ex4_statecart_IN_Op            ((uint8_T)1U)
#define ex4_statecart_IN_Shut          ((uint8_T)2U)
#define ex4_statecart_IN_Vol1          ((uint8_T)1U)
#define ex4_statecart_IN_Vol2          ((uint8_T)2U)

/* Block states (default storage) */
DW_ex4_statecart_T ex4_statecart_DW;

/* External inputs (root inport signals with default storage) */
ExtU_ex4_statecart_T ex4_statecart_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ex4_statecart_T ex4_statecart_Y;

/* Real-time model */
static RT_MODEL_ex4_statecart_T ex4_statecart_M_;
RT_MODEL_ex4_statecart_T *const ex4_statecart_M = &ex4_statecart_M_;

/* Model step function */
void ex4_statecart_step(void)
{
  /* Chart: '<Root>/Chart1' incorporates:
   *  Inport: '<Root>/dec'
   *  Inport: '<Root>/inc'
   *  Inport: '<Root>/start'
   *  Inport: '<Root>/stop'
   *  Inport: '<Root>/t_off'
   *  Inport: '<Root>/t_on'
   */
  if (ex4_statecart_DW.is_active_c1_ex4_statecart == 0U) {
    ex4_statecart_DW.is_active_c1_ex4_statecart = 1U;
    ex4_statecart_DW.is_c1_ex4_statecart = ex4_statecart_IN_Shut;
  } else if (ex4_statecart_DW.is_c1_ex4_statecart == ex4_statecart_IN_Op) {
    if (ex4_statecart_U.stop == 1.0) {
      /* Outport: '<Root>/shut' */
      ex4_statecart_Y.shut = 1.0;

      /* Outport: '<Root>/vol1' */
      ex4_statecart_Y.vol1 = 0.0;

      /* Outport: '<Root>/vol2' */
      ex4_statecart_Y.vol2 = 0.0;

      /* Outport: '<Root>/on' */
      ex4_statecart_Y.on = 0.0;

      /* Outport: '<Root>/off' */
      ex4_statecart_Y.off = 0.0;
      ex4_statecart_DW.is_Vol = ex4_statecar_IN_NO_ACTIVE_CHILD;
      ex4_statecart_DW.is_Mode = ex4_statecar_IN_NO_ACTIVE_CHILD;
      ex4_statecart_DW.is_c1_ex4_statecart = ex4_statecart_IN_Shut;
    } else {
      if (ex4_statecart_DW.is_Mode == ex4_statecart_IN_Off) {
        if (ex4_statecart_U.t_on == 1.0) {
          /* Outport: '<Root>/on' */
          ex4_statecart_Y.on = 1.0;

          /* Outport: '<Root>/off' */
          ex4_statecart_Y.off = 0.0;
          ex4_statecart_DW.is_Mode = ex4_statecart_IN_On;
        }

        /* case IN_On: */
      } else if (ex4_statecart_U.t_off == 1.0) {
        /* Outport: '<Root>/off' */
        ex4_statecart_Y.off = 1.0;

        /* Outport: '<Root>/on' */
        ex4_statecart_Y.on = 0.0;
        ex4_statecart_DW.is_Mode = ex4_statecart_IN_Off;
      }

      if (ex4_statecart_DW.is_Vol == ex4_statecart_IN_Vol1) {
        if (ex4_statecart_U.inc == 1.0) {
          /* Outport: '<Root>/vol1' */
          ex4_statecart_Y.vol1 = 0.0;

          /* Outport: '<Root>/vol2' */
          ex4_statecart_Y.vol2 = 1.0;
          ex4_statecart_DW.is_Vol = ex4_statecart_IN_Vol2;
        }

        /* case IN_Vol2: */
      } else if (ex4_statecart_U.dec == 1.0) {
        /* Outport: '<Root>/vol1' */
        ex4_statecart_Y.vol1 = 1.0;

        /* Outport: '<Root>/vol2' */
        ex4_statecart_Y.vol2 = 0.0;
        ex4_statecart_DW.is_Vol = ex4_statecart_IN_Vol1;
      }
    }

    /* case IN_Shut: */
  } else if (ex4_statecart_U.start == 1.0) {
    /* Outport: '<Root>/shut' */
    ex4_statecart_Y.shut = 0.0;
    ex4_statecart_DW.is_c1_ex4_statecart = ex4_statecart_IN_Op;

    /* Outport: '<Root>/off' */
    ex4_statecart_Y.off = 1.0;

    /* Outport: '<Root>/on' */
    ex4_statecart_Y.on = 0.0;
    ex4_statecart_DW.is_Mode = ex4_statecart_IN_Off;

    /* Outport: '<Root>/vol1' */
    ex4_statecart_Y.vol1 = 1.0;

    /* Outport: '<Root>/vol2' */
    ex4_statecart_Y.vol2 = 0.0;
    ex4_statecart_DW.is_Vol = ex4_statecart_IN_Vol1;
  } else if (ex4_statecart_U.t_on == 1.0) {
    /* Outport: '<Root>/shut' */
    ex4_statecart_Y.shut = 0.0;
    ex4_statecart_DW.is_c1_ex4_statecart = ex4_statecart_IN_Op;
    ex4_statecart_DW.is_Mode = ex4_statecart_IN_On;

    /* Outport: '<Root>/vol1' */
    ex4_statecart_Y.vol1 = 1.0;

    /* Outport: '<Root>/vol2' */
    ex4_statecart_Y.vol2 = 0.0;
    ex4_statecart_DW.is_Vol = ex4_statecart_IN_Vol1;
  }

  /* End of Chart: '<Root>/Chart1' */
}

/* Model initialize function */
void ex4_statecart_initialize(void)
{
  /* SystemInitialize for Outport: '<Root>/shut' incorporates:
   *  Chart: '<Root>/Chart1'
   */
  ex4_statecart_Y.shut = 1.0;
}

/* Model terminate function */
void ex4_statecart_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
