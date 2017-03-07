//NOMBRE:GABRIELA MUNIVIS EFIGENIO.
//FECHA:22 DE ABRIL DE 2015.
//DESCRIPCION:SUMAR LOS INPORTES OBTENIDOS.

#include "stdio.h"
#include "conio.h"
main()
{
int A,B,AP,IO;
printf("El ahorro es: ");
scanf("%d",&A);
printf("La beca es: ");
scanf("%d",&B);
printf("El apoyo de los padres es: ");
scanf("%d",&AP);
IO=A+B+AP;
if (IO>2000) 
   printf("Ir de vacaciones: ");
   else
   printf("Buscar un trabajo: ");
 getch();
 return(0);	
}
