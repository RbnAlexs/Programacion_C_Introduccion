
/*

  
Facultad de Contadur�a y Administraci�n - 
UNAM
SuayEd
Lic. en Inform�tica

Asignatura: Introducci�n a la programaci�n
Nombre: S�nchez Col�n Rub�n Alejandro

"	Unidad: 3
"	Actividad: Lo que aprend�



.


?
Elabora un programa que, a trav�s del siguiente men�, realice las operaciones de un cajero autom�tico:
Men� Principal
1. Dep�sitos
2. Retiros	3. Consulta
4. Salir
Restricciones:
. El programa seguir� ejecut�ndose en tanto el usuario no presione la opci�n 4, de Salir.
. El usuario:
. Podr� realizar el n�mero de dep�sitos que desee por cualquier cantidad.
. No podr� realizar un retiro por una cantidad mayor al saldo de la cuenta.
. Podr� consultar en cualquier momento el saldo de su cuenta.*/


#include <iostream> 
using namespace std;
int main()
{
  int opcion; 
  const float saldo_inicial = 1500.00;
  float saldo_promedio, saldo_deposito, saldo_retiro;
  saldo_promedio = saldo_inicial;
  cout << "Bienvenido\n\n";
  do { 
  
     
     cout << "\t1) Depositos \n" << endl;
     cout << "\t2) Retiros \n" << endl;
     cout << "\t3) Consulta \n" << endl;
     cout << "\t4) Salir \n\n" << endl;
    
     cout << "Por favor, selecciona una opcion: ";
     cin >> opcion; 
     
    switch(opcion) {

	   case 1:
	      system("cls");
	      cout <<"\n\tEscribe el monto a depositar: ";
	      cin >> saldo_deposito;
	      saldo_promedio = saldo_promedio + saldo_deposito;
	      cout <<"\n\tOperacion realizada con exito\n ";
	      system("pause");
	   	  system("cls");
	    break; 
		
	   case 2:
	   	 system("cls");
	       cout <<"\n\tEscribe el monto a retirar: ";
	       cin >> saldo_retiro;
	      if (saldo_promedio >= saldo_retiro) {
			 
			  saldo_promedio = saldo_promedio - saldo_retiro;
			  cout <<"\n\tOperacion realizada con exito\n ";
		      system("pause");
		   	  system("cls");
			}
			else{
			  cout << "\n\t\t Saldo insuficiente";
			  system("pause");
			  system("cls");
			}
			
	    break; 
	    
	   case 3:
	   	system("cls");
	   	cout<< "Su saldo actual es: ";
		cout<< saldo_promedio;
	   	cout<< "\n\n";
	   	system("pause");
	   	system("cls");
	   break;
	   
	   case 4:
	   	cout <<"Hasta pronto...! ";
	   	return 0;
	   break;
	    	
	}
    
  }
  while(opcion != 4); 
   
   return 0;
}

