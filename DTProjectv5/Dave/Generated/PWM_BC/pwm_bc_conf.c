/*********************************************************************************************************************
* DAVE APP Name : PWM_BC       APP Version: 4.0.16
*
* NOTE:
* This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
*********************************************************************************************************************/

/**
 * @cond
 ***********************************************************************************************************************
 *
 * Copyright (c) 2015-2017, Infineon Technologies AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the
 * following conditions are met:
 *
 *   Redistributions of source code must retain the above copyright notice, this list of conditions and the  following
 *   disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
 *   following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 *   Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * To improve the quality of the software, users are encouraged to share modifications, enhancements or bug fixes
 * with Infineon Technologies AG (dave@infineon.com).
 ***********************************************************************************************************************
 *
 * Change History
 * --------------
 *
 * 2015-02-20:
 *     - Initial version
 *
 * 2015-06-20:
 *     - Sync start functionality updated
 *
 * @endcond
 *
 */

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/
#include "pwm_bc.h"


/**********************************************************************************************************************
* DATA STRUCTURES
**********************************************************************************************************************/

/********************************** PWM Output Pin Configurations **************************************************/
/*pwm port & pin config*/
const PWM_BC_GPIO_t PWM_BC_0_PhUHighpin =
{
  .port = (XMC_GPIO_PORT_t *)PORT0_BASE, 
  .pin = 5U
};
/*pwm port & pin config*/
const PWM_BC_GPIO_t PWM_BC_0_PhULowpin =
{
  .port = (XMC_GPIO_PORT_t *)PORT0_BASE, 
  .pin = 2U
};
/*pwm port & pin config*/
const PWM_BC_GPIO_t PWM_BC_0_PhVHighpin =
{
  .port = (XMC_GPIO_PORT_t *)PORT0_BASE, 
  .pin = 4U
};
/*pwm port & pin config*/
const PWM_BC_GPIO_t PWM_BC_0_PhVLowpin =
{
  .port = (XMC_GPIO_PORT_t *)PORT0_BASE, 
  .pin = 1U
};
/*pwm port & pin config*/
const PWM_BC_GPIO_t PWM_BC_0_PhWHighpin =
{
  .port = (XMC_GPIO_PORT_t *)PORT0_BASE, 
  .pin = 3U
};
/*pwm port & pin config*/
const PWM_BC_GPIO_t PWM_BC_0_PhWLowpin =
{
  .port = (XMC_GPIO_PORT_t *)PORT0_BASE, 
  .pin = 0U
};

/* GPIO Init handle for Phase U High Pin */
const XMC_GPIO_CONFIG_t PWM_BC_0_PhUHighpin_Config= 
{
 .mode            = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3,
 .output_level    = XMC_GPIO_OUTPUT_LEVEL_LOW,
 .output_strength = XMC_GPIO_OUTPUT_STRENGTH_MEDIUM
};
/* GPIO Init handle for Phase U Low Pin */
const XMC_GPIO_CONFIG_t PWM_BC_0_PhULowpin_Config = 
{
 .mode            = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3,
 .output_level    = XMC_GPIO_OUTPUT_LEVEL_LOW,
 .output_strength = XMC_GPIO_OUTPUT_STRENGTH_MEDIUM
};
/* GPIO Init handle for Phase V High Pin */
const XMC_GPIO_CONFIG_t PWM_BC_0_PhVHighpin_Config = 
{
 .mode            = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3,
 .output_level    = XMC_GPIO_OUTPUT_LEVEL_LOW,
 .output_strength = XMC_GPIO_OUTPUT_STRENGTH_MEDIUM
};
/* GPIO Init handle for Phase V Low Pin */
const XMC_GPIO_CONFIG_t PWM_BC_0_PhVLowpin_Config = 
{
 .mode            = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3,
 .output_level    = XMC_GPIO_OUTPUT_LEVEL_LOW,
 .output_strength = XMC_GPIO_OUTPUT_STRENGTH_MEDIUM
};
/* GPIO Init handle for Phase W High Pin */
const XMC_GPIO_CONFIG_t PWM_BC_0_PhWHighpin_Config = 
{
 .mode            = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3,
 .output_level    = XMC_GPIO_OUTPUT_LEVEL_LOW,
 .output_strength = XMC_GPIO_OUTPUT_STRENGTH_MEDIUM
};
/* GPIO Init handle for Phase U High Pin */
const XMC_GPIO_CONFIG_t PWM_BC_0_PhWLowpin_Config = 
{
 .mode            = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3,
 .output_level    = XMC_GPIO_OUTPUT_LEVEL_LOW,
 .output_strength = XMC_GPIO_OUTPUT_STRENGTH_MEDIUM
};

/********************************** Inverter Enable Pin Configurations **************************************************/
const PWM_BC_GPIO_t PWM_BC_0_Inverterpin =
{
  .port = (XMC_GPIO_PORT_t *)PORT5_BASE,
  .pin = 2U
};

/* GPIO Init handle for Inverter enable Pin */
const XMC_GPIO_CONFIG_t PWM_BC_0_Inverterpin_Config = 
{
 .mode             = XMC_GPIO_MODE_OUTPUT_PUSH_PULL,
 .output_level     = XMC_GPIO_OUTPUT_LEVEL_LOW,
 .output_strength  = XMC_GPIO_OUTPUT_STRENGTH_MEDIUM,
};

/**********************************POSIF Multi Channel Mode Configurations ***************************************/
/*posif MCM configuration*/
XMC_POSIF_MCM_CONFIG_t PWM_BC_0_POSIF_MCM_Config = 
{
 .pattern_sw_update = (uint8_t)true,
 .pattern_update_trigger = XMC_POSIF_INPUT_PORT_A,
 .pattern_trigger_edge   = XMC_POSIF_HSC_TRIGGER_EDGE_RISING,
 .pwm_sync          = (uint8_t)XMC_POSIF_INPUT_PORT_A
};

/********************************** CCU8 PWM Configurations **************************************************/

/*Slice U configuration*/
const PWM_BC_SLICE_t PWM_BC_0_SliceUConfig = 
{
 .slice_ptr     = (XMC_CCU8_SLICE_t *)(void *)CCU80_CC80,
 .slice_number  = (uint8_t)0,
};

/*Slice V configuration*/
const PWM_BC_SLICE_t PWM_BC_0_SliceVConfig = 
{
 .slice_ptr     = (XMC_CCU8_SLICE_t *)(void *)CCU80_CC81,
 .slice_number  = (uint8_t)1,
};

/*Slice W configuration*/
const PWM_BC_SLICE_t PWM_BC_0_SliceWConfig = 
{
 .slice_ptr     = (XMC_CCU8_SLICE_t *)(void *)CCU80_CC82,
 .slice_number  = (uint8_t)2,
};

/*External start event config*/
const XMC_CCU8_SLICE_EVENT_CONFIG_t PWM_BC_0_ExtStartConfig = 
{
  .mapped_input = XMC_CCU8_SLICE_INPUT_H,
  .edge         = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_RISING_EDGE,
  .duration     = XMC_CCU8_SLICE_EVENT_FILTER_DISABLED
};

/*CCU8 deadtime configuration*/
XMC_CCU8_SLICE_DEAD_TIME_CONFIG_t PWM_BC_0_Phase_DeadTimeConfig =
{
 .enable_dead_time_channel1         = 1U,
 .enable_dead_time_channel2         = 1U,
 .channel1_st_path                  = (uint8_t)false,
 .channel1_inv_st_path              = (uint8_t)false,
 .channel2_st_path                  = (uint8_t)false,
 .channel2_inv_st_path              = (uint8_t)false,  
 .div                               = (uint8_t)XMC_CCU8_SLICE_DTC_DIV_1,
 .channel1_st_rising_edge_counter   = 60U,
 .channel1_st_falling_edge_counter  = 60U,
 .channel2_st_rising_edge_counter   = 60U,
 .channel2_st_falling_edge_counter  = 60U,  
};
/* CC8 Slice timer Init handle */
const XMC_CCU8_SLICE_COMPARE_CONFIG_t PWM_BC_0_Timer_InitHandle =
{
  .timer_mode           = (uint8_t)XMC_CCU8_SLICE_TIMER_COUNT_MODE_CA,
  .monoshot             = 0U,
  .shadow_xfer_clear    = 0U,
  .dither_timer_period  = 0U,
  .dither_duty_cycle    = 0U,
  .prescaler_mode       = (uint8_t)XMC_CCU8_SLICE_PRESCALER_MODE_NORMAL,
  .mcm_ch1_enable       = 1U,
  .mcm_ch2_enable       = 1U,
  .slice_status         = (uint8_t)XMC_CCU8_SLICE_STATUS_CHANNEL_1,
  .passive_level_out0   = 1U,
  .passive_level_out1   = 1U,
  .passive_level_out2   = 1U,
  .passive_level_out3   = 1U,
  .asymmetric_pwm       = 0U, 
#if !defined(CCU8V3)    /* Defined for all devices except XMC1400 */                                         
  .invert_out0          = 0U,
  .invert_out1          = 1U,
  .invert_out2          = 0U,
  .invert_out3          = 1U,
#else
  .selector_out0        = XMC_CCU8_SOURCE_OUT0_ST1,
  .selector_out1        = XMC_CCU8_SOURCE_OUT1_INV_ST1,
  .selector_out2        = XMC_CCU8_SOURCE_OUT2_ST2,
  .selector_out3        = XMC_CCU8_SOURCE_OUT2_INV_ST2,
#endif
  .prescaler_initval    = (uint8_t)0,
  .float_limit          = 0U,
  .dither_limit         = 0U,
  .timer_concatenation  = 0U
};

/********************************** App Constant Config **************************************************/

const PWM_BC_Config_t PWM_BC_0_Config =
{
  .ph_mcpatt_compmask     = 
                            {
                             0x1U, 
                             0x10U,
                             0x100U,
                            },
  .ph_bothside_compmask   = 
                            {
                             0x3U, 
                             0x30U,
                             0x300U,
                            },
  .module_freq            = (uint32_t)120000000,
  .syncstart_mask         = 0x100U,
  .event_sr_selector      =
                            {
                              0x3U, 0x0U, 
                              0x0U
                            },
  .frequency_max          = (uint32_t)60000002,
  .frequency_min          = (uint32_t)1831,
  .inverter_pin           = (PWM_BC_INVERTERPINLEVEL_t)PWM_BC_IPIN_HIGH, 
  .phu_cmpch              = (XMC_CCU8_SLICE_COMPARE_CHANNEL_t)XMC_CCU8_SLICE_COMPARE_CHANNEL_1, 
  .phv_cmpch              = (XMC_CCU8_SLICE_COMPARE_CHANNEL_t)XMC_CCU8_SLICE_COMPARE_CHANNEL_1,  
  .phw_cmpch              = (XMC_CCU8_SLICE_COMPARE_CHANNEL_t)XMC_CCU8_SLICE_COMPARE_CHANNEL_1,
  .trap_exit_mode         = (XMC_CCU8_SLICE_TRAP_EXIT_MODE_t)XMC_CCU8_SLICE_TRAP_EXIT_MODE_AUTOMATIC,
  .openloop_mc_pattern    = { 
                              0x0U, 0x120U, 0x21U, 0x201U, 
                              0x210U, 0x12U, 0x102U, 0x00U,
                              0x0U, 0x102U, 0x12U, 0x210U, 
                              0x201U, 0x21U, 0x120U, 0x00U
                            },
  .shadowtransfer_mask    = 0x111U,
  .trap_sync_pwm          = (uint8_t)false, 
  .deadtime_control       = {0xdU, 0xdU, 0xdU},  
  .trap_enable            = (uint8_t)false,
  .syncstart_enable       = (uint8_t)1,

	.trap_hwsel           =  0U,


  .phase_u_out0           = (uint8_t)XMC_CCU8_SLICE_OUTPUT_0,
  .phase_v_out0           = (uint8_t)XMC_CCU8_SLICE_OUTPUT_0,
  .phase_w_out0           = (uint8_t)XMC_CCU8_SLICE_OUTPUT_0,
  .ext_trigger            = (uint8_t)false,  
  .enable_permatchevent   = (uint8_t)true,   
  .enable_trapevent       = (uint8_t)false,   
};

/**********************************App Handle Configurations **************************************************/
/* App Handle */
PWM_BC_t PWM_BC_0 =
{
  .module_ptr             = (XMC_CCU8_MODULE_t *)(void*)CCU80_BASE, 
  .phase_ptr              = 
                            {
                              (PWM_BC_SLICE_t *)(void*)&PWM_BC_0_SliceUConfig,
                              (PWM_BC_SLICE_t *)(void*)&PWM_BC_0_SliceVConfig,
                              (PWM_BC_SLICE_t *)(void*)&PWM_BC_0_SliceWConfig
                            },  
  .posif_module_ptr       = (POSIF_GLOBAL_TypeDef *)(void*)POSIF0,
  .posif_mcmconf_ptr      = &PWM_BC_0_POSIF_MCM_Config,
  .global_posif_ptr       = (GLOBAL_POSIF_t*)(void*)&GLOBAL_POSIF_0,
  .globalccu8_ptr         = (GLOBAL_CCU8_t*)(void*)&GLOBAL_CCU8_0, 
  .ph_timerinit_ptr       = (XMC_CCU8_SLICE_COMPARE_CONFIG_t* )(void*)&PWM_BC_0_Timer_InitHandle,
  .startconfig_ptr        = (XMC_CCU8_SLICE_EVENT_CONFIG_t*)(void*)&PWM_BC_0_ExtStartConfig,
  .pwmoutpin_ptr          =
                            {
                              &PWM_BC_0_PhUHighpin,
                              &PWM_BC_0_PhULowpin,
                              &PWM_BC_0_PhVHighpin,
                              &PWM_BC_0_PhVLowpin,
                              &PWM_BC_0_PhWHighpin,
                              &PWM_BC_0_PhWLowpin,
                            },
  .pwmoutconfig_ptr        =
                            {
                              &PWM_BC_0_PhUHighpin_Config,
                              &PWM_BC_0_PhULowpin_Config,
                              &PWM_BC_0_PhVHighpin_Config,
                              &PWM_BC_0_PhVLowpin_Config,
                              &PWM_BC_0_PhWHighpin_Config,
                              &PWM_BC_0_PhWLowpin_Config,
                            },

  .trapconfig_ptr         = NULL,
  .trapinpin_ptr          = NULL,
  .trapinconfig_ptr       = NULL,

  .inverterpin_ptr        = &PWM_BC_0_Inverterpin,
  .inverterpinconfig_ptr  = &PWM_BC_0_Inverterpin_Config,

  .config_ptr             = &PWM_BC_0_Config,
  .deadtimeconfig_ptr     = (XMC_CCU8_SLICE_DEAD_TIME_CONFIG_t*)(void*)&PWM_BC_0_Phase_DeadTimeConfig,
  .state                  = PWM_BC_UNINITIALIZED,
  .direction              = PWM_BC_CLOCKWISE,
  .modulation_type        = PWM_BC_LOWSIDE_MOD, 
  .period                 = (uint16_t)2999,  
  .mc_pattern             = {
                              { 
                                0x0U, 0x120U, 0x21U, 0x201U, 
                                0x210U, 0x12U, 0x102U, 0x00U,
                                0x0U, 0x102U, 0x12U, 0x210U, 
                                0x201U, 0x21U, 0x120U, 0x00U
                              }, 
                              {
                                0x0U, 0x120U, 0x21U, 0x201U, 
                                0x210U, 0x12U, 0x102U, 0x00U,
                                0x0U, 0x102U, 0x12U, 0x210U, 
                                0x201U, 0x21U, 0x120U, 0x00U
                              }, 
                              {
                                 0x0U, 0x320U, 0x23U, 0x203U, 
                                 0x230U, 0x32U, 0x302U, 0x00U,
                                 0x0U, 0x302U, 0x32U, 0x230U, 
                                 0x203U, 0x23U, 0x320U, 0x00U
                              },
                              {
                                 0x0U, 0x130U, 0x23U, 0x301U, 
                                 0x230U, 0x13U, 0x302U, 0x00U,
                                 0x203U, 0x103U, 0x32U, 0x310U, 
                                 0x203U, 0x31U, 0x320U, 0x00U
                              },
                            } 
};


