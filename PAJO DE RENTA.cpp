//NOMBRE:GABRIELA MUNIVIS EFIGENIO.
//FECHA:22 DE ABRIL DE 2015.
//DESCRIPCION:
	
#include "stdio.h"
#include "conio.h"
main()
{
int S,P,G,IS,IP,IG,II;
printf("El sueldo es: ");
scanf("%d",&S);
printf("El prestamo es: ");
scanf("%d",&P);
printf("La gratificacion es: ");
scanf("%d",&G);
IS=(S*40)/100;
IP=(P*40)/100,
IG=(G*40)/100;
II=IS+IP+IG;
printf("El ingreso total es:",II);
printf("Introduce una tecla para continuar:");
getch();
return(0);	
}
