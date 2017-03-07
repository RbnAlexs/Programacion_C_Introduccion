//Ejemplo de un programa de un menu con funciones//
#include "stdio.h"
#include "conio.h"

void pago_renta()
{
int S,P,G,IP;
printf("El sueldo es:\n ");
scanf("%d",&S);
printf("El prestamo es:\n ");
scanf("%d",&P);
printf("La gratificacion:\n ");
scanf("%d",&P);
IP=(S+P+G)*0.4;
printf("Los ingresos para pagar la renta son: %d \n",IP);
getche();

}


void rifa_cecyte()
{
	int I=0, F, G;
	
	for (F=1; F<=9; F++)
	{
	printf("Cuanto se ha recopilado por el grupo del cecyte: \n");
	scanf("%d",&I);
	G=I+I;
    }
    
	
			if(G<=5000)
	 printf("\n hacer cooperacion \n ");
	 else 
	 printf("\n Ponte a hacer rifas, no tienen dinero \n!!!");
	
	 getche();
	 
}

void vacaciones_trabajo()
{
int b,a,h,o;
printf("cuanto es tu ahorro\n ");
scanf("%d",&h);
printf("cuanto obtienes por beca\n ");
scanf("%d",&b);
printf("con cuanto te apollan tus padres\n ");
scanf("%d",&a);
o=a+h+b;
 if(o>=2000)
 printf("Felicidades, puedes ir de vacaciones\n");
 else
 printf("Lo siento necesitas trabajar \n");
 getche();
 
}

main()
{
int opcion;
do{
printf("\nMENU PRINCIPAL\n");
printf("1.Pago de renta\n");
printf("2.Cooperaciones\n");
printf("3.Ir de vacaciones\n");
printf("4.Salir\n");
printf("Elige una opcion: \n ");
scanf("%d",&opcion);
 switch(opcion)
 {
		case 1: pago_renta();getche();break;
		case 2: rifa_cecyte();getche();break;
		case 3: vacaciones_trabajo();getche();break;
}
}
	while(opcion!=4);
getche();
}
		

