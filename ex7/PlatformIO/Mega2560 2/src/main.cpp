#include <Arduino.h>
#include <Servo.h>
#include <math.h>
#include <limits.h>

/*
 * File: rtmodel.h
 *
 * Code generated for Simulink model 'ex5_StateChart1'.
 *
 * Model version                  : 1.28
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Dec 28 20:04:43 2024
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
 * Code generated for Simulink model 'ex5_StateChart1'.
 *
 * Model version                  : 1.28
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Dec 28 20:04:43 2024
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
 * File: ex5_StateChart1_types.h
 *
 * Code generated for Simulink model 'ex5_StateChart1'.
 *
 * Model version                  : 1.28
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Dec 28 20:04:43 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef ex5_StateChart1_types_h_
#define ex5_StateChart1_types_h_

/* Forward declaration for rtModel */
typedef struct tag_RTM_ex5_StateChart1_T RT_MODEL_ex5_StateChart1_T;

#endif                                 /* ex5_StateChart1_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */


/*
 * File: ex5_StateChart1_private.h
 *
 * Code generated for Simulink model 'ex5_StateChart1'.
 *
 * Model version                  : 1.28
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Dec 28 20:04:43 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef ex5_StateChart1_private_h_
#define ex5_StateChart1_private_h_
#ifndef UCHAR_MAX
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFU) ) || ( INT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFUL) ) || ( LONG_MAX != (0x7FFFFFFFL) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

extern real_T rt_roundd_snf(real_T u);

#endif                                 /* ex5_StateChart1_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */


/*
 * File: ex5_StateChart1.h
 *
 * Code generated for Simulink model 'ex5_StateChart1'.
 *
 * Model version                  : 1.28
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Dec 28 20:04:43 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef ex5_StateChart1_h_
#define ex5_StateChart1_h_
#ifndef ex5_StateChart1_COMMON_INCLUDES_
#define ex5_StateChart1_COMMON_INCLUDES_
#endif                                 /* ex5_StateChart1_COMMON_INCLUDES_ */


/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint16_T ctr_dc;                     /* '<Root>/Chart1' */
  uint16_T ctr_servo;                  /* '<Root>/Chart1' */
  uint8_T is_active_c2_ex5_StateChart1;/* '<Root>/Chart1' */
  uint8_T is_Servo_Motor;              /* '<Root>/Chart1' */
} DW_ex5_StateChart1_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T switch_on;                    /* '<Root>/switch_on' */
  uint16_T tmp_adc;                    /* '<Root>/tmp_adc' */
} ExtU_ex5_StateChart1_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  int16_T servo_rotate;                /* '<Root>/servo_rotate' */
  uint16_T dc_speed;                   /* '<Root>/dc_speed' */
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
 * Block '<Root>/CelsiusScaler Subsystem_boundary_DTC' : Eliminate redundant data type conversion
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


/*
 * File: ex5_StateChart1.c
 *
 * Code generated for Simulink model 'ex5_StateChart1'.
 *
 * Model version                  : 1.28
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Sat Dec 28 20:04:43 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */



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
  int32_T tmp;
  int16_T z;
  uint16_T e_x;
  uint16_T qY;

  /* Chart: '<Root>/Chart1' incorporates:
   *  Constant: '<S1>/Constant'
   *  DataTypeConversion: '<Root>/Chart1_boundary_DTC'
   *  Gain: '<S1>/Gain'
   *  Inport: '<Root>/switch_on'
   *  Inport: '<Root>/tmp_adc'
   *  Sum: '<S1>/Sum'
   *  Sum: '<S1>/Sum1'
   */
  if (ex5_StateChart1_DW.is_active_c2_ex5_StateChart1 == 0U) {
    ex5_StateChart1_DW.is_active_c2_ex5_StateChart1 = 1U;
    ex5_StateChart1_DW.is_Servo_Motor = ex5_StateChart1_IN_Natural;
  } else {
    switch (ex5_StateChart1_DW.is_Servo_Motor) {
     case ex5_StateChart1_IN_ClockWise:
      if (ex5_StateChart1_DW.ctr_servo >= 17U) {
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
      if (ex5_StateChart1_DW.ctr_servo < 17U) {
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
          e_x = (uint16_T)tmp_0;
        } else {
          e_x = 0U;
        }
      } else {
        e_x = MAX_uint16_T;
      }

      /* MW:begin MISRA2012:D4.1 CERT-C:INT30-C 'Justifying MISRA CPP rule violation' */
      qY = 10000U - /*MW:OvSatOk*/ e_x;

      /* MW:end MISRA2012:D4.1 CERT-C:INT30-C */
      if (tmp_0 < 65536.0) {
        if (tmp_0 >= 0.0) {
          e_x = (uint16_T)tmp_0;
        } else {
          e_x = 0U;
        }
      } else {
        e_x = MAX_uint16_T;
      }

      if (10000U - e_x > 10000U) {
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
            e_x = (uint16_T)tmp_0;
          } else {
            e_x = 0U;
          }
        } else {
          e_x = MAX_uint16_T;
        }

        qY = 10000U - /*MW:OvSatOk*/ e_x;
        if (tmp_0 < 65536.0) {
          if (tmp_0 >= 0.0) {
            e_x = (uint16_T)tmp_0;
          } else {
            e_x = 0U;
          }
        } else {
          e_x = MAX_uint16_T;
        }

        if (10000U - e_x > 10000U) {
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
      tmp = (int32_T)rt_roundd_snf((((real_T)((uint16_T)
        (((ex5_StateChart1_U.tmp_adc - 2560U) * 63985UL) >> 16) >> 1) - 5120.0) *
        0.0078125 - 20.0) * 255.0);
      if (tmp >= 0L) {
        e_x = (uint16_T)tmp;
      } else {
        e_x = 0U;
      }

      z = (int16_T)(e_x / 276U);
      if (e_x - (uint16_T)z * 276U >= 138U) {
        z = (int16_T)((uint16_T)z + 1U);
      }

      /* Outport: '<Root>/dc_speed' incorporates:
       *  Constant: '<S1>/Constant'
       *  DataTypeConversion: '<Root>/Chart1_boundary_DTC'
       *  Gain: '<S1>/Gain'
       *  Inport: '<Root>/tmp_adc'
       *  Sum: '<S1>/Sum'
       *  Sum: '<S1>/Sum1'
       */
      ex5_StateChart1_Y.dc_speed = (uint16_T)z;
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




#define switch_pin 2
#define temp_pin A0
#define servo_pin 8
#define dc_IN2_pin 9
#define dc_IN1_pin 10
#define dc_ENA_pin 11

#define servo_angle_change 5

int angle = 0;
Servo servo;
unsigned long sum_of_elapsed_time = 0;
unsigned long min_of_elapsed_time = MAX_uint32_T;
unsigned long max_of_elapsed_time = 0;
unsigned int number_of_loop_runs = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(switch_pin, INPUT);
  pinMode(temp_pin, INPUT);
  servo.attach(servo_pin);
  pinMode(dc_IN2_pin, OUTPUT);
  pinMode(dc_IN1_pin, OUTPUT);
  pinMode(dc_ENA_pin, OUTPUT);

  digitalWrite(dc_IN2_pin, 0);
  digitalWrite(dc_IN1_pin, 1);
  analogWrite(dc_ENA_pin, 0);
  servo.write(0);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ex5_StateChart1_U.tmp_adc = analogRead(temp_pin);
  ex5_StateChart1_U.switch_on = digitalRead(switch_pin);
  

  // ======== Code changed here for ex7 ===========
  unsigned long start_time = micros();
  ex5_StateChart1_step();
  unsigned long end_time = micros();

  unsigned long elapsed = end_time - start_time;
  sum_of_elapsed_time += elapsed;
  number_of_loop_runs++;

  if (elapsed > max_of_elapsed_time) {
    max_of_elapsed_time = elapsed;
  }
  if (elapsed < min_of_elapsed_time) {
    min_of_elapsed_time = elapsed;
  }

  if (number_of_loop_runs < 100) {
    Serial.print(number_of_loop_runs);
    Serial.print(": ");
    Serial.println(elapsed);
  } else if (number_of_loop_runs == 100) {
    double average = sum_of_elapsed_time / 100.0;
    Serial.print("Average= ");
    Serial.println(average);
    Serial.print("Min= ");
    Serial.println(min_of_elapsed_time);
    Serial.print("Max= ");
    Serial.println(max_of_elapsed_time);
  }
  
  // ======== End of code changed for ex7 ===========

  int servo_rotate = ex5_StateChart1_Y.servo_rotate;

  if (servo_rotate != 0)
  {
    angle += servo_rotate * servo_angle_change;
    servo.write(angle);
  }
  analogWrite(dc_ENA_pin, ex5_StateChart1_Y.dc_speed);

  delay(100);
}
