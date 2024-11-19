/*
 * periodic_tasks_exec.c
 *
 *  Created on: Nov 14, 2024
 *      Author: Robert Pasztor
 */

/* Includes */
/* -------- */
#include "periodic_tasks_exec.h"
#include "periodic_tasks_modules.h"

#include "led.h"

int flag = 0;

/**************************************************************
 *  Name                 : periodic_tasks_exec_5tks
 *	ID					 : TASK_5TKS
 *  Description          : Container for functionality that is
                           executed periodically.
 *  Parameters           : none
 *  Return               : none
 *  Critical/explanation : no
 **************************************************************/
 void periodic_tasks_exec_5tks(void)
 {

 }

 /**************************************************************
 *  Name                 : periodic_tasks_exec_10tks
 *	ID					 : TASK_10TKS
 *  Description          : Container for functionality that is
                           executed periodically.
 *  Parameters           : none
 *  Return               : none
 *  Critical/explanation : no
 **************************************************************/
 void periodic_tasks_exec_10tks(void)
 {

 }

 /**************************************************************
 *  Name                 : periodic_tasks_exec_20tks
 *	ID					 : TASK_20TKS
 *  Description          : Container for functionality that is
                           executed periodically.
 *  Parameters           : none
 *  Return               : none
 *  Critical/explanation : no
 **************************************************************/
 void periodic_tasks_exec_20tks(void)
 {

 }

 /**************************************************************
 *  Name                 : periodic_tasks_exec_50tks
 *	ID					 : TASK_50TKS
 *  Description          : Container for functionality that is
                           executed periodically.
 *  Parameters           : none
 *  Return               : none
 *  Critical/explanation : no
 **************************************************************/
 void periodic_tasks_exec_50tks(void)
 {

 }

 /**************************************************************
 *  Name                 : periodic_tasks_exec_100tks
 *	ID					 : TASK_100TKS
 *  Description          : Container for functionality that is
                           executed periodically.
 *  Parameters           : none
 *  Return               : none
 *  Critical/explanation : no
 **************************************************************/
 void periodic_tasks_exec_100tks(void)
 {
	 if(flag == 0){
		 Set_led(ON);
		 flag =1;
	 }
	 else if(flag == 1){
		 Set_led(OFF);
		 flag = 0;
	 }
 }

 /**************************************************************
 *  Name                 : periodic_tasks_exec_500tks
 *	ID					 : TASK_500TKS
 *  Description          : Container for functionality that is
                           executed periodically.
 *  Parameters           : none
 *  Return               : none
 *  Critical/explanation : no
 **************************************************************/
 void periodic_tasks_exec_500tks(void)
 {

 }

 /**************************************************************
 *  Name                 : periodic_tasks_exec_1Mtks
 *	ID					 : TASK_1MTKS
 *  Description          : Container for functionality that is
                           executed periodically.
 *  Parameters           : none
 *  Return               : none
 *  Critical/explanation : no
 **************************************************************/
 void periodic_tasks_exec_1Mtks(void)
 {

 }

