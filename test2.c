/*	*/
/*	$Id$	*/
/***************************************************************//**
	@addtogroup		XX_Module
	@{
	@file			xxxx.c
	@brief			xxxxèàóù
	@par Project	
					EX-XXXX
	@author			X.Xxxxx
	@note			xxxx
	@copyright		2015 JVCKENWOOD CORPORATION. All Rights Reserved.
	@par History
					- 2017/07/31	R.Kamino		New!!
					- 2017/07/31	R.Kamino		Next
*******************************************************************/
/****************************************************************
	Header
****************************************************************/
#include <stdio.h>

/****************************************************************
	Private Structure, Defines & Macro
****************************************************************/
#define	V_FEATURE_A_LOOP_LIMIT	20
#define	V_FEATURE_B_LOOP_LIMIT	20

/****************************************************************
	Private contents, Static contents
****************************************************************/

/****************************************************************
	Table & Constant
****************************************************************/

/****************************************************************
	Private Function Prototypes
****************************************************************/

/***************************************************************//**
	@brief			xxxxèàóù
	@par Details	
					XXXXÇ∑ÇÈÅB
	
	@param			[1] xxxx
	
	@return			xxxx
	
	@author			X.Xxxx
	@note			xxxx
	@par History
					- 2017/07/31	R.Kamino		New!!
*******************************************************************/
void main(void)
{
	int ic;
	
	printf("START\t\t----------------\n");
	for(ic=0; ic<V_FEATURE_A_LOOP_LIMIT; ic++)
	{
		printf("No.%04d\tFeature_A!!!!\n", ic);
	}
	for(ic=0; ic<V_FEATURE_B_LOOP_LIMIT; ic++)
	{
		printf("No.%04d\tFeature_B!!!!!!!\n", ic);
	}
	printf("END\t\t----------------\n");
	
	return;
}

/* @} *//* EOF */
