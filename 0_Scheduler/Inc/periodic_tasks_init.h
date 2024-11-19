/*
 * periodic_tasks_init.h
 *
 *  Created on: Nov 15, 2024
 *      Author: Robert Pasztor
 */

#ifndef PERIODIC_TASKS_INIT_H_
#define PERIODIC_TASKS_INIT_H_

/* Includes */
/* -------- */


/* Exported functions prototypes and macros */
/* ---------------------------------------- */

void periodic_tasks_init_MclDrvs(void);
void periodic_tasks_init_SysDrvs(void);
void periodic_tasks_init_task_5tks(void);
void periodic_tasks_init_task_10tks(void);
void periodic_tasks_init_task_20tks(void);
void periodic_tasks_init_task_50tks(void);
void periodic_tasks_init_task_100tks(void);
void periodic_tasks_init_task_500tks(void);
void periodic_tasks_init_task_1Mtks(void);


#endif /* PERIODIC_TASKS_INIT_H_ */
