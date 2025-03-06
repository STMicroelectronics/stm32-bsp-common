/**
  ******************************************************************************
  * @file    io.h
  * @author  MCD Application Team
  * @brief   This file contains all the functions prototypes for the IO driver.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */ 

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __IO_H
#define __IO_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>

/** @addtogroup BSP
  * @{
  */

/** @addtogroup Components
  * @{
  */
    
/** @addtogroup IO
  * @{
  */

/** @defgroup IO_Exported_Types
  * @{
  */

/**
  * @brief  IO Bit SET and Bit RESET enumeration
  */
typedef enum
{
  IO_PIN_RESET = 0,
  IO_PIN_SET
}IO_PinState;

typedef enum
{
   IO_MODE_INPUT = 0,   /* input floating */
   IO_MODE_OUTPUT,      /* output Push Pull */
   IO_MODE_IT_RISING_EDGE,   /* float input - irq detect on rising edge */
   IO_MODE_IT_FALLING_EDGE,  /* float input - irq detect on falling edge */
   IO_MODE_IT_LOW_LEVEL,     /* float input - irq detect on low level */
   IO_MODE_IT_HIGH_LEVEL,    /* float input - irq detect on high level */
   /* following modes only available on MFX*/
   IO_MODE_ANALOG,           /* analog mode */
   IO_MODE_OFF,              /* when pin isn't used*/
   IO_MODE_INPUT_PU,         /* input with internal pull up resistor */
   IO_MODE_INPUT_PD,         /* input with internal pull down resistor */
   IO_MODE_OUTPUT_OD,          /* Open Drain output without internal resistor */
   IO_MODE_OUTPUT_OD_PU,       /* Open Drain output with  internal pullup resistor */
   IO_MODE_OUTPUT_OD_PD,       /* Open Drain output with  internal pulldown resistor */
   IO_MODE_OUTPUT_PP,          /* PushPull output without internal resistor */
   IO_MODE_OUTPUT_PP_PU,       /* PushPull output with  internal pullup resistor */
   IO_MODE_OUTPUT_PP_PD,       /* PushPull output with  internal pulldown resistor */
   IO_MODE_IT_RISING_EDGE_PU,   /* push up resistor input - irq on rising edge  */
   IO_MODE_IT_RISING_EDGE_PD,   /* push dw resistor input - irq on rising edge  */
   IO_MODE_IT_FALLING_EDGE_PU,  /* push up resistor input - irq on falling edge */
   IO_MODE_IT_FALLING_EDGE_PD,  /* push dw resistor input - irq on falling edge */
   IO_MODE_IT_LOW_LEVEL_PU,     /* push up resistor input - irq detect on low level */
   IO_MODE_IT_LOW_LEVEL_PD,     /* push dw resistor input - irq detect on low level */
   IO_MODE_IT_HIGH_LEVEL_PU,    /* push up resistor input - irq detect on high level */
   IO_MODE_IT_HIGH_LEVEL_PD,    /* push dw resistor input - irq detect on high level */

}IO_ModeTypedef;

/** @defgroup IO_Driver_structure  IO Driver structure
  * @{
  */
typedef struct
{  
  void       (*Init)(uint16_t);
  uint16_t   (*ReadID)(uint16_t);
  void       (*Reset)(uint16_t);
  
  void       (*Start)(uint16_t, uint32_t);
  uint8_t    (*Config)(uint16_t, uint32_t, IO_ModeTypedef);
  void       (*WritePin)(uint16_t, uint32_t, uint8_t);
  uint32_t   (*ReadPin)(uint16_t, uint32_t);
  
  void       (*EnableIT)(uint16_t);
  void       (*DisableIT)(uint16_t);
  uint32_t    (*ITStatus)(uint16_t, uint32_t);
  void       (*ClearIT)(uint16_t, uint32_t);
    
}IO_DrvTypeDef;
/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __IO_H */
