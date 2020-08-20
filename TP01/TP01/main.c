#include <avr/io.h>

int main(void)
{ 
	while(1){
    asm("ldi r16,0x45 \n"
		"ldi r17,25 \n"
		"ldi r18,0b00110110 \n"
		"ldi r19,0x62 \n"
		:::"r16,r17,r18,r19 \n"
		
		"add r16,r17 \n"
		"sub r16,r18 \n"
		"add r16,r19 \n"
		
		"sts (e),r16 \n"
		);}			
		
		printf("Resultado %i",e);
}

