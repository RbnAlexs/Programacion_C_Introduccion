/*"La función getch() no hace eco en la pantalla del carácter leído, 
 es decir, no se visualiza en la pantalla lo que se digite en el teclado, 
 en tanto que la función getche() sí visualiza el carácter en la pantalla"
*/


#include<stdio.h>
#include<conio.h>
 main(){
   char caracter;
   int codigo;
   printf("Ingresa un caracter para saber su numero en el codigo ASCII: ");
   codigo=getche(); 
   printf("\n\nEL codigo ASCII de %c es %i:",codigo);
   getch();
   
   
         }
