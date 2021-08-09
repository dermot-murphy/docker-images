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

/*******************************************************************************
 * GUARD OPEN
 ******************************************************************************/

#ifndef APP_CLI_H

#define	APP_CLI_H

#ifdef APP_CLI_C
#define	APP_CLI_EXTERN
#else
#define	APP_CLI_EXTERN	extern
#endif

/*******************************************************************************
 * Dependencies
 ******************************************************************************/

/*******************************************************************************
 * C++
 ******************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
 * Static CLI File Scope
 ******************************************************************************/

/*******************************************************************************
 * Linker Control
 ******************************************************************************/

#define		APP_CLI_H_START
#include	"memmap.h"

/*******************************************************************************
 * Public Variables
 ******************************************************************************/

/*******************************************************************************
 * Public Defines, TypeDefs, Constants, Variables
 ******************************************************************************/

/*******************************************************************************
 * Public Functions
 ******************************************************************************/

/* Initialise the component */
APP_CLI_EXTERN	void		APP_CLI_PowerOnInit		(void) ;

/* Initialise the component while running */
APP_CLI_EXTERN	void		APP_CLI_Init			(void) ;

/* Deinitialise the component while running */
APP_CLI_EXTERN	void		APP_CLI_Deinit			(void) ;

/*******************************************************************************
 * Linker Control
 ******************************************************************************/

#define		APP_CLI_H_END
#include	"memmap.h"

/*******************************************************************************
 * C++
 ******************************************************************************/

#ifdef __cplusplus
}
#endif

/*******************************************************************************
 * GUARD CLOSE
 ******************************************************************************/

#endif

/* Template: V1.3 */
/* EOF: app_cli.h */
