

/*
  
Facultad de Contaduría y Administración - 
UNAM
SuayEd
Lic. en Informática

Asignatura: Introducción a la programación
Nombre: Sánchez Colín Rubén Alejandro

"	Unidad: 4
"	Actividad: 3



.


 */
 
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
 
 // Funciones de quicksort para ordenar el arreglo
 
 // 1- Función de dividir el arreglo para luego ordenarlo en la función quicksort
    int divide(int *array, int start, int end) {
    int left;
    int right;
    int pivot;
    int temp;
 
    pivot = array[start];
    left = start;
    right = end;
 
    // Mientras no se cruzen los índices
    while (left < right) {
        while (array[right] > pivot) {
            right--;
        }
 
        while ((left < right) && (array[left] <= pivot)) {
            left++;
        }
 
        // Si todavía no se cruzan los indices seguimos intercambiando
        if (left < right) {
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
        }
    }
 
    // Los índices ya se han cruzado, ponemos el pivot en el lugar que le corresponde
    temp = array[right];
    array[right] = array[start];
    array[start] = temp;
 
    // La nueva posición del pivot
    return right;
}
 
// Función recursiva para hacer el ordenamiento, fuente: http://codigoprogramacion.com/cursos/tutoriales-c/quicksort-en-c-algoritmo-de-ordenamiento.html#.VyLvHDB97IU, donde *array será el apuntador que nos indique la ubicación del numero a buscar
void quicksort(int *array, int start, int end)
{
    int pivot;
 
    if (start < end) {
        pivot = divide(array, start, end);
 
        // Ordeno la lista de los menores
        quicksort(array, start, pivot - 1);
 
 
        // Ordeno la lista de los mayores
        quicksort(array, pivot + 1, end);
    }
}


//Función de busqueda binaria 
int busqueda_binaria(int *array, int searched, int arraySize)
{
    int first = 0;
    int middle;
    int last = arraySize - 1;
 
    while (first <= last) {
        middle = (first + last) / 2;
 
        if (searched == array[middle]) {
            cout << "Se encuentra en la posición " << middle + 1 << endl;
            return array[middle];
        } else {
        
            if (array[middle] > searched) {
                last = middle - 1;
            } else {
                first = middle + 1;
               
            }
            
        }
    }
    return -1;
}
 
//Función para imprimir el arreglo ordenado
void mostrar_arreglo(int *array, int arraySize)
{
   for (int i = 0; i < arraySize; i++) {
        cout << array[i] << "  ";
   }
   cout << endl << endl;
}
 
int main()
{
 //Iniciamos con el tamaño del arreglo, que en este caso es de 100 elementos (0 al 99)
 int arraySize = 100;
 //Este será nuestro arreglo que guardará los 100 numero aleatorios.
 int array[arraySize];
 //Variable para el numero a buscar 
 int searched;
 //Esta será un pequeño bucle que nos generará números aleatorios con la funcion "time" de la librería time.h
    srand(time(NULL));
    for (int i = 0; i < arraySize; i++) {
    //Se le asignará a cada espacio del arreglo un número aleatorio que va del 0 al numero 149
        array[i] = rand() % 150;
    }
 
    cout << "Array ordenado: " << endl;
    //Llamamos a la función de ordenamiento
    quicksort(array, 0, arraySize);
    //Imprimimos el arreglo ordenado
    mostrar_arreglo(array, arraySize);
//Solicitamos el número a buscar y la guardamos en la variable searched, la cual después enviaremos a una función
    cout << "Busqueda binaria -> Ingresa el elemento a buscar: ";
    cin >> searched;
    //La función de búsqueda binaria recibirá el arreglo, el número a buscar y el tamaño del arreglo para su correcta ejecución
    busqueda_binaria(array, searched, arraySize);
}

