/**
 * @file global_posif.c
 * @date 2015-10-08
 *
 * NOTE:
 * This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
 *
 * @cond
 ***********************************************************************************************************************
 * GLOBAL_POSIF v4.0.14 - Configures the POSIF module global settings.
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
 *
 * @endcond
 *
 */

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/
#include "global_posif.h"
/***********************************************************************************************************************
 * MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * LOCAL DATA
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * LOCAL ROUTINES
 **********************************************************************************************************************/

 /**********************************************************************************************************************
 * API IMPLEMENTATION
 **********************************************************************************************************************/
/* Returns the version of the GLOBAL_POSIF APP. */
DAVE_APP_VERSION_t GLOBAL_POSIF_GetAppVersion(void)
{
  DAVE_APP_VERSION_t version;

  version.major = GLOBAL_POSIF_MAJOR_VERSION;
  version.minor = GLOBAL_POSIF_MINOR_VERSION;
  version.patch = GLOBAL_POSIF_PATCH_VERSION;

  return version;
}

/**
 * This function initializes the global_posif app and low level app.
 */
GLOBAL_POSIF_STATUS_t GLOBAL_POSIF_Init(GLOBAL_POSIF_t*const HandlePtr)
{
  GLOBAL_POSIF_STATUS_t status = GLOBAL_POSIF_STATUS_SUCCESS;

  if (GLOBAL_POSIF_STATE_UNINITIALISED == HandlePtr->state)
  {  
    /*Enable the posif Module*/
    XMC_POSIF_Enable(HandlePtr->moduleptr);
    XMC_POSIF_SetMode(HandlePtr->moduleptr, XMC_POSIF_MODE_MCM);

    HandlePtr->state = GLOBAL_POSIF_STATE_INITIALISED;
  }

  return status ;
}


