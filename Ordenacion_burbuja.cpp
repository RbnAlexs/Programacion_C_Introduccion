#include <stdio.h>
	#include <conio.h>
	#include <stdlib.h>
#include <time.h> 

	#define TAM 10

	 main(){
	int a[TAM], temp, i, j;



	randomize(); //Inicializa el generador de numeros aleatorios

	printf ("Llenando arreglo con números aleatorios\n");
	
	for (i=0; i< TAM; i++)
		a[i]=random(100);

	//Implementacion de Ordenamiento por burbuja de mayor a menor

	for (j=1; j <= TAM; j++)

		for (i=0; i< TAM-1; i++)

			if (a[i] < a[i+1]){

				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}

	printf ("\nArreglo ordenado\n");

	for (i=0; i< TAM; i++)
		printf ("a[%d] = %d\n", i, a[i]);

	getch();
	}
