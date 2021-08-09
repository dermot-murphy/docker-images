/********************************************************************************
 *
 * (c) Copyright 2020, CANembed Limited.
 * ALL RIGHTS RESERVED
 *
 * The software and information contained herein are proprietary to, and
 * comprise valuable trade secrets of CANembed Limited,
 * which intends to preserve as trade secrets such software and information.
 *
 * This software is furnished pursuant to a written license agreement and may be
 * used, copied, transmitted, and stored only in accordance with the terms of
 * such license and with the inclusion of the above copyright notice.
 * This software and information or any other copies thereof may not be provided
 * or otherwise made available to any other person.
 *
 *******************************************************************************
 *
 *   $Author: $
 *
 *     $Date: $
 *
 * $Revision: $
 *
 *******************************************************************************/

/**
 * @defgroup APP_Manager		APP: APP Manager
 *
 * \{
 *
 * \author      Dermot Murphy
 *
 * \brief	APP Manager
 *
 * \par	Overview:
 * Manager APP components
 *
 * \par Configuration
 * Configuration of this component is via the app_manager_cfg.h file.
 *
 */

/*******************************************************************************
 * Include Files
 ******************************************************************************/

/* This component */
#define		APP_MANAGER_C
#include	"app_manager.h"

/* Application Layer */
#include	"app_cli.h"

/*******************************************************************************
 * Static Analysis File Scope
 ******************************************************************************/

/*******************************************************************************
 * Linker Control
 ******************************************************************************/

#define	APP_MANAGER_C_START
#include	"memmap.h"

/*******************************************************************************
 * Public Variables
 ******************************************************************************/

/*******************************************************************************
 * Private Defines, TypeDefs, Constants, Variables
 ******************************************************************************/

/*******************************************************************************
 * Private Functions
 ******************************************************************************/

/*******************************************************************************
 * Public Functions
 ******************************************************************************/

/*------------------------------------------------------------------------------
 *
 * APP_MANAGER_PowerOnInit
 *
 *----------------------------------------------------------------------------*/
/**
 * Module power on initialisation
 *
 *----------------------------------------------------------------------------*/

void APP_MANAGER_PowerOnInit (void)
{
	APP_CLI_PowerOnInit() ;
}

/*------------------------------------------------------------------------------
 *
 * APP_MANAGER_Init
 *
 *----------------------------------------------------------------------------*/
/**
 * Initialise the component while running
 *
 *----------------------------------------------------------------------------*/

void APP_MANAGER_Init (void)
{
	APP_CLI_Init() ;
}

/*------------------------------------------------------------------------------
 *
 * APP_MANAGER_Deinit
 *
 *----------------------------------------------------------------------------*/
/**
 * Deinitialise the component while running
 *
 *----------------------------------------------------------------------------*/

void APP_MANAGER_Deinit (void)
{
}

/** \} */
/* Template: V1.3 */
/* EOF: app_manager.c */
