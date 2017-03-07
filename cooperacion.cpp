//NOMBRE: Oscar Efren Rodriguez Manzanarez
//FECHA: 22-04-2015
//DESCRIPCION: recolectar el importe recabado por 9 grupos del cecyteg 

#include "stdio.h"
#include "conio.h"
main()
{
 int I,C,S;
 S=0;
 for(C=1;C<=9;C++)
 {
 printf("introduce el importe por grupo: ");
 scanf("%d",&I);
 S=S+I;
 }
  { 
   if (I<=5000)
      printf("hacer cooperacion\n");
    else
      printf("hacer rifas\n");
  }	  	   
 printf("el importe recabado por los 9 grupos es: %d\n",S);
 printf("pulsa un tecla para continuar...");
 getche();
 return(0); 	
} 
