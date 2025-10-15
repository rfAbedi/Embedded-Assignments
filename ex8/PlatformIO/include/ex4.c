/*
 * File: rtmodel.h
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

#ifndef rtmodel_h_
#define rtmodel_h_

/* Macros generated for backwards compatibility  */
#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((void*) 0)
#endif
#endif                                 /* rtmodel_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */


/*
 * File: rtwtypes.h
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

#ifndef RTWTYPES_H
#define RTWTYPES_H

/* Logical type definitions */
#if (!defined(__cplusplus))
#ifndef false
#define false                          (0U)
#endif

#ifndef true
#define true                           (1U)
#endif
#endif

/*=======================================================================*
 * Target hardware information
 *   Device type: Atmel->AVR
 *   Number of bits:     char:   8    short:   16    int:  16
 *                       long:  32
 *                       native word size:   8
 *   Byte ordering: LittleEndian
 *   Signed integer division rounds to: Zero
 *   Shift right on a signed integer as arithmetic shift: on
 *=======================================================================*/

/*=======================================================================*
 * Fixed width word size data types:                                     *
 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
 *   real32_T, real64_T           - 32 and 64 bit floating point numbers *
 *=======================================================================*/
typedef signed char int8_T;
typedef unsigned char uint8_T;
typedef int int16_T;
typedef unsigned int uint16_T;
typedef long int32_T;
typedef unsigned long uint32_T;
typedef float real32_T;
typedef double real64_T;

/*===========================================================================*
 * Generic type definitions: boolean_T, char_T, byte_T, int_T, uint_T,       *
 *                           real_T, time_T, ulong_T.                        *
 *===========================================================================*/
typedef double real_T;
typedef double time_T;
typedef unsigned char boolean_T;
typedef int int_T;
typedef unsigned int uint_T;
typedef unsigned long ulong_T;
typedef char char_T;
typedef unsigned char uchar_T;
typedef char_T byte_T;

/*===========================================================================*
 * Complex number type definitions                                           *
 *===========================================================================*/
#define CREAL_T

typedef struct {
  real32_T re;
  real32_T im;
} creal32_T;

typedef struct {
  real64_T re;
  real64_T im;
} creal64_T;

typedef struct {
  real_T re;
  real_T im;
} creal_T;

#define CINT8_T

typedef struct {
  int8_T re;
  int8_T im;
} cint8_T;

#define CUINT8_T

typedef struct {
  uint8_T re;
  uint8_T im;
} cuint8_T;

#define CINT16_T

typedef struct {
  int16_T re;
  int16_T im;
} cint16_T;

#define CUINT16_T

typedef struct {
  uint16_T re;
  uint16_T im;
} cuint16_T;

#define CINT32_T

typedef struct {
  int32_T re;
  int32_T im;
} cint32_T;

#define CUINT32_T

typedef struct {
  uint32_T re;
  uint32_T im;
} cuint32_T;

/*=======================================================================*
 * Min and Max:                                                          *
 *   int8_T, int16_T, int32_T     - signed 8, 16, or 32 bit integers     *
 *   uint8_T, uint16_T, uint32_T  - unsigned 8, 16, or 32 bit integers   *
 *=======================================================================*/
#define MAX_int8_T                     ((int8_T)(127))
#define MIN_int8_T                     ((int8_T)(-128))
#define MAX_uint8_T                    ((uint8_T)(255U))
#define MAX_int16_T                    ((int16_T)(32767))
#define MIN_int16_T                    ((int16_T)(-32768))
#define MAX_uint16_T                   ((uint16_T)(65535U))
#define MAX_int32_T                    ((int32_T)(2147483647L))
#define MIN_int32_T                    ((int32_T)(-2147483647L-1L))
#define MAX_uint32_T                   ((uint32_T)(0xFFFFFFFFUL))

/* Block D-Work pointer type */
typedef void * pointer_T;

#endif                                 /* RTWTYPES_H */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */


/*
 * File: ex4_statecart_types.h
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

#ifndef ex4_statecart_types_h_
#define ex4_statecart_types_h_

/* Forward declaration for rtModel */
typedef struct tag_RTM_ex4_statecart_T RT_MODEL_ex4_statecart_T;

#endif                                 /* ex4_statecart_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */


/*
 * File: ex4_statecart_private.h
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

#ifndef ex4_statecart_private_h_
#define ex4_statecart_private_h_
#endif                                 /* ex4_statecart_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */


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
#endif                                 /* ex4_statecart_COMMON_INCLUDES_ */


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
