#include <stdio.h>

int funcion(int c1, int c2, int c3, int c4, int c5, int c6, int c7){
int suma = 0;

   if(c7>4)
     suma = c1+c2+c3+c4-c5-c6;
   else if(c7<=4)
     suma = c1+c2+c3+c4+c5-c6;

 return suma;
}


int main(){

 int a1, a2, a3, a4, a5, a6, a7;
 a1 = 4;
 a2 = 3;
 a3 = 6;
 a4 = 10;
 a5 = 2;
 a6 = 1;
 a7 = 6;

 int resultado = funcion(a1,a2,a3,a4,a5,a6,a7);

return 0;
}
