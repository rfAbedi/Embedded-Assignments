/*
 * File: ex4_statecart.h
 *
 * Code generated for Simulink model 'ex4_statecart'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed Dec 11 19:21:37 2024
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
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_AnalogIn.h"
#include "MW_arduino_digitalio.h"
#endif                                 /* ex4_statecart_COMMON_INCLUDES_ */

#include "ex4_statecart_types.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  boolean_T vol1;                      /* '<Root>/Chart1' */
  boolean_T vol2;                      /* '<Root>/Chart1' */
  boolean_T off_out;                   /* '<Root>/Chart1' */
  boolean_T on_out;                    /* '<Root>/Chart1' */
} B_ex4_statecart_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_T obj; /* '<Root>/Analog Input2' */
  codertarget_arduinobase_inter_T obj_l;/* '<Root>/Analog Input1' */
  codertarget_arduinobase_inter_T obj_n;/* '<Root>/Analog Input' */
  codertarget_arduinobase_block_T obj_i;/* '<Root>/Digital Output3' */
  codertarget_arduinobase_block_T obj_m;/* '<Root>/Digital Output2' */
  codertarget_arduinobase_block_T obj_j;/* '<Root>/Digital Output1' */
  codertarget_arduinobase_block_T obj_n2;/* '<Root>/Digital Output' */
  uint8_T is_active_c1_ex4_statecart;  /* '<Root>/Chart1' */
  uint8_T is_c1_ex4_statecart;         /* '<Root>/Chart1' */
  uint8_T is_Mode;                     /* '<Root>/Chart1' */
  uint8_T is_Vol;                      /* '<Root>/Chart1' */
} DW_ex4_statecart_T;

/* Parameters (default storage) */
struct P_ex4_statecart_T_ {
  uint16_T CompareToConstant1_const; /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S3>/Constant'
                                      */
  uint16_T CompareToConstant_const;   /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S2>/Constant'
                                       */
  uint16_T CompareToConstant2_const; /* Mask Parameter: CompareToConstant2_const
                                      * Referenced by: '<S4>/Constant'
                                      */
  real_T AnalogInput_SampleTime;       /* Expression: -1
                                        * Referenced by: '<Root>/Analog Input'
                                        */
  real_T AnalogInput1_SampleTime;      /* Expression: -1
                                        * Referenced by: '<Root>/Analog Input1'
                                        */
  real_T AnalogInput2_SampleTime;      /* Expression: -1
                                        * Referenced by: '<Root>/Analog Input2'
                                        */
  boolean_T Constant1_Value;           /* Expression: false
                                        * Referenced by: '<Root>/Constant1'
                                        */
  boolean_T Constant2_Value;           /* Expression: false
                                        * Referenced by: '<Root>/Constant2'
                                        */
  boolean_T Constant_Value;            /* Expression: false
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_ex4_statecart_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern P_ex4_statecart_T ex4_statecart_P;

/* Block signals (default storage) */
extern B_ex4_statecart_T ex4_statecart_B;

/* Block states (default storage) */
extern DW_ex4_statecart_T ex4_statecart_DW;

/* Model entry point functions */
extern void ex4_statecart_initialize(void);
extern void ex4_statecart_step(void);
extern void ex4_statecart_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ex4_statecart_T *const ex4_statecart_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
 * '<S2>'   : 'ex4_statecart/Compare To Constant'
 * '<S3>'   : 'ex4_statecart/Compare To Constant1'
 * '<S4>'   : 'ex4_statecart/Compare To Constant2'
 */
#endif                                 /* ex4_statecart_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
