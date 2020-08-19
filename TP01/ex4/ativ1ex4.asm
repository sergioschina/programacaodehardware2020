#include <stdio.h>
#include <stdlib.h>

  int sub1 (int x,int y){
  return (x-y);
  }

  int sub2 (int z, int w){
  return (z-w);
  }



int main(){

int resu1;
 __asm("push 0x45\n"
       "push 25\n"
       "call sub1\n"
       "sub r24, 10\n"
       "mov DWORD PTR[ebp-12],eax");

int resu2;
 __asm("push 0b00110110\n"
       "push 0x62\n"
       "call sub2\n"
       "sub r25, 11\n"
       "mov DWORD PTR[ebp-12],eax");



int  resultado;
resultado=(resu1+resu2);
return ;



printf("%d",resultado);



    return 0;
}
