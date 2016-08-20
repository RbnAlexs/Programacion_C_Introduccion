

/*
  
Facultad de Contaduría y Administración - 
UNAM
SuayEd
Lic. en Informática

Asignatura: Introducción a la programación
Nombre: Sánchez Colín Rubén Alejandro

"	Unidad: 4
"	Actividad: Lo que aprendí



.


*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int numero_inicial = 10;
//Declaración y operaciones de las funciones
int numero_nuevo(){
	printf( "\n   Introduzca un n%cmero entero: ", 163 );
    scanf( "%d", &numero_inicial );
    return numero_inicial;
}
int numero_sumar(){
	
	numero_inicial = numero_inicial + 1;
	return numero_inicial;

}

int numero_restar(){
	
	numero_inicial = numero_inicial - 1;
	return numero_inicial;

}


int main()
{
    int n, opcion;
//Inicio de menú repetitivo (hasta que el usuario decida salir con la opción 4)
    do
    {
    	system("cls");
    	printf("\n Valor inicial del numero: %d", numero_inicial);
        printf( "\n   1. Ingresar un numero", 163 );
        printf( "\n   2. Sumar +1 al numero", 163 );
        printf( "\n   3. Restar -1 al numero", 163 );
        printf( "\n   4. Salir." );
        printf( "\n\n   Introduzca opci%cn (1-4): ", 162 );

        scanf( "%d", &opcion );
//Menú de opciones
        switch ( opcion )
        {
            case 1: numero_nuevo();
                    break;

            case 2: numero_sumar();
                    break;

            case 3: numero_restar();
            		break;
            default : printf("\n Opcion invalida");
            		  getchar( );
            		  break;
         }

    } while ( opcion != 4 );

    return 0;
}

