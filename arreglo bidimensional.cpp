//DESCRIPCION:Programa que define un arreglo bidimensional, y con estructuras for, almacenar los numeros del 1 al 12.
#include "stdio.h"
#include "conio.h"
main()
{
  int c,f;
  int cuadro[3][4];
  
  for(c=1;c<=3;c++)
     for(f=1; f<=4; f++)	 
     cuadro[c][f]=(c*4)+f+1;
  printf("Los datos %d es: \n",(c+1)*(cuadro+c));
  getche();
  return(0);
}
