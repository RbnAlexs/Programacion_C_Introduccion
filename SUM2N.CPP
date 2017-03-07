//NOMBRE:
//FECHA: 11 DE MARZO DE 2015
//DESCRIPCION:Programa que realizara la suma de dos numeros.

#include "stdio.h"
#include "conio.h"
main()
{
 clrscr();
 int N1,N2,S;
 printf("intoduce el primer numero a sumar: ");
 scanf("%d",&N1);
 printf("introduce el segundo numero a sumar: ");
 scanf("%d",&N2);
 S=N1+N2;
 printf("la suma de los dos numeros es; %d\n",S);
 printf("preciona una tecla para continuar...");
 getche();
 return(0);
}