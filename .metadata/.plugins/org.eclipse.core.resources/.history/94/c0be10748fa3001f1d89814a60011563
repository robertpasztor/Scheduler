/*
 * gsc_sch_core_tick_isr.c
 *
 *  Created on: Nov 14, 2024
 *      Author: Robert Pasztor
 */

/* Includes */
/* -------- */
#include "gsc_sch_core_tick_isr.h"

/* Functions macros, constants, types and datas         */
/* ---------------------------------------------------- */
/* Functions macros */

/*==================================================*/
/* Definition of constants                          */
/*==================================================*/
/* BYTE constants */


/* WORD constants */


/* LONG and STRUCTURE constants */


/* Custom type constants */


/*======================================================*/
/* Definition of RAM variables                          */
/*======================================================*/
/* BYTE RAM variables */


/* WORD RAM variables */


/* LONG and STRUCTURE RAM variables */


/* Custom type RAM variables */
/* Module execution flag */
volatile SCH_BOOLEAN re_sch_mngExecflag = SCH_FALSE;

/*======================================================*/
/* close variable declaration sections                  */
/*======================================================*/

/* Private defines */


/* Private functions prototypes */
/* ---------------------------- */



/* Exported functions prototypes */
/* ----------------------------- */

/* Inline functions */
/* ---------------- */
/**************************************************************
 *  Name                 : gsc_sch_core_tick_isr
 *  Description          : This is the tick flag generation. This function must be
                           called from a periodic high priority interrupt. The period
						   of this interrupt must define the "tick cycle time"
 *  Parameters           : void
 *  Return               : void
 *  Critical/explanation : No
 **************************************************************/
void gsc_sch_core_tick_isr(void)
{
	/* Set flag so background will run */
    re_sch_mngExecflag = SCH_TRUE;
}

/*
inline void gsc_sch_core_tick_isr(void)
*/
