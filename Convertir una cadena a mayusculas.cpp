#include<stdio.h>
#include<conio.h>
#include <ctype.h>  /* << Librer�a que contiene la palabra reservada llamada toupper, la cual nos ayuda a convertir alguna letra o cadena a may�sculas.*/
 //Declaramos la funci�n donde convertiremos la cadena antes del main
void ConvertirCadena(char string[]); /* cabecera de la funcion */ 
//Funcion principal
int main(){
	char cadena[80];
	printf("Introduce una cadena:");
	gets(cadena);
	ConvertirCadena(cadena); /* Llama a la funcion */
	printf ("En Mayusculas: %s\n", cadena);
	getch();
}
 //Funci�n para convertir la cadena
void ConvertirCadena(char cadena_minusculas[]){
	int i=0;
    for(i = 0; cadena_minusculas[i]; i++) 
      cadena_minusculas[i] = toupper(cadena_minusculas[i]);
}

