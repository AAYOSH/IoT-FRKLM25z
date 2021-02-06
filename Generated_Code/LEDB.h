/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : LEDB.h
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : LED
**     Version     : Component 01.077, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2020-12-27, 14:54, # CodeGen: 2
**     Abstract    :
**          This component implements a universal driver for a single LED.
**     Settings    :
**          Component name                                 : LEDB
**          Turned On with initialization                  : no
**          HW Interface                                   : 
**            On/Off                                       : Enabled
**              Pin                                        : LEDpin
**            PWM                                          : Disabled
**            High Value means ON                          : no
**          Shell                                          : Disabled
**     Contents    :
**         On         - void LEDB_On(void);
**         Off        - void LEDB_Off(void);
**         Neg        - void LEDB_Neg(void);
**         Get        - uint8_t LEDB_Get(void);
**         Put        - void LEDB_Put(uint8_t val);
**         SetRatio16 - void LEDB_SetRatio16(uint16_t ratio);
**         Deinit     - void LEDB_Deinit(void);
**         Init       - void LEDB_Init(void);
**
**Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**
**http      : www.freescale.com
**mail      : support@freescale.com
** ###################################################################*/
/*!
** @file LEDB.h
** @version 01.00
** @brief
**          This component implements a universal driver for a single LED.
*/         
/*!
**  @addtogroup LEDB_module LEDB module documentation
**  @{
*/         

#ifndef __LEDB_H
#define __LEDB_H

/* MODULE LEDB. */
#include "MCUC1.h" /* SDK and API used */
#include "LEDBconfig.h" /* LED configuration */
#include "LEDpin3.h" /* interface to pin */

#define LEDB_ClrVal()    LEDpin3_ClrVal() /* put the pin on low level */
#define LEDB_SetVal()    LEDpin3_SetVal() /* put the pin on high level */
#define LEDB_SetInput()  LEDpin3_SetInput() /* use the pin as input pin */
#define LEDB_SetOutput() LEDpin3_SetOutput() /* use the pin as output pin */

#define LEDB_PARSE_COMMAND_ENABLED  0 /* set to 1 if method ParseCommand() is present, 0 otherwise */


#if LEDB_CONFIG_IS_LOW_ACTIVE
  #define LEDB_On() LEDpin3_ClrVal()
#else
  #define LEDB_On() LEDpin3_SetVal()
#endif
/*
** ===================================================================
**     Method      :  LEDB_On (component LED)
**     Description :
**         This turns the LED on.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#if LEDB_CONFIG_IS_LOW_ACTIVE
  #define LEDB_Off() LEDpin3_SetVal()
#else
  #define LEDB_Off() LEDpin3_ClrVal()
#endif
/*
** ===================================================================
**     Method      :  LEDB_Off (component LED)
**     Description :
**         This turns the LED off.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LEDB_Neg() LEDpin3_NegVal()
/*
** ===================================================================
**     Method      :  LEDB_Neg (component LED)
**     Description :
**         This negates/toggles the LED
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#if LEDB_CONFIG_IS_LOW_ACTIVE
  #define LEDB_Get() (!(LEDpin3_GetVal()))
#else
  #define LEDB_Get() LEDpin3_GetVal()
#endif
/*
** ===================================================================
**     Method      :  LEDB_Get (component LED)
**     Description :
**         This returns logical 1 in case the LED is on, 0 otherwise.
**     Parameters  : None
**     Returns     :
**         ---             - Status of the LED (on or off)
** ===================================================================
*/

void LEDB_Init(void);
/*
** ===================================================================
**     Method      :  LEDB_Init (component LED)
**     Description :
**         Performs the LED driver initialization.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LEDB_Put(val)  ((val) ? LEDB_On() : LEDB_Off())
/*
** ===================================================================
**     Method      :  LEDB_Put (component LED)
**     Description :
**         Turns the LED on or off.
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - value to define if the LED has to be on or
**                           off.
**     Returns     : Nothing
** ===================================================================
*/

void LEDB_Deinit(void);
/*
** ===================================================================
**     Method      :  LEDB_Deinit (component LED)
**     Description :
**         Deinitializes the driver
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LEDB_SetRatio16(uint16_t ratio);
/*
** ===================================================================
**     Method      :  LEDB_SetRatio16 (component LED)
**     Description :
**         Method to specify the duty cycle. If using a PWM pin, this
**         means the duty cycle is set. For On/off pins, values smaller
**         0x7FFF means off, while values greater means on.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ratio           - Ratio value, where 0 means 'off' and
**                           0xffff means 'on'
**     Returns     : Nothing
** ===================================================================
*/

/* END LEDB. */

#endif
/* ifndef __LEDB_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.2 [05.07]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/