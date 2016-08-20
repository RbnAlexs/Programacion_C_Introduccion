

/*

  
Facultad de Contaduría y Administración - 
U N A M
SuayEd
Lic. en Informática

Asignatura: Introducción a la programación
Nombre: Sánchez Colín Rubén Alejandro

"	Unidad: 6
"	Actividad: 3



.



 Realiza un programa que permita dar de alta y consultar los datos de un lote de autos
usados, utiliza una estructura y apuntadores.
Los datos a gestionar son:
marca, año, kilómetros y precio. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Definimos nuestra estructura con todas las variables necesarias para
registrar nuestros vehiculos en el lote. */
typedef struct
{
 char marca[50];
 int modelo;
 float kilometros;
 float precio;
}automovil;


//Declaramos función para leer datos de nuestro lote
void leer_autos(automovil *ptr, int numero_autos);
//Declaramos función para leer datos de nuestro lote
void mostrar_autos(automovil *ptr, int numero_autos);

int main(void){
	
	int modelo, numero_autos, opcion;
	//Declaramos nuestra variable "automovil_alta" tipo "automovil", esta ultima es nuestra estructura
	automovil automovil_alta;
	//Declaramos nuestro puntero tipo "automovil"
	automovil *ptr;	 
	//Le asignamos espacio en mememoria según el 
	ptr = (automovil *)malloc(numero_autos*sizeof(automovil));
	while (1){
	printf("\n\t1. Llenar lista de coches");
	printf("\n\t2. Visualizar lista de coches");
	printf("\n\t. Elija la opcion deseada: ");
	scanf("%d", &opcion);

        switch(opcion){

            case 1:
            	printf("\n\tProporcione el numero de automoviles: ");
				scanf("%d",&numero_autos);
                leer_autos(ptr,numero_autos);
                break;

            case 2:
                mostrar_autos(ptr, numero_autos);
                break;

          return 0;
		  }//fin del switch

	 
	 }

}
 

 
 void leer_autos(automovil *ptr, int numero_autos){
 	
 	int i;
 	for(i = 0; i < numero_autos; i++){
 		getch();
 		printf("\n\n\t\t---- AUTOMOVIL No %i ----",i+1);
 		printf("\n\n\t\t Nombre de la marca del automovil: ");
 		scanf("%s",&ptr[i].marca);
 		printf("\n\t\t Modelo del automovil: ");
 		scanf("%i",&ptr[i].modelo);
 		printf("\n\t\t Kilometraje: ");
 		scanf("%f",&ptr[i].kilometros);
 		printf("\n\t\t Precio: ");
 		scanf("%f",&ptr[i].precio);
 		
	 }
 	
 }
 
 void mostrar_autos(automovil *ptr, int numero_autos){
 	int i;
 	
 	for(i = 0; i < numero_autos; i++){
	  	printf("\n\n\t---- AUTOMOVIL No %i ----",i+1);
 		printf("\n\t\tMarca %s", ptr->marca);
 		printf("\n\t\tModelo %i", ptr->modelo);
 	 	printf("\n\t\tKilometraje %.2f", ptr->kilometros);
 		printf("\n\t\tPrecio %.2f", ptr->precio);
 		ptr++;

	}
	
 }

