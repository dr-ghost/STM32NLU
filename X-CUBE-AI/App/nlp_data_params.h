/**
  ******************************************************************************
  * @file    nlp_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Sun May  5 04:59:41 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef NLP_DATA_PARAMS_H
#define NLP_DATA_PARAMS_H

#include "ai_platform.h"

/*
#define AI_NLP_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_nlp_data_weights_params[1]))
*/

#define AI_NLP_DATA_CONFIG               (NULL)


#define AI_NLP_DATA_ACTIVATIONS_SIZES \
  { 120, }
#define AI_NLP_DATA_ACTIVATIONS_SIZE     (120)
#define AI_NLP_DATA_ACTIVATIONS_COUNT    (1)
#define AI_NLP_DATA_ACTIVATION_1_SIZE    (120)



#define AI_NLP_DATA_WEIGHTS_SIZES \
  { 2068, }
#define AI_NLP_DATA_WEIGHTS_SIZE         (2068)
#define AI_NLP_DATA_WEIGHTS_COUNT        (1)
#define AI_NLP_DATA_WEIGHT_1_SIZE        (2068)



#define AI_NLP_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_nlp_activations_table[1])

extern ai_handle g_nlp_activations_table[1 + 2];



#define AI_NLP_DATA_WEIGHTS_TABLE_GET() \
  (&g_nlp_weights_table[1])

extern ai_handle g_nlp_weights_table[1 + 2];


#endif    /* NLP_DATA_PARAMS_H */
