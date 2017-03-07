#include "stdio.h"
#include "conio.h"
main()
{
 clrscr();
 float CET,CP,CA,CT,C1,C2,C3,C4,PF;
 printf("introduce la calificacion del examen teorico");
 scanf("%f ,&CET");
 printf("introduce la calificacion de practicas");
 scanf("%f ,&CP");
 printf("introduce la calificacion de asistencia");
 scanf("%f ,&CA");
 printf("introduce la calificacion de actitud");
 scanf("%f ,&CT");
 C1=(CET*50)/100;
 C2=(CP*30)/100;
 C3=(CA*10)/100;
 C4=(CT*10)/100;
 PF=C1+C2+C3+C4;
 printf("el promedio final es: %f\n,PF");
 getche();
 return(0);
}
