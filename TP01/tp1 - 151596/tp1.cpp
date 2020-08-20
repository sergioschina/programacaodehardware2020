#include <stdio.h>
#include <avr/io.h>
int main() {
   // printf() displays the string inside quotation
   int soma;
   asm(
	   	"ldi r16,0x45\n"
	   	"ldi r17,30 \n"
	   	"sub r16,r17"
	   	
	   	"ldi r18,0b00110110\n"
	   	"ldi r19,0x62\n"
	   	"sub r18,r19\n"
	   	
	   	"add r16,r18\n"
		"sts (soma),r16\n"	
   );
   
   printf("%d",soma);
   return 0;
}
