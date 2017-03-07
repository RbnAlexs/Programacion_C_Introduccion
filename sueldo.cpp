#include "stdio.h"
#include "conio.h"
main()
{
int S,P,G,IP;
printf("El sueldo es:\n ");
scanf("%d",&S);
printf("El prestamo es:\n ");
scanf("%d",&P);
printf("La gratificacion:\n ");
scanf("%d",&P);
IP=(S+P+G)*0.4;
printf("Los ingresos para pagar la renta son: %d",IP);
getche();
return(0);
}


