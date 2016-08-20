/*


  
Facultad de Contaduría y Administración - 
UNAM
SuayEd
Lic. en Informática

Asignatura: Introducción a la programación
Nombre: Sánchez Colín Rubén Alejandro

"	Unidad: 5
"	Actividad: Lo que aprendí



.


 
Resuelve mediante un programa escrito en lenguaje C el siguiente
problema: Una escuela nos solicita un programa para capturar las calificaciones de alumnos
por materia, obtener el promedio por alumno, por materia y el promedio general del
grupo. Emplea un arreglo mutidimensional para almacenar
las calificaciones de 6 materias obtenidas por 5 alumnos y realizar los cálculos
solicitados. Nota: es con estructura multidimensionales o con apuntadores a estructuras
*/
/* Ejemplo de arreglos bidimensionales */
#include <stdio.h>
#include <conio.h>
#define ALUMNOS 5
#define EXAMENES 6
float promedio(int [], int);
void imprimeArreglo( int [][EXAMENES], int, int);

main( ){

//Contadores necesarios para recorrer los arreglos
int i,j,z,k, total;
float promedio, promedio_gral;
//Arreglo bidimensional para capturar las calificaciones por alumno, alumCalif[5][6]
int alumCalif[ALUMNOS][EXAMENES];
int total_materia[ALUMNOS] = {0,0,0,0,0}; 
float total_materia_gral[ALUMNOS] ={0.0,0.0,0.0,0.0};

//Capturar las materias por alumno
for (i=0; i < ALUMNOS; i++){
 printf("\n\n Alumno numero %i -->\n", i+1);
 //Capturar calificaciones calificaciones por materia
	for(j=0; j < EXAMENES; j++){
   		printf("\n\t Escribe la calificacion de la materia %i: ",j+1);
   			scanf("%i",&alumCalif[i][j]);
   			//Variable necesaria para el promedio total de la materia
   			total_materia[j] = total_materia[j] + alumCalif[i][j];
   }	  
}

//Ciclo para imprimir en pantalla los resultados:
//Imprimir calificaciones por alumno
for(i=0; i < ALUMNOS; i++){
	    promedio = 0; total = 0;
		printf("\nAlumno %d >> ", i+1);
		for(j=0; j < EXAMENES; j++){
			//Imprimir calificaciones por examen
			printf("%d ", alumCalif[i][j]);
			//Variable necesaria para el promedio general del grupo
			total +=  alumCalif[i][j];
			}
		//Calcular promedio en general
		promedio = total / EXAMENES;
		promedio_gral += promedio;
		printf(" Promedio: %.2f", promedio);
	}	
	
for(k = 0; k < ALUMNOS; k++){
	total_materia_gral[k] = total_materia[k] / ALUMNOS;
	printf("\n\n\t Promedio general de la materia %i: %.2f", k+1, total_materia_gral[k]);
	}
printf("\n\n\t\t\t\t\t ----------- > Promedio general del grupo %.2f", promedio_gral / ALUMNOS);
return 0;
}

