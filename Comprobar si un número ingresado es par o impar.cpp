#include <stdio.h>
main(){
       //Declaramos la variable la cual procesaremos para determinar si es par o impar, como lo marca la actividad
       int numero;
       printf("Programa para averiguar si un numero es par o impar\n");
       //El usuario ingresa un n�mero
       printf("Ingrese un numero\n");
       scanf("%d", &numero);
       //Si el n�mero ingresado es divido entre 2 y su residuo es igual a cero, el n�mero es par
       if ( ( (numero%2) == 0) && numero!=0){
                printf("es par\n");
                }
       //Si el n�mero es igual a cero
       else if (numero==0){
           printf("es nulo\n");
       }
       //Si el n�mero es impar
       else {
                printf("es impar\n");
                }
       getchar();
       }

