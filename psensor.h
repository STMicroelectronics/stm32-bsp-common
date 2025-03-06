/**
  ******************************************************************************
  * @file    psensor.h
  * @author  MCD Application Team
  * @brief   This header file contains the functions prototypes for the
  *          Pressure Sensor driver.
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
#ifndef __PSENSOR_H
#define __PSENSOR_H

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
    
/** @addtogroup PSENSOR
  * @{
  */

/** @defgroup PSENSOR_Exported_Types
  * @{
  */ 

/** @defgroup PSENSOR_Driver_structure  Pressure Sensor Driver structure
  * @{
  */
typedef struct
{  
  void       (*Init)(uint16_t);
  uint8_t    (*ReadID)(uint16_t);
  float      (*ReadPressure)(uint16_t);
}PSENSOR_DrvTypeDef;
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

#endif /* __PSENSOR_H */
