/*
 * File: rtwtypes.h
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

#include <Servo.h>
#include <Arduino.h>

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
 *   Device type: Intel->x86-64 (Windows64)
 *   Number of bits:     char:   8    short:   16    int:  32
 *                       long:  32
 *                       native word size:  64
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
typedef short int16_T;
typedef unsigned short uint16_T;
typedef int int32_T;
typedef unsigned int uint32_T;
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
#define MAX_int32_T                    ((int32_T)(2147483647))
#define MIN_int32_T                    ((int32_T)(-2147483647-1))
#define MAX_uint32_T                   ((uint32_T)(0xFFFFFFFFU))

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
 * Model version                  : 1.21
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Fri Dec 13 20:31:26 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
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
//#include "rtwtypes.h"
#endif                                 /* ex5_StateChart1_COMMON_INCLUDES_ */

//#include "ex5_StateChart1_types.h"

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

//#include "ex5_StateChart1.h"
//#include "rtwtypes.h"

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
      if (ex5_StateChart1_DW.ctr_servo >= 35.0) {
        /* Outport: '<Root>/servo_rotate' */
        ex5_StateChart1_Y.servo_rotate = -1.0;
        ex5_StateChart1_DW.ctr_servo = 0.0;
        ex5_StateChart1_DW.is_Servo_Motor = ex5_StateC_IN_Counter_ClockWise;
      } else if (ex5_StateChart1_DW.ctr_servo < 35.0) {
        ex5_StateChart1_DW.ctr_servo++;
        ex5_StateChart1_DW.is_Servo_Motor = ex5_StateChart1_IN_ClockWise;
      }
      break;

     case ex5_StateC_IN_Counter_ClockWise:
      if (ex5_StateChart1_DW.ctr_servo < 35.0) {
        ex5_StateChart1_DW.ctr_servo++;
        ex5_StateChart1_DW.is_Servo_Motor = ex5_StateC_IN_Counter_ClockWise;
      } else if (ex5_StateChart1_DW.ctr_servo >= 35.0) {
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
  ex5_StateChart1_U.temp_adc = analogRead(temp_pin);
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