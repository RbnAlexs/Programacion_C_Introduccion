#include "stdio.h"
#include "conio.h"
main()
{
 int D;
 printf("introduce un numero del uno al siete: ");
 scanf("%d",&D);
 switch(D)
 {
  case 1: printf("es lunes");
          getche();
		  break;
  case 2: printf("es martes");
          getche();
          break;
  case 3: printf("es miercoles");
          getche();
		  break;
  case 4: printf("es jueves");
          getche();
		  break;
  case 5: printf("es viernes");
          getche();
          break;
  case 6: printf("es sabado");        
          getche();
		  break;
  case 7: printf("es domingo");
          getche();
		  break;
  default: printf("no corresponde a ningun dia");
   
  		  
		  		  
		    
				  
		          
				   		
 }	
}
