#include "stdio.h"
#include "conio.h"
main()
{
 clrscr();
 float H,B,A;
 printf("introduce la base del triangulo");
 scanf("%f ,&B");
 printf("introduce la altura del triangulo");
 scanf("%f ,&H");
 A=(B*H)/2;
 printf("el area del triangulo es: %f\n, A");
 printf("preciona una tecla para continuar...");
 getche();
 return(0);
}