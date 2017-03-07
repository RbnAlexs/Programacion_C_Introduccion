#include "stdio.h"
#include "conio.h"
main()
{
 clrscr();
 float CL;
 printf("el algoritmo te va a calcular cuantos litros de gasolina se nececita para recorrer 480km");
 CL=(480*110)/100;
 printf("la cantidad de litros es: %f\n",CL);
 printf("pulsa cualquier tecla para continuar...");
 getche();
 return(0);     
}
