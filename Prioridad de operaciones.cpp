/*
Lo que Aprendí: Realiza un programa en donde
utilices, por lo menos, una de las
expresiones aritméticas (lógicas y relacionales), a la
vez que cambies
la prioridad de los operadores aritméticos utilizando
paréntesis, deberas mostrar los valores con el cambio de prioridad.
Nota:  
La prioridad es mayor en la multiplicación que en la
suma, ejemplo el valor de: 3 más 5 * 3 = 18; pero cambiando prioridad: (3 más 5) * 3 = 24
*/

#include<stdio.h>
#include <iostream>
int main(){
int numero_1, numero_2, numero_3, numero_4, opcion, numero_4_par;
float resultado;   
       
    printf("Ingresa un numero: ");
    scanf("%d", &numero_1);
    printf("Ingresa otro numero: ");
    scanf("%d", &numero_2);
    printf("Ingresa otro numero: ");
    scanf("%d", &numero_3);
    printf("Ingresa otro numero: ");
    scanf("%d", &numero_4);
    printf("Elige una opcion \n 1 - (a + b * c) / d \n 2 - a *(b + c) / d ");
    scanf("%d", &opcion);
    numero_4_par = numero_4%2;
    if (opcion == 1){
        if (numero_4 = 2 || numero_4_par ==0 ){
            resultado = (numero_1 + numero_2 * numero_3) /numero_4;
            printf("( %d +  %d *  %d ) /  %d = %.0f \n", numero_1,numero_2,numero_3, numero_4, resultado);
        }else{
            resultado = (numero_1 * numero_2 + numero_3) /numero_4;
            printf("( %d +  %d *  %d ) /  %d = %.2f \n", numero_1,numero_2,numero_3, numero_4, resultado);
              }
    }else{
          resultado = numero_1 * (numero_2 + numero_3) /numero_4;
          printf(" %d *  (%d +  %d ) /  %d = %.2f \n", numero_1,numero_2,numero_3, numero_4, resultado);
    }
    system("pause");

}

