/*
 * File: ex4_statecart.c
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

/* Block signals (default storage) */
B_ex4_statecart_T ex4_statecart_B;

/* Block states (default storage) */
DW_ex4_statecart_T ex4_statecart_DW;

/* Real-time model */
static RT_MODEL_ex4_statecart_T ex4_statecart_M_;
RT_MODEL_ex4_statecart_T *const ex4_statecart_M = &ex4_statecart_M_;

/* Model step function */
void ex4_statecart_step(void)
{
  uint16_T b_varargout_1;
  uint16_T b_varargout_1_0;
  boolean_T rtb_Compare;

  /* MATLABSystem: '<Root>/Analog Input1' */
  if (ex4_statecart_DW.obj_l.SampleTime !=
      ex4_statecart_P.AnalogInput1_SampleTime) {
    ex4_statecart_DW.obj_l.SampleTime = ex4_statecart_P.AnalogInput1_SampleTime;
  }

  ex4_statecart_DW.obj_l.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
    MW_AnalogIn_GetHandle(56UL);
  MW_AnalogInSingle_ReadResult
    (ex4_statecart_DW.obj_l.AnalogInDriverObj.MW_ANALOGIN_HANDLE, &b_varargout_1,
     MW_ANALOGIN_UINT16);

  /* RelationalOperator: '<S3>/Compare' incorporates:
   *  Constant: '<S3>/Constant'
   *  MATLABSystem: '<Root>/Analog Input1'
   * */
  rtb_Compare = (b_varargout_1 <= ex4_statecart_P.CompareToConstant1_const);

  /* MATLABSystem: '<Root>/Analog Input' */
  if (ex4_statecart_DW.obj_n.SampleTime !=
      ex4_statecart_P.AnalogInput_SampleTime) {
    ex4_statecart_DW.obj_n.SampleTime = ex4_statecart_P.AnalogInput_SampleTime;
  }

  ex4_statecart_DW.obj_n.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
    MW_AnalogIn_GetHandle(57UL);
  MW_AnalogInSingle_ReadResult
    (ex4_statecart_DW.obj_n.AnalogInDriverObj.MW_ANALOGIN_HANDLE, &b_varargout_1,
     MW_ANALOGIN_UINT16);

  /* MATLABSystem: '<Root>/Analog Input2' */
  if (ex4_statecart_DW.obj.SampleTime != ex4_statecart_P.AnalogInput2_SampleTime)
  {
    ex4_statecart_DW.obj.SampleTime = ex4_statecart_P.AnalogInput2_SampleTime;
  }

  ex4_statecart_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
    MW_AnalogIn_GetHandle(55UL);
  MW_AnalogInSingle_ReadResult
    (ex4_statecart_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE, &b_varargout_1_0,
     MW_ANALOGIN_UINT16);

  /* Chart: '<Root>/Chart1' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant2'
   *  Constant: '<S2>/Constant'
   *  Constant: '<S4>/Constant'
   *  MATLABSystem: '<Root>/Analog Input'
   *  MATLABSystem: '<Root>/Analog Input2'
   *  RelationalOperator: '<S2>/Compare'
   *  RelationalOperator: '<S4>/Compare'
   * */
  if (ex4_statecart_DW.is_active_c1_ex4_statecart == 0U) {
    ex4_statecart_DW.is_active_c1_ex4_statecart = 1U;
    ex4_statecart_B.off_out = true;
    ex4_statecart_B.on_out = true;
    ex4_statecart_B.vol1 = true;
    ex4_statecart_B.vol2 = true;
    ex4_statecart_DW.is_c1_ex4_statecart = ex4_statecart_IN_Shut;
  } else if (ex4_statecart_DW.is_c1_ex4_statecart == ex4_statecart_IN_Op) {
    if (ex4_statecart_P.Constant_Value) {
      ex4_statecart_DW.is_Vol = ex4_statecar_IN_NO_ACTIVE_CHILD;
      ex4_statecart_DW.is_Mode = ex4_statecar_IN_NO_ACTIVE_CHILD;
      ex4_statecart_DW.is_c1_ex4_statecart = ex4_statecart_IN_Shut;
    } else {
      if (ex4_statecart_DW.is_Mode == ex4_statecart_IN_Off) {
        if (rtb_Compare) {
          ex4_statecart_B.on_out = false;
          ex4_statecart_B.off_out = true;
          ex4_statecart_DW.is_Mode = ex4_statecart_IN_On;
        }

        /* case IN_On: */
      } else if (b_varargout_1 <= ex4_statecart_P.CompareToConstant_const) {
        ex4_statecart_B.off_out = false;
        ex4_statecart_B.on_out = true;
        ex4_statecart_DW.is_Mode = ex4_statecart_IN_Off;
      }

      if (ex4_statecart_DW.is_Vol == ex4_statecart_IN_Vol1) {
        if (ex4_statecart_P.Constant2_Value) {
          ex4_statecart_B.vol1 = true;
          ex4_statecart_B.vol2 = false;
          ex4_statecart_DW.is_Vol = ex4_statecart_IN_Vol2;
        }

        /* case IN_Vol2: */
      } else if (ex4_statecart_P.Constant1_Value) {
        ex4_statecart_B.vol1 = false;
        ex4_statecart_B.vol2 = true;
        ex4_statecart_DW.is_Vol = ex4_statecart_IN_Vol1;
      }
    }

    /* case IN_Shut: */
  } else if (b_varargout_1_0 <= ex4_statecart_P.CompareToConstant2_const) {
    ex4_statecart_DW.is_c1_ex4_statecart = ex4_statecart_IN_Op;
    ex4_statecart_DW.is_Mode = ex4_statecart_IN_Off;
    ex4_statecart_DW.is_Vol = ex4_statecart_IN_Vol1;
  } else if (rtb_Compare) {
    ex4_statecart_DW.is_c1_ex4_statecart = ex4_statecart_IN_Op;
    ex4_statecart_DW.is_Mode = ex4_statecart_IN_On;
    ex4_statecart_DW.is_Vol = ex4_statecart_IN_Vol1;
  }

  /* End of Chart: '<Root>/Chart1' */

  /* MATLABSystem: '<Root>/Digital Output' */
  writeDigitalPin(10, (uint8_T)ex4_statecart_B.vol1);

  /* MATLABSystem: '<Root>/Digital Output1' */
  writeDigitalPin(11, (uint8_T)ex4_statecart_B.vol2);

  /* MATLABSystem: '<Root>/Digital Output2' */
  writeDigitalPin(12, (uint8_T)ex4_statecart_B.off_out);

  /* MATLABSystem: '<Root>/Digital Output3' */
  writeDigitalPin(13, (uint8_T)ex4_statecart_B.on_out);
}

/* Model initialize function */
void ex4_statecart_initialize(void)
{
  /* Start for MATLABSystem: '<Root>/Analog Input1' */
  ex4_statecart_DW.obj_l.matlabCodegenIsDeleted = false;
  ex4_statecart_DW.obj_l.SampleTime = ex4_statecart_P.AnalogInput1_SampleTime;
  ex4_statecart_DW.obj_l.isInitialized = 1L;
  ex4_statecart_DW.obj_l.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
    MW_AnalogInSingle_Open(56UL);
  ex4_statecart_DW.obj_l.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Analog Input' */
  ex4_statecart_DW.obj_n.matlabCodegenIsDeleted = false;
  ex4_statecart_DW.obj_n.SampleTime = ex4_statecart_P.AnalogInput_SampleTime;
  ex4_statecart_DW.obj_n.isInitialized = 1L;
  ex4_statecart_DW.obj_n.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
    MW_AnalogInSingle_Open(57UL);
  ex4_statecart_DW.obj_n.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Analog Input2' */
  ex4_statecart_DW.obj.matlabCodegenIsDeleted = false;
  ex4_statecart_DW.obj.SampleTime = ex4_statecart_P.AnalogInput2_SampleTime;
  ex4_statecart_DW.obj.isInitialized = 1L;
  ex4_statecart_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
    MW_AnalogInSingle_Open(55UL);
  ex4_statecart_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output' */
  ex4_statecart_DW.obj_n2.matlabCodegenIsDeleted = false;
  ex4_statecart_DW.obj_n2.isInitialized = 1L;
  digitalIOSetup(10, 1);
  ex4_statecart_DW.obj_n2.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output1' */
  ex4_statecart_DW.obj_j.matlabCodegenIsDeleted = false;
  ex4_statecart_DW.obj_j.isInitialized = 1L;
  digitalIOSetup(11, 1);
  ex4_statecart_DW.obj_j.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output2' */
  ex4_statecart_DW.obj_m.matlabCodegenIsDeleted = false;
  ex4_statecart_DW.obj_m.isInitialized = 1L;
  digitalIOSetup(12, 1);
  ex4_statecart_DW.obj_m.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output3' */
  ex4_statecart_DW.obj_i.matlabCodegenIsDeleted = false;
  ex4_statecart_DW.obj_i.isInitialized = 1L;
  digitalIOSetup(13, 1);
  ex4_statecart_DW.obj_i.isSetupComplete = true;
}

/* Model terminate function */
void ex4_statecart_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Analog Input1' */
  if (!ex4_statecart_DW.obj_l.matlabCodegenIsDeleted) {
    ex4_statecart_DW.obj_l.matlabCodegenIsDeleted = true;
    if ((ex4_statecart_DW.obj_l.isInitialized == 1L) &&
        ex4_statecart_DW.obj_l.isSetupComplete) {
      ex4_statecart_DW.obj_l.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
        MW_AnalogIn_GetHandle(56UL);
      MW_AnalogIn_Close
        (ex4_statecart_DW.obj_l.AnalogInDriverObj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Input1' */

  /* Terminate for MATLABSystem: '<Root>/Analog Input' */
  if (!ex4_statecart_DW.obj_n.matlabCodegenIsDeleted) {
    ex4_statecart_DW.obj_n.matlabCodegenIsDeleted = true;
    if ((ex4_statecart_DW.obj_n.isInitialized == 1L) &&
        ex4_statecart_DW.obj_n.isSetupComplete) {
      ex4_statecart_DW.obj_n.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
        MW_AnalogIn_GetHandle(57UL);
      MW_AnalogIn_Close
        (ex4_statecart_DW.obj_n.AnalogInDriverObj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Input' */

  /* Terminate for MATLABSystem: '<Root>/Analog Input2' */
  if (!ex4_statecart_DW.obj.matlabCodegenIsDeleted) {
    ex4_statecart_DW.obj.matlabCodegenIsDeleted = true;
    if ((ex4_statecart_DW.obj.isInitialized == 1L) &&
        ex4_statecart_DW.obj.isSetupComplete) {
      ex4_statecart_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE =
        MW_AnalogIn_GetHandle(55UL);
      MW_AnalogIn_Close
        (ex4_statecart_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Input2' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  if (!ex4_statecart_DW.obj_n2.matlabCodegenIsDeleted) {
    ex4_statecart_DW.obj_n2.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output1' */
  if (!ex4_statecart_DW.obj_j.matlabCodegenIsDeleted) {
    ex4_statecart_DW.obj_j.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output1' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output2' */
  if (!ex4_statecart_DW.obj_m.matlabCodegenIsDeleted) {
    ex4_statecart_DW.obj_m.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output2' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output3' */
  if (!ex4_statecart_DW.obj_i.matlabCodegenIsDeleted) {
    ex4_statecart_DW.obj_i.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output3' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
