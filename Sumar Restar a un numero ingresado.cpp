

/*
  
Facultad de Contadur�a y Administraci�n - 
UNAM
SuayEd
Lic. en Inform�tica

Asignatura: Introducci�n a la programaci�n
Nombre: S�nchez Col�n Rub�n Alejandro

"	Unidad: 4
"	Actividad: Lo que aprend�



.


*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int numero_inicial = 10;
//Declaraci�n y operaciones de las funciones
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
//Inicio de men� repetitivo (hasta que el usuario decida salir con la opci�n 4)
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
//Men� de opciones
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

