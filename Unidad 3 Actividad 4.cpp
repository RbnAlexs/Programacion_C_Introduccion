/*
Escribe un programa que valide una contraseña ingresada por el usuario. El usuario tendrá tres intentos para
ingresar la contraseña correcta, de lo contrario,el programa mostrará el mensaje *usuario no autorizado*
*/
#include<stdio.h>
#include<iostream> 
#include <string.h>

int main(void) {
    //Password definido por el programador
    const char password[] ="holamundo";
    //Password definido por el usuario
    char password_usuario[100];
    //numero maximo de intentos
    int intentos = 3;
    //contador para el numero de intentos
    int i;

    //ciclo for para contabilizar el numero de intentos
    for ( i= 0;i<3; i++ ){
        
        printf("Ingrese su password, por favor: ");
        scanf("%s", password_usuario);
        //comparacion de cadenas entre en password definido y el password ingresado por el usuario
        if (strcmp(password, password_usuario) != 0) { 
                             
                             printf("\nPassword no valido...\n\n"); 
                             }else{
                                   printf("Bienvenido al sistema! \n");
                                   break;}
       
        }
         if (i >= intentos){
              printf(" \nUsuario no autorizado!!\n\n\n");
              }
    
system("pause"); 
return 0; 
  
}

