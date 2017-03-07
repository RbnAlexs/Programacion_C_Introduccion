//NOMBRE:GABRIELA MUNIVIS EFIGENIO.
//FECHA:14 DE ABRIL DE 2015.
//DESCRIPCION:LA SUMA DE LOS NUMEROS PARES DEL 1 AL 20.

#include "stdio.h"
#include "conio.h"
main()
{
int S,C,I;
    S=0;
for(I=1; I<=20; I++)
{
	I=I+1;
	S=S+I;
	
}
printf("La suma es %d",S);
getche();
return 0;
}
