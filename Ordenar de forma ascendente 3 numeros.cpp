/*
Facultad de Contadur�a y Administraci�n - 
UNAM
SuayEd
Lic. en Inform�tica

Asignatura: Introducci�n a la programaci�n
Nombre: S�nchez Col�n Rub�n Alejandro

"	Unidad: 4
"	Actividad: 2



.


?
Realiza con un programa en C que acepte el ingreso de tres n�meros y que por medio de una funci�n, los ordene de forma ascendente.
*/

#include <stdio.h>   
#include <conio.h>   
  
int Ordenar(int numero_1, int numero_2, int numero_3);

int main(){   
/* Funcion principal */
	int numero_1,numero_2,numero_3;  
	printf("Imprimir Ordenados los numeros");  
	printf("\n\n Dame el numero 1, 2 y 3:\n");   
	scanf("%d %d %d",&numero_1,&numero_2,&numero_3);  
	printf("\n\n");   
	Ordenar(numero_1,numero_2,numero_3);
	getch();
	return 0;
}

void Ordenar( numero_1,numero_2,numero_3){
		int numero_1,numero_2,numero_3;  

/* Por medio de funciones comparamos cada uno de los numero a fin de ordenarnos de manera ascendente, como lo solicita la actividad */

/* En esta condicional, verificamos que no exista ningun numero repetido, de ser as�, pasamos a otras condicionales creadas para este fin */

 if( (numero_1 != numero_2) && (numero_2 != numero_3) ){	
	
	if ((numero_1>numero_2) && (numero_1>numero_3))  
		if (numero_2>numero_3)   
			printf("%d %d %d",numero_3,numero_2,numero_1);   
		else   
			printf("%d %d %d",numero_2,numero_3,numero_1);   

	if ((numero_2>numero_1) && (numero_2>numero_3))   
		if (numero_1>numero_3)   
			printf("%d %d %d",numero_3,numero_1,numero_2);   
		else   
			printf("%d %d %d",numero_1,numero_3,numero_2);   	  

	if ((numero_3>numero_1) && (numero_3>numero_2))   
		if (numero_1>numero_2)   
			printf("%d %d %d",numero_2,numero_1,numero_3);   
		else   
			printf("%d %d %d",numero_1,numero_2,numero_3);   
	
	}else{
		
		if ((numero_1 == numero_2)&& (numero_1>numero_3))
		{
		printf("%d %d %d",numero_3,numero_2,numero_1);}
		else if ((numero_1 == numero_2)&& (numero_1<numero_3)){
		printf("%d %d %d",numero_1,numero_2,numero_3);
	    }
	    else {
		printf("%d %d %d",numero_2,numero_3,numero_1);}
		
	}
	
}


