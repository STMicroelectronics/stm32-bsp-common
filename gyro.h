/**
  ******************************************************************************
  * @file    gyro.h
  * @author  MCD Application Team
  * @brief   This header file contains the functions prototypes for the gyroscope driver.
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
#ifndef __GYRO_H
#define __GYRO_H

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
    
/** @addtogroup GYRO
  * @{
  */

/** @defgroup GYRO_Exported_Types
  * @{
  */

/** @defgroup GYRO_Driver_structure  Gyroscope Driver structure
  * @{
  */
typedef struct
{  
  void       (*Init)(uint16_t);
  void       (*DeInit)(void); 
  uint8_t    (*ReadID)(void);
  void       (*Reset)(void);
  void       (*LowPower)(uint16_t);   
  void       (*ConfigIT)(uint16_t); 
  void       (*EnableIT)(uint8_t);
  void       (*DisableIT)(uint8_t);  
  uint8_t    (*ITStatus)(uint16_t, uint16_t);   
  void       (*ClearIT)(uint16_t, uint16_t); 
  void       (*FilterConfig)(uint8_t);  
  void       (*FilterCmd)(uint8_t);  
  void       (*GetXYZ)(float *);
}GYRO_DrvTypeDef;
/**
  * @}
  */

/** @defgroup GYRO_Config_structure  Gyroscope Configuration structure
  * @{
  */

typedef struct
{
  uint8_t Power_Mode;                         /* Power-down/Sleep/Normal Mode */
  uint8_t Output_DataRate;                    /* OUT data rate */
  uint8_t Axes_Enable;                        /* Axes enable */
  uint8_t Band_Width;                         /* Bandwidth selection */
  uint8_t BlockData_Update;                   /* Block Data Update */
  uint8_t Endianness;                         /* Endian Data selection */
  uint8_t Full_Scale;                         /* Full Scale selection */
}GYRO_InitTypeDef;

/* GYRO High Pass Filter struct */
typedef struct
{
  uint8_t HighPassFilter_Mode_Selection;      /* Internal filter mode */
  uint8_t HighPassFilter_CutOff_Frequency;    /* High pass filter cut-off frequency */
}GYRO_FilterConfigTypeDef;

/*GYRO Interrupt struct */
typedef struct
{
  uint8_t Latch_Request;                      /* Latch interrupt request into CLICK_SRC register */
  uint8_t Interrupt_Axes;                     /* X, Y, Z Axes Interrupts */ 
  uint8_t Interrupt_ActiveEdge;               /* Interrupt Active edge */
}GYRO_InterruptConfigTypeDef;  

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

#endif /* __GYRO_H */
