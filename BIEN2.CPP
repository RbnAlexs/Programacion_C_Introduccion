#include "stdio.h"
#include "conio.h"
main()
{
 char nombre[10];
 printf("escribe tu nombre: ");
 scanf("%s",&nombre);
 printf("bienvenido...%s",nombre);
 getche();
 return(0);
}
