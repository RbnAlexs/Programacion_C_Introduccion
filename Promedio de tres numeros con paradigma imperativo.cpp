/*Escribe el código fuente de un

programa en "C" que obtenga el promedio de tres

números, empleando cada uno de los paradigmas de

programación: imperativo, orientado a objetos y

funcional, son tres códigos los que se entregan*/

 

//Código de paradigma imperativo

#include<stdio.h>

int main(){ 

int numero_1, numero_2, numero_3, promedio;       

    printf("Ingresa un numero: ");

    scanf("%d", &numero_1);

    printf("Ingresa otro numero: ");

    scanf("%d", &numero_2);

    printf("Ingresa otro numero: ");

    scanf("%d", &numero_3);

    promedio = (numero_1 + numero_2 + numero_3)/3;

    printf("El promedio de los numeros ingresados es %d", promedio);

    getchar();

}

 



   
