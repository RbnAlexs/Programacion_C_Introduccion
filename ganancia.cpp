#include "stdio.h"
#include "conio.h"
int main()
{
 clrscr();
 int CM,F,SE,I,VT,G;
 printf("introduce el costo de la mercancia");
 scanf("%d ,&CM");
 printf("introduce el flete");
 scanf("%d ,&F");
 printf("introduce los sueldos de los empleados");
 scanf("%d ,&SE");
 printf("introduce los impuestos");
 scanf("%d ,&I");
 VT=CM*2;
 G=(VT-(F+SE+I))-CM;
 printf("la ganancia es: %d\n",G);
 getche();
 return(0);     
 }
