/**
  ******************************************************************************
  * @file    hsensor.h
  * @author  MCD Application Team
  * @brief   This header file contains the functions prototypes for the
  *          Humidity Sensor driver.
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
#ifndef __HSENSOR_H
#define __HSENSOR_H

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
    
/** @addtogroup HSENSOR
  * @{
  */

/** @defgroup HSENSOR_Exported_Types
  * @{
  */ 

/** @defgroup HSENSOR_Driver_structure  Humidity Sensor Driver structure
  * @{
  */
typedef struct
{
  void       (*Init)(uint16_t); 
  uint8_t    (*ReadID)(uint16_t);
  float      (*ReadHumidity)(uint16_t); 
}HSENSOR_DrvTypeDef;
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

#endif /* __HSENSOR_H */
