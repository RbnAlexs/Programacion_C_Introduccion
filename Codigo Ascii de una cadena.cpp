#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include<conio.h>

#define LONG_CADENA 128 

int main(void) 
{ 
   char cadena[LONG_CADENA]; 
   char *aux; 
   int i; 
    
   printf("Introduce una cadena: "); 
   fflush(stdout); 
    
   if (fgets(cadena, LONG_CADENA, stdin) == NULL) 
      return EXIT_FAILURE; 
   if ((aux = strchr(cadena, '\n')) != NULL) 
      *aux = '\0'; 
    
   for (i = 0; cadena[i] != '\0'; i++) 
      printf("cadena[%2d] == \'%c\' == %3d\n", i, cadena[i], cadena[i]); 
    
   getch(); 
}
