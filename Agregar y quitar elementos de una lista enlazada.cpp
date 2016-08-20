

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


?
Realiza un programa que, por medio de funciones controladas por un menú que permita agregar o quitar valores de una lista enlazada. (Último Proyecto) */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>	
/*lista enlazada cada elemento contiene un numero entero "int dato" */
typedef struct datos //elementos de una lista de enteros
{
    int dato;
    struct datos *siguiente;
    }telemento;
/* Funciones */
telemento *NuevoElemto(){
    telemento *q = (telemento *)malloc(sizeof(telemento));
    return(q);
    }
int menu(void);
void anadir(telemento **, int); // El ** indica un doble puntero que recibirá la función al definir cabecera.
void borrar(telemento **, int);
telemento *buscar(telemento *, int);
void visualizar(telemento *);
main() {
    telemento *cabecera = NULL;
    telemento *q;
    int opcion, dato;
    while (1)    { //Hasta que el usuario no elige salir, el ciclo será infinito
        opcion = menu();
        switch(opcion) {
            case 1:
                printf("\nANADIR DATO: ");
                scanf("%d", &dato);
                anadir(&cabecera, dato);
                break;
            case 2:
                printf("\nBORRAR DATO: ");
                scanf("&d", &dato);
                q= buscar(cabecera, dato);
                if(q)
                    borrar(&cabecera, dato);
                else
                    printf("\nEl valor %d no esta en la lista\n", dato);
                break;
            case 3:
                printf("\nELEMENTOS DE LA LISTA\n");
                visualizar(cabecera);
                break;
            case 4:
            q= cabecera; //q apunta l primer elemento de la lista
            while (q!=NULL)       {
                cabecera = cabecera->siguiente;
                q=cabecera;  }
            return 0;
          }//fin del switch
    }//fin del while
}//fin del main
int menu() {/*Menu de opciones */
    int op = 0;
    do {
        printf("\n\t1. Anadir un elemento\n");
         printf("\n\t2. Borrar un elemento\n");
           printf("\n\t3. Visualizar un elemento\n");
            printf("\n\t4. Salir\n");
             scanf("%d", &op);}
    while (op < 1 || op > 4);
    return op;}
/* Introducir un elemento ordenadamente a la lista */
void anadir(telemento **cab, int dato){
    telemento *cabecera = *cab;
    telemento *actual = cabecera, *anterior=cabecera, *q;
    if (cabecera == NULL){ //si esta vacia crear un elemento
        cabecera = NuevoElemto();
        cabecera->dato=dato;
        cabecera->siguiente = NULL;
        *cab = cabecera;
        return;}
    /*entrar en la lista y encontrar el punto de insercion */
    while(actual != NULL && dato > actual ->dato)
    {
        anterior = actual;
        actual = actual->siguiente;
    }
    /*Dos casos:
    1) Insertar al principio de la lista
    2) Insertar despues de anterior*/
    q = NuevoElemto(); //se genera un nuevo elemento
    if(anterior == actual) //insertar al principio
    {
        q->dato = dato;
        q->siguiente = cabecera;
        cabecera = q;
    }
    else // insertar despues de anterior
    {
q->dato = dato;
        q->siguiente = actual;
        anterior->siguiente = q;
    }
    *cab = cabecera;
}
//encontrar un dato y borrarlo
void borrar (telemento **cab, int dato){
    telemento *cabecera = *cab;
    telemento *actual = cabecera, *anterior=cabecera;
    if(cabecera == NULL)
    {
        printf("LISTA VACIA\n");
        return;
    }
    //entrar en la lista y encontrar el elemento a borrar
    while (actual != NULL && dato !=actual->dato)
    {
        anterior=actual;
        actual = actual ->siguiente;
    }
    /*Si el dato se encuentra, borrar el elemento */
    if(anterior ==actual)//borra el elemento de cabecera
    cabecera = cabecera -> siguiente;
    else
        anterior -> siguiente = actual -> siguiente;
        printf("\nDATO BORRADO\n");
        *cab=cabecera;
        getch();
}
/*buscar un elemento determinado en la lista*/
telemento *buscar(telemento *cabecera, int dato){
    telemento *actual = cabecera;
    while(actual != NULL && dato != actual -> dato)
        actual = actual ->siguiente;
        return (actual);
}
    /*Visualizar la lista */
    void visualizar (telemento *cabecera)    {
        telemento *actual = cabecera;
        if (cabecera == NULL)
        printf("LISTA VACIA\n");
        else        {
            while (actual != NULL)            {
                printf("%d\n", actual ->dato);
                actual = actual -> siguiente;
            }
            printf("\n");
        }
    }

