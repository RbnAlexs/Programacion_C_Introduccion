#include "stdio.h"
#include "conio.h"
main()
{
 int T;
 printf("introduce la temperatura: ");
 scanf("%d",&T);
   if(T<=20)
     printf("Usar sweter");
   else
    printf("Mantener la calma");
 getche();
 return(0);
}
