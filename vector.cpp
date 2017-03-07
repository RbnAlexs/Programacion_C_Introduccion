//NOMBRE: JUAN EMIR ZUÑIGA BARRERA
//FECHA:  DE ABRIL DEL 2015
//DESCRIPCION: PROGRAM QUE SOPLICITA AL USUARIO Y ASLMACENA EN UN ARREGLO UNIDIMENCIONAL LÑA SUMA CORRESPONDIENTE
#include "stdio.h"
#include "conio.h"
int main()
{ 
	int numeros[10], s=0, c;
	 for (c=1; c<=10; c++);
	{
		printf(" Escribe un numero: ");
		scanf("%d",&numeros[c]);
		s=s+numeros[c];
	}
	printf("El promedio de los nuemros almacenados en el vector es: %d",s/10);
	getche();
	return(0);
		
}
