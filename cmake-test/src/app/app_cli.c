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
 * @defgroup APP_Manager		APP: APP CLI
 *
 * \{
 *
 * \author      Dermot Murphy
 *
 * \brief	APP Command Line Interface
 *
 * \par	Overview:
 * Provide a command line interface top level
 *
 * \par Configuration
 * Configuration of this component is via the app_cli_cfg.h file.
 *
 */

/*******************************************************************************
 * Include Files
 ******************************************************************************/

/* This component */
#define		APP_CLI_C
#include	"app_cli.h"

/*******************************************************************************
 * Static Analysis File Scope
 ******************************************************************************/

/*******************************************************************************
 * Linker Control
 ******************************************************************************/

#define	APP_CLI_C_START
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
 * APP_CLI_PowerOnInit
 *
 *----------------------------------------------------------------------------*/
/**
 * Module power on initialisation
 *
 *----------------------------------------------------------------------------*/

void APP_CLI_PowerOnInit (void)
{
}

/*------------------------------------------------------------------------------
 *
 * APP_CLI_Init
 *
 *----------------------------------------------------------------------------*/
/**
 * Initialise the component while running
 *
 *----------------------------------------------------------------------------*/

void APP_CLI_Init (void)
{
	APP_CLI_Init() ;
}

/*------------------------------------------------------------------------------
 *
 * APP_CLI_Deinit
 *
 *----------------------------------------------------------------------------*/
/**
 * Deinitialise the component while running
 *
 *----------------------------------------------------------------------------*/

void APP_CLI_Deinit (void)
{
}

/** \} */
/* Template: V1.3 */
/* EOF: app_cli.c */
