#include "stdio.h"
#include "conio.h"
main()
{
 int MT,CM,P;
 printf("introduce metros del terreno: ");
 scanf("%d",&MT);
 printf("introduce costo por metro: ");
 scanf("%d",&CM);
 P=MT*CM;
   if (MT<150)
      printf("tiene otro precio");
     else
	  printf("el precio es: %d",P);
   getche();

}
    	   

