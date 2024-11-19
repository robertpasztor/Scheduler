/*
 * gsc_sch_core_cfg.h
 *
 *  Created on: Nov 14, 2024
 *      Author: Robert Pasztor
 */

#ifndef GSC_SCH_CORE_CFG_H_
#define GSC_SCH_CORE_CFG_H_


/* Includes */
/* -------- */
#include "gsc_sch_core.h"

/* Exported types and constants */
/* ---------------------------- */

/* Types definition */
/* typedef */

/*======================================================================================================================*/
/* Manager/Application ID */

typedef enum {
    /* Add here the IDs Tasks, order them same to Manager/Aplication main function list */
    TASK_INIT,
    TASK_SYSIN,
    TASK_5TKS,
    TASK_10TKS,
    TASK_20TKS,
    TASK_50TKS,
    TASK_100TKS,
    TASK_500TKS,
    TASK_1MTKS,
    /* Number of Managers/Applications */
    SCHD_MANAGERS_NUMBER
} E_MODULES_ID_TYPE;
/*======================================================================================================================*/


/*======================================================*/
/* Declaration of exported constants                    */
/*======================================================*/
/* LONG and STRUCTURE constants */
  /* Managers/Application main function List */
extern const S_SCH_MANAGER_EXEC_TYPE cps_mngTaskList[SCHD_MANAGERS_NUMBER];

/* Exported functions prototypes and macros */
/* ---------------------------------------- */

/* Exported defines */

/* Operational Modes of the system */
#define ALL_MODES (T_OpModeType)0xFFFF
#define NORMAL_MODE (T_OpModeType)0x0001



/* This callback must be used to disable interrupts */
//#define gsc_sch_disable_interrupts_cb() 	asm(" CPSID i");/* Put here the function of the platform used to disable interrupts */

/* This callback must be used to initialize and configure interrupts */
#define gsc_sch_interrupts_init_cfg_cb() /* Put here the function of the platform used to initialize and configure interrupts */

/* This callback must be used to enable interrupts */
//#define gsc_sch_enable_interrupts_cb() 		asm(" CPSIE i");/* Put here the function of the platform used to enable interrupts */


#endif /* GSC_SCH_CORE_CFG_H_ */
