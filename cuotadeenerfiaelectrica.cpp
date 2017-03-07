#include "stdio.h"
#include "conio.h"
main() 
{
 clrscr();
 float PEE,PW,AE,LI,LE;
 printf("introduce la cantidad de aparatos electricos");
 scanf("%f ,&AE");
 printf("introduce la cantidad de luz interior");
 scanf("%f ,&LI");
 printf("introduce la cantidad de luz externa");
 scanf("%f ,&LE");
 printf("introduce la cantidad de precio por whats");
 scanf("%f ,&PW");
 PEE=(PW*AE)+(PW*LI)+(PW*LE)
 printf("el pago de energia electrica es: %f\n",PEE);
 getche();
 return(0);
}   
