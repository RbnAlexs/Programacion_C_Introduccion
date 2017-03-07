#include "stdio.h"
#include "conio.h"
main()
{
 int HT,IH,S,ST,G;
 printf("horas de trabajo: ");
 scanf("%d",&HT);
 printf("importe por hora: ");
 scanf("%d",&IH);
 S=HT*IH;
     { 
      if (HT>40)
	  G=(HT*5)/100;
	 }
 ST=S+G;
 printf("el sueldo a pagar es: %d",ST);
 getche();
 return(0);	
}
