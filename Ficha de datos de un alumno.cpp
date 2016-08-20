

/*
  
Facultad de Contadur�a y Administraci�n - 
UNAM
SuayEd
Lic. en Inform�tica

Asignatura: Introducci�n a la programaci�n
Nombre: S�nchez Col�n Rub�n Alejandro

"	Unidad: 5
"	Actividad: 6


 Elabora un programa para almacenar los datos de un alumno, dichos datos son:
n�mero de cuenta, nombre, licenciatura, semestre en curso y promedio, dicha informaci�n
ser� almacenada en una estructura de registro.
.
*/

 


#include <stdio.h>
#include <string.h>

/* Declaramos nuestra estructura con el nombre de "alumno" */
struct alumno{
     int no_cta;
     char licenciatura[15];
     char nombre[35];
     int semestre;
     float promedio;
}; 
/*Programa principal*/
int main(void)
{
/* Definimos una estructura llamada "datos_alumno" */
 struct alumno datos_alumno; 
 printf("\t\nIngresa el numero de cuenta del alumno: ");
 scanf(" %i",&datos_alumno.no_cta);
 printf("\t\nIngresa el nombre de la licenciatura: ");
 scanf("%s",&datos_alumno.licenciatura);
 printf("\t\nIngresa el nombre del alumno: ");
 scanf("%s",&datos_alumno.nombre);
 printf("\t\nIngresa el semestre: ");
 scanf("%i",&datos_alumno.semestre);
 printf("\t\nIngresa el promedio del alumno: ");
 scanf("%f",&datos_alumno.promedio);

 
 /* Mostramos los datos almacenados en las variables declaradas anteriormente*/
 /* Debemos de utilizar nuestro nombre de la estructura declarada en la funci�n principal (datos_alumno) seguido de un "."  enseguida el dato solicitado, tipo y nombre de dato declarado dentro de la estrucutra antes de la funci�n principal*/
 printf("\n Datos del alumno");
 printf("\n Numero de cuenta: %i", datos_alumno.no_cta);
 printf("\n Licenciatura: %s ", datos_alumno.licenciatura); 
 printf("\n Nombre: %s", datos_alumno.nombre);
 printf("\n Semestre: %i", datos_alumno.semestre);
 printf("\n Promedio: %.2f", datos_alumno.promedio); 
 return 0;
}

