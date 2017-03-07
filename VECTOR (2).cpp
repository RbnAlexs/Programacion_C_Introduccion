//NONMBRE:GABRIELA MUNIVIS EFIGENIO.
//FECHA:15 DE ABRIL DE 2015.
//DESCRIPCION:PROGRAMA QUE SOLICITE NUMEROS AL USUARIO.
	
#include "stdio.h"
#include "conio.h"
main()
{
int numeros[10], s=0,c;
 for(c=1; c<=10;c++)
 {
printf("Escribe un numero: ");
scanf("%d",&numeros[c]);
s=s+numeros[c];
}
 printf("El promedio de los numeros almacenados en el vector es: %d",s/10);
 getche();
 return(0);
}
