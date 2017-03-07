#include "stdio.h"
#include "conio.h"
main ()
{
 clrscr ();
 float CA,C,G,PV;
 printf("introduce el costo del articulo");
 scanf("%f ,&CA");
 C=(CA*120)/100;
 G=(C*15)/100
 PV=C+G+CA;
 printf("el precio de venta es: %f\n",PV);
 printf("pulsa cualquier tecla para continuar...");
 getche();
 return(0);
}

