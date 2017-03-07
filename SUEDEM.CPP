#include "stdio.h"
#include "conio.h"
main()
{
 clrscr();
 int dt,cd,s;
 printf("introduce los dias trabajados: ");
 scanf("%d",&dt);
 printf("introduce costo por dia: ");
 scanf("%d",&cd);
 s=dt*cd;
 printf("el sueldo del empleado es: %d\n",s);
 printf("pulsa cualquier tecla para continuar...");
 getche();
 return(0);
}