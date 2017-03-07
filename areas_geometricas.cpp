#include "stdio.h"
#include "conio.h"
main()
{
 float BT,HT,BMR,DR,HP,BMP,BP,PH,AH,AT,AR,AP,AE;
 printf("introduce la base del triangulo: ");
 scanf("%f",&BT);
 printf("introduce la altura del triangulo: ");
 scanf("%f",&HT);
 printf("introduce la diagonal mayor del rombo: ");
 scanf("%f",&BMR);
 printf("introduce la diagonal menor del rombo: ");
 scanf("%f",&DR);
 printf("introduce la altura del traprecio: ");
 scanf("%f",&HP);
 printf("introduce la base mayor del trapecio: ");
 scanf("%f",&BMP);
 printf("introduce la base menor del trapecio: ");
 scanf("%f",&BP);
 printf("introduce el perimetro del hexagono: ");
 scanf("%f",&PH);
 printf("introduce el apotema del hexagono: ");
 scanf("%f",&AH);
 AT=(BT*HT)/2;
 AR=(BMR*DR)/2;
 AP=(HP*(BMP*BP))/2;
 AE=(PH*AH)/2;
 printf("el area del trianguloo es: %f\n",AT);
 printf("el area del rombo es: %f\n",AR);
 printf("el area del trapecio es: %f\n",AP);
 printf("el area del hexagono es: %f\n",AE);
 getche();
 return(0);	
}
