
/**
 * @file TP01.h
 * @author Victor Gazolli
 * @date 13 Aug 2020
 */

#ifndef _TP01_
#define _TP01_
#include "stdio.h"
#include "avr/io.h"


int main(void)
{

	int result;

	while (1)
	{
		asm(
			"ldi r16, 0x25 \n"
			"ldi r17, 25 \n"
			"sub r16, r17"
			"ldi r17, 0b00110110 \n"
			"add r16, r17 \n"
			"ldi r17, 0x62 \n"

		);
		asm(
			"sub r16, r17 \n"
			: "=a"(result)
		);
		printf("%d", result);
	}
}

#endif /* _TP01_ */
