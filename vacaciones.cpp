#include "stdio.h"
#include "conio.h"
main()
{
int b,a,h,o;
printf("cuanto es tu ahorro\n ");
scanf("%d",&h);
printf("cuanto obtienes por beca\n ");
scanf("%d",&b);
printf("con cuanto te apollan tus padres\n ");
scanf("%d",&a);
o=a+h+b;
 if(o>=2000)
 printf("Felicidades, puedes ir de vacaciones");
 else
 printf("Lo siento necesitas trabajar");
 getche();
 return(0);
}


