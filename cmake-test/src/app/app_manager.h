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

#ifndef APP_MANAGER_H

#define	APP_MANAGER_H

#ifdef APP_MANAGER_C
#define	APP_MANAGER_EXTERN
#else
#define	APP_MANAGER_EXTERN	extern
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
 * Static MANAGER File Scope
 ******************************************************************************/

/*******************************************************************************
 * Linker Control
 ******************************************************************************/

#define		APP_MANAGER_H_START
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
APP_MANAGER_EXTERN	void		APP_MANAGER_PowerOnInit		(void) ;

/* Initialise the component while running */
APP_MANAGER_EXTERN	void		APP_MANAGER_Init		(void) ;

/* Deinitialise the component while running */
APP_MANAGER_EXTERN	void		APP_MANAGER_Deinit		(void) ;

/*******************************************************************************
 * Linker Control
 ******************************************************************************/

#define		APP_MANAGER_H_END
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
/* EOF: app_manager.h */
