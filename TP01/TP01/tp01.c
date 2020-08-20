#include <stdio.h>
#include <stdlib.h>


int sub(int y, int x){//função de operação adição

 int resultsub;

    asm("subl %%ebx, %%eax;":// codigo assembler inline para subtração entre duas variaveis
    "=r" (resultsub):
    "a" (y), "b" (x));
   
    return resultsub;
}
int adicao(int y , int x){ //função de operação adição
int resultad;

asm("addl %%ebx, %%eax;": // codigo assembler inline para adição entre duas variaveis
"=r"(resultad):
"a"(y), "b"(x));
return resultad;

}



int main (void){
    
  // (a = 0x45 , b = 25 , c = 0b00110110, d =0x62)   valores convertidos em decimal
int a = 69, b= 25,c=54,d=98 ;

int result = sub(a,b) ;
int res = adicao(result,c);
int resfinal = sub(res,d);

printf("----------Exercicio 4 ------------ \n\n");
printf("Resuldado da Equacao (0x45 - 25 + 0b00110110  - 0x62) = %d\n", resfinal);





return EXIT_SUCCESS;
}
