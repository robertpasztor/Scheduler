/*
 * gsc_sch_core_cfg.c
 *
 *  Created on: Nov 14, 2024
 *      Author: Robert Pasztor
 */

/* Includes */
/* -------- */
#include "gsc_sch_core.h"
#include "gsc_sch_core_cfg.h"
#include "periodic_tasks_exec.h"
#include "periodic_tasks_init.h"


/*======================================================================================================================*/
/* Manager/Application main function list */
const S_SCH_MANAGER_EXEC_TYPE cps_mngTaskList[SCHD_MANAGERS_NUMBER] =
{
   /* Main function,               Init Function,                    Startup delay(ticks),  Execution Period(ticks),   Operation mode */
    {SCHM_NULL_PTR,                periodic_tasks_init_MclDrvs,      0,                     0,                         ALL_MODES},
    {SCHM_NULL_PTR,                periodic_tasks_init_SysDrvs,      0,                     0,                         ALL_MODES},
    {periodic_tasks_exec_5tks,     periodic_tasks_init_task_5tks,    5,                     5,                         ALL_MODES},
    {periodic_tasks_exec_10tks,    periodic_tasks_init_task_10tks,   10,                    10,                        ALL_MODES},
    {periodic_tasks_exec_20tks,    periodic_tasks_init_task_20tks,   20,                    20,                        ALL_MODES},
    {periodic_tasks_exec_50tks,    periodic_tasks_init_task_50tks,   50,                    50,                        ALL_MODES},
    {periodic_tasks_exec_100tks,   periodic_tasks_init_task_100tks,  100,                   100,                       ALL_MODES},
    {periodic_tasks_exec_500tks,   periodic_tasks_init_task_500tks,  500,                   500,                       ALL_MODES},
    {periodic_tasks_exec_1Mtks,    periodic_tasks_init_task_1Mtks,   1000,                  1000,                      ALL_MODES},
    //{function_task_name,           task_initialization,              0,                     1,                         ALL_MODES},

    /* NOTE: this list shall be updated according to E_MODULES_ID_TYPE! */
};
