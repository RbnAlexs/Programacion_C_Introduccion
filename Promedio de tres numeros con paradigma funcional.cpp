//Código para paradigma funcional

#include <iostream>

using namespace std;

int i,  numero[3], promedio_final, acum;  

 

void ingresar_numeros(){

      for(i=1;i<=3;i++){

          cout << "numero " << i <<":";

          cin >>numero[i];

         } 

    acum= 0;              

    for(i=1;i<=3;i++){

         acum=acum+numero[i];

         promedio_final=acum;

       }

    promedio_final = promedio_final/3;

    cout<<"El promedio de los numeros ingresados es: ";

    cout << promedio_final; 

    getchar();

     }

 

void promedio(void) {

            printf("Ingresa tres números para calcular su promedi:\n");

            ingresar_numeros();

            getchar();

            

}

 

int main (void){

    promedio();

    return 0;

}

   
