
/*

  
Facultad de Contaduría y Administración - 
UNAM
SuayEd
Lic. en Informática

Asignatura: Introducción a la programación
Nombre: Sánchez Colín Rubén Alejandro

"	Unidad: 3
"	Actividad: Lo que aprendí



.


?
Elabora un programa que, a través del siguiente menú, realice las operaciones de un cajero automático:
Menú Principal
1. Depósitos
2. Retiros	3. Consulta
4. Salir
Restricciones:
. El programa seguirá ejecutándose en tanto el usuario no presione la opción 4, de Salir.
. El usuario:
. Podrá realizar el número de depósitos que desee por cualquier cantidad.
. No podrá realizar un retiro por una cantidad mayor al saldo de la cuenta.
. Podrá consultar en cualquier momento el saldo de su cuenta.*/


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

