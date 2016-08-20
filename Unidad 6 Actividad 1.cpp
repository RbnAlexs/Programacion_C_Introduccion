
/*

  
Facultad de Contadur�a y Administraci�n - 
UNAM
SuayEd
Lic. en Inform�tica

Asignatura: Introducci�n a la programaci�n
Nombre: S�nchez Col�n Rub�n Alejandro

"	Unidad: 6
"	Actividad: 1



.


?

Realiza un programa que incremente en uno la posici�n de memoria a la que apunta.
Nota: Emplear la funci�n malloc() y validar que la nueva posici�n de
memoria sea valida.*/

#include <stdio.h>
#include <conio.h>
void main(void){
int i;
//Vamos a pedir un caracter tipo char, ya que es el unico tipo de dato que vale 1 byte.
//Puntero de tipo char
char *p;
//Variable de tipo char
char valor;
//Solicitud al usuario del valor de la variable
printf("Introduce una letra: ");
scanf("%c",&valor);
//Asigna espacio en la memoria
p = (char*)malloc(valor*sizeof(char));
//Asignamor la direccion en la memoria de 'valor' a nuestro puntero.
p = &valor;
//comprobamos si existi� alg�n error en la asignaci�n
if(p == NULL){
	printf("Error en la asignaci�n de memoria.");
	return -1; //Intentar de nuevo recuperar espacio en memoria
}else{
	printf("Direccion original de memoria de valor es: %p",p);
	printf("\n\nEl valor de la variable es: %c",*p);
	printf("\n\nEl siguiente ciclo aumentara la posicion de memoria desde donde apuntamos a nuestra variable",p+1);
	for(i=0;i<10;i++,p++)
			printf("\n\n\t La direccion aumentada en %i es: %p\n",i,p);
	getch();
}
return 0;

}



