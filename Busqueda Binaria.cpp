

/*
  
Facultad de Contadur�a y Administraci�n - 
UNAM
SuayEd
Lic. en Inform�tica

Asignatura: Introducci�n a la programaci�n
Nombre: S�nchez Col�n Rub�n Alejandro

"	Unidad: 4
"	Actividad: 3



.


 */
 
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
 
 // Funciones de quicksort para ordenar el arreglo
 
 // 1- Funci�n de dividir el arreglo para luego ordenarlo en la funci�n quicksort
    int divide(int *array, int start, int end) {
    int left;
    int right;
    int pivot;
    int temp;
 
    pivot = array[start];
    left = start;
    right = end;
 
    // Mientras no se cruzen los �ndices
    while (left < right) {
        while (array[right] > pivot) {
            right--;
        }
 
        while ((left < right) && (array[left] <= pivot)) {
            left++;
        }
 
        // Si todav�a no se cruzan los indices seguimos intercambiando
        if (left < right) {
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
        }
    }
 
    // Los �ndices ya se han cruzado, ponemos el pivot en el lugar que le corresponde
    temp = array[right];
    array[right] = array[start];
    array[start] = temp;
 
    // La nueva posici�n del pivot
    return right;
}
 
// Funci�n recursiva para hacer el ordenamiento, fuente: http://codigoprogramacion.com/cursos/tutoriales-c/quicksort-en-c-algoritmo-de-ordenamiento.html#.VyLvHDB97IU, donde *array ser� el apuntador que nos indique la ubicaci�n del numero a buscar
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


//Funci�n de busqueda binaria 
int busqueda_binaria(int *array, int searched, int arraySize)
{
    int first = 0;
    int middle;
    int last = arraySize - 1;
 
    while (first <= last) {
        middle = (first + last) / 2;
 
        if (searched == array[middle]) {
            cout << "Se encuentra en la posici�n " << middle + 1 << endl;
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
 
//Funci�n para imprimir el arreglo ordenado
void mostrar_arreglo(int *array, int arraySize)
{
   for (int i = 0; i < arraySize; i++) {
        cout << array[i] << "  ";
   }
   cout << endl << endl;
}
 
int main()
{
 //Iniciamos con el tama�o del arreglo, que en este caso es de 100 elementos (0 al 99)
 int arraySize = 100;
 //Este ser� nuestro arreglo que guardar� los 100 numero aleatorios.
 int array[arraySize];
 //Variable para el numero a buscar 
 int searched;
 //Esta ser� un peque�o bucle que nos generar� n�meros aleatorios con la funcion "time" de la librer�a time.h
    srand(time(NULL));
    for (int i = 0; i < arraySize; i++) {
    //Se le asignar� a cada espacio del arreglo un n�mero aleatorio que va del 0 al numero 149
        array[i] = rand() % 150;
    }
 
    cout << "Array ordenado: " << endl;
    //Llamamos a la funci�n de ordenamiento
    quicksort(array, 0, arraySize);
    //Imprimimos el arreglo ordenado
    mostrar_arreglo(array, arraySize);
//Solicitamos el n�mero a buscar y la guardamos en la variable searched, la cual despu�s enviaremos a una funci�n
    cout << "Busqueda binaria -> Ingresa el elemento a buscar: ";
    cin >> searched;
    //La funci�n de b�squeda binaria recibir� el arreglo, el n�mero a buscar y el tama�o del arreglo para su correcta ejecuci�n
    busqueda_binaria(array, searched, arraySize);
}

