/*"La funci�n getch() no hace eco en la pantalla del car�cter le�do, 
 es decir, no se visualiza en la pantalla lo que se digite en el teclado, 
 en tanto que la funci�n getche() s� visualiza el car�cter en la pantalla"
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
