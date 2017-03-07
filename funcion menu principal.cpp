//NOMBRE:GABRIELA MUNIVIS EFIGENIO.
//FECHA:21 DE ABRIL DE 2015.
//DESCRIPCION:Ejemplo de programa de un menu con funciones.
	
#include "stdio.h"
#include "conio.h"

void Pago_de_renta()
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
printf("El ingreso total es: %d\n",II);
getch();	
}

void cooperacones()
{
int I;
printf("El importe recabado por los nueve grupos del cecyte es: ");
scanf("%d",&I);
if (I<5000)
   printf("Hacer cooperaciones: ");
 else
  printf("Hacer rifas: ");
getche();	
}

void ir_de_vacaciones()
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
}


main()
{
int opcion;
do {
printf("\nMENU PRINCIPAL\n");
printf("1.Pago de renta\n");
printf("2.Cooperaciones\n");
printf("3.Ir de vacaciones\n");
printf("4.Salir\n");
printf("Elije una opcion: ");
scanf("%d",&opcion);
 switch(opcion)
 {
  case 1:Pago_de_renta();getche();break;
  case 2:cooperacones();getche();break;
  case 3:ir_de_vacaciones();getche();break;
  default:printf("Esta opcion,no existe");getche();break;
  }
  }
  while (opcion!=4);
  getche();
  return (0);
}
