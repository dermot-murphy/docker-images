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
 * @defgroup API_Manager		API: API Manager
 *
 * \{
 *
 * \author      Dermot Murphy
 *
 * \brief	API Manager
 *
 * \par	Overview:
 * Manager API components
 *
 * \par Configuration
 * Configuration of this component is via the api_manager_cfg.h file.
 *
 */

/*******************************************************************************
 * Include Files
 ******************************************************************************/

/* This component */
#define		API_MANAGER_C
#include	"api_manager.h"

/*******************************************************************************
 * Static Analysis File Scope
 ******************************************************************************/

/*******************************************************************************
 * Linker Control
 ******************************************************************************/

#define	API_MANAGER_C_START
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
 * API_MANAGER_PowerOnInit
 *
 *----------------------------------------------------------------------------*/
/**
 * Module power on initialisation
 *
 *----------------------------------------------------------------------------*/

void API_MANAGER_PowerOnInit (void)
{
}

/*------------------------------------------------------------------------------
 *
 * API_MANAGER_Init
 *
 *----------------------------------------------------------------------------*/
/**
 * Initialise the component while running
 *
 *----------------------------------------------------------------------------*/

void API_MANAGER_Init (void)
{
}

/*------------------------------------------------------------------------------
 *
 * API_MANAGER_Deinit
 *
 *----------------------------------------------------------------------------*/
/**
 * Deinitialise the component while running
 *
 *----------------------------------------------------------------------------*/

void API_MANAGER_Denit (void)
{
}

/** \} */
/* Template: V1.3 */
/* EOF: api_manager.c */
