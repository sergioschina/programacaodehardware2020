
/**
 * @file TP01.h
 * @author Victor Gazolli
 * @date 13 Aug 2020
 */

#ifndef _TP01_
#define _TP01_
#include "stdio.h"


int main(void)
{

	int result;

	while (1)
	{
		asm(
			"ldi %0, 0x25 \n"
			"ldi %1, 25 \n"
			"sub %0, %1"
			"ldi %1, 0b00110110 \n"
			"add %0, %1 \n"
			"ldi %1, 0x62 \n"

		);
		asm(
			"sub %0, %1 \n"
			: "=a"(result)
		);
		printf("%d", result);
	}
}

#endif /* _TP01_ */
