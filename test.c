/*	*/
/*	$Id$	*/
/***************************************************************//**
	@addtogroup		XX_Module
	@{
	@file			xxxx.c
	@brief			xxxx処理
	@par Project	
					EX-XXXX
	@author			X.Xxxxx
	@note			xxxx
	@copyright		2015 JVCKENWOOD CORPORATION. All Rights Reserved.
	@par History
					- YYYY/MM/DD	Name		Detail
*******************************************************************/
/****************************************************************
	Header
****************************************************************/
#include <stdio.h>

/****************************************************************
	Private Structure, Defines & Macro
****************************************************************/
#define	V_LOOP_LIMIT	10000
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
	@brief			xxxx処理
	@par Details	
					XXXXする。
	
	@param			[1] xxxx
	
	@return			xxxx
	
	@author			X.Xxxx
	@note			xxxx
	@par History
					- YYYY/MM/DD	Name		Detail
*******************************************************************/
void main(void)
{
	int ic;
	
	for(ic=0; ic<V_LOOP_LIMIT; ic++)
	{
		printf("No.%04d\tHello world\n", ic);
	}
	
	return;
}

/* @} *//* EOF */