//Código de paradigma orientado a objetos

#include <iostream>

#include <conio.h>

#include <stdlib.h>

using namespace std;

class califica{

       private:

       int i,f;

       float numero[5];

       float acum;

       float promedio;

       public:

       void notas();

};

void califica::notas(){  

    cout << "Ingresa tres numeros para calcular su promedio\n";

    f=0;

    for(i=1;i<=3;i++){

      cout << "numero " << i <<":";

      cin >>numero[i];

      f++;

    }

 

    for(i=1;i<=3;i++){

         acum=acum+numero[i];

         promedio=acum/3;

       }

 

    cout<<"El promedio de los numeros ingresados es: ";

    cout << promedio; 

    getchar();

}

 

main(){

    califica cali;

    cali.notas();

    getchar();

    }
