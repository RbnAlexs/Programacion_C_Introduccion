#include "stdio.h"
#include "conio.h"
main()
{
 clrscr;
 float IR,PI,IG;
 printf("introduce la invercion realizada: ");
 scanf("%f",&IR);
 printf("introduce el porcentaje de interes: ");
 scanf("%f",&PI);
 IG=(IR*PI)/100;
 printf("el interes ganado es: %f\n",IG);
 printf("pulsa una tecla para continuar...");
 getche();
 return(0);
}