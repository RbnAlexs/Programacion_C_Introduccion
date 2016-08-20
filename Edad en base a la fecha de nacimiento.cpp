/* Elabora un programa en C que obtenga la edad de una persona utilizando como base, la fecha de nacimiento. */
#include<stdio.h>
#include<conio.h>
int main(void) {
   //fecha de nacimiento
   int an,mn,dn;
   //fecha actual
   int aa,ma,da;
   //edad actual (resultado)
   int anio,mes,dia;
   printf("Bienvenido:\n\n\n");
   printf("Para calcular tu edad es necesario ingresar los siguientes datos:");
   printf("\n\nTu anio de nacimiento: "); scanf("%d",&an);
   printf("\n\nTu mes de nacimiento: "); scanf("%d",&mn);
   printf("\n\nTu dia de nacimiento: "); scanf("%d",&dn);
   printf("\n\n------------*****************************************------------");
   printf("\n\nIngresa el anio actual: "); scanf("%d",&aa);
   printf("\n\nIngresa el mes actual: "); scanf("%d",&ma);
   printf("\n\nIngresa el dia actual: "); scanf("%d",&da);
   

   if(ma == mn){
      if(da >= dn){
         anio = aa - an;
      }
      else{
      anio = aa - an - 1;
      }
   }
   
   if(ma>mn){
      anio=aa-an;
   }
   else{
      if(ma<mn)
      {
         anio=aa-an-1;
      }
   }
   if(ma==mn){
      mes=0;
   }
   if(ma<mn){
      mes=ma-mn;
      mes=12+mes;
   }
   if(ma>mn){
      mes=ma-mn;
   }
   if(dn==da){
      dia=0;
   }
   else{
      if(da>dn){
      dia=da-dn;
      }
      else{
         switch(ma){
            case 1:
            dia=da-dn;
            dia=31+dia;
            break;
            case 2:
            if(aa==2012 || an==2016){
               dia=da-dn;
               dia=29+dia;
            }
            else{
               dia=da-dn;
               dia=28+dia;
            }
            break;
            case 3:
            dia=da-dn;
            dia=31+dn;
            break;
            case 4:
            dia=da-dn;
            dia=30+dia;
            break;
            case 5:
            dia=da-dn;
            dia=31+dia;
            break;
            case 6:
            dia=da-dn;
            dia=30+dia;
            break;
            case 7:
            dia=da-dn;
            dia=31+dia;
            break;
            case 8:
            dia=da-dn;
            dia=31+dia;
            break;
            case 9:
            dia=da-dn;
            dia=30+dia;
            break;
            case 10:
            dia=da-dn;
            dia=31+dia;
            break;
            case 11:
            dia=da-dn;
            dia=30+dia;
            break;
            case 12:
            dia=da-dn;
            dia=31+dia;
         break;
         }
      }
  }
   printf("\n\n -> Actualmente tienes %d anios, %d meses y %d dias",anio,mes,dia);
   getch();
   
}


