
/**
 * @cond
 ***********************************************************************************************************************
 *
 * Copyright (c) 2015, Infineon Technologies AG
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
 * 2014-06-16:
 *     - Initial version<br>
 * 2015-08-28:
 *     - Added CLOCK_XMC1_Init conditionally
 *
 * @endcond
 *
 */

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/
#include "DAVE.h"

/***********************************************************************************************************************
 * API IMPLEMENTATION
 **********************************************************************************************************************/

/*******************************************************************************
 * @brief This function initializes the APPs Init Functions.
 *
 * @param[in]  None
 *
 * @return  DAVE_STATUS_t <BR>
 ******************************************************************************/
DAVE_STATUS_t DAVE_Init(void)
{
  DAVE_STATUS_t init_status;
  
  init_status = DAVE_STATUS_SUCCESS;
     /** @Initialization of APPs Init Functions */
     init_status = (DAVE_STATUS_t)CLOCK_XMC4_Init(&CLOCK_XMC4_0);

  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance Hall1 */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&Hall1); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance Hall2 */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&Hall2); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance LED2 */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&LED2); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance LED1 */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&LED1); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of INTERRUPT APP instance PeriodMatchInt */
	 init_status = (DAVE_STATUS_t)INTERRUPT_Init(&PeriodMatchInt); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance BTN_1 */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&BTN_1); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance BTN_2 */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&BTN_2); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of PWM_BC APP instance PWM_BC_0 */
	 init_status = (DAVE_STATUS_t)PWM_BC_Init(&PWM_BC_0); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance O_G_EN */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&O_G_EN); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance I_nFAULT */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&I_nFAULT); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance Hall3 */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&Hall3); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of TIMER APP instance LCD_Timer */
	 init_status = (DAVE_STATUS_t)TIMER_Init(&LCD_Timer); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance Motor_Start */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&Motor_Start); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance IN_Temp */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&IN_Temp); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance LCD_Enable */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&LCD_Enable); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance LCD_RS */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&LCD_RS); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of INTERRUPT APP instance INT_LCD_Timer */
	 init_status = (DAVE_STATUS_t)INTERRUPT_Init(&INT_LCD_Timer); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of BUS_IO APP instance LCD_DATA */
	 init_status = (DAVE_STATUS_t)BUS_IO_Init(&LCD_DATA); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance LCD_RW */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&LCD_RW); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of ADC_MEASUREMENT APP instance ADC_Voltage */
	 init_status = (DAVE_STATUS_t)ADC_MEASUREMENT_Init(&ADC_Voltage); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of EVENT_DETECTOR APP instance EVENT_DETECTOR_0 */
	 init_status = (DAVE_STATUS_t)EVENT_DETECTOR_Init(&EVENT_DETECTOR_0); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of EVENT_GENERATOR APP instance EVENT_GENERATOR_0 */
	 init_status = (DAVE_STATUS_t)EVENT_GENERATOR_Init(&EVENT_GENERATOR_0); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of INTERRUPT APP instance INT_Timer1000ms */
	 init_status = (DAVE_STATUS_t)INTERRUPT_Init(&INT_Timer1000ms); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of TIMER APP instance Timer_1000ms */
	 init_status = (DAVE_STATUS_t)TIMER_Init(&Timer_1000ms); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of INTERRUPT APP instance INT_Hall1 */
	 init_status = (DAVE_STATUS_t)INTERRUPT_Init(&INT_Hall1); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of TIMER APP instance Timer_debouncing */
	 init_status = (DAVE_STATUS_t)TIMER_Init(&Timer_debouncing); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of INTERRUPT APP instance INT_Timer20ms */
	 init_status = (DAVE_STATUS_t)INTERRUPT_Init(&INT_Timer20ms); 
   }  
  return init_status;
} /**  End of function DAVE_Init */

