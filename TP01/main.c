/***********************************************************************************
 * Copyright (C) 2020 by Programa��o de Hardware Engenharia de computa��o       *
 *                                                                                 *
 *                                                                                 *
 ***********************************************************************************/

/**
 * @file TP01.h
 * @author Rodrigo Gradela da Graça RA : 146326
 * @date 15 Aug 2020
 * @brief TP01 da mat�ria Programa��o de Hardware do 6 ciclo de engenharia de computa��o.
 *
 * Programa efetua a resolução de uma Equação Matematica -  (0x45 - 25 + 0b00110110  - 0x62)
 */

/**
 * @brief Este Tp � o primeiro TP da disciplica de Program���o de Hardware.
 *
 *  Desenvolva um c�digo em C, resolvendo (com inline assembly) a equa��o ( 0x45 - 25 + 0b00110110  - 0x62) e fa�a um print do resultado (usando C). 
 *  mas a resolu��o dentro da fun��o em assembly. A resposta dever� ser implementado cabe�alho e descri��o de cada comando usando Doxygen.
 *  A resposta dever� ser enviada pelo Github no reposit�rio da mat�ria.
 */
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
