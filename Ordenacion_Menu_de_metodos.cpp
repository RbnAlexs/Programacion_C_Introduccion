#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
#define MAX 100

//Prototipos.
void burbuja(int a[],int n);
void burbujam(int a[],int n);
void mezc(int a[],int b[],int c[],int m,int n);
void insercion(int a[],int n);
void seleccion(int a[],int n);
void shell(int a[],int n);
int numelem();
void tipocap(int a[],int n);
void captura(int a[],int n);
void capinsercion(int a[],int n);
void caleat(int a[],int n);
void ver(int a[],int n);
char menu();
int mcap();

//Principal.
void main(){
 int a[MAX],b[MAX],c[MAX],n,m,k;
 int salir=0;
 do {
 switch(menu()){
	case 'a':
	case 'A':
		 clrscr();
		 n=numelem();
		 tipocap(a,n);
		 clrscr();
		 printf("Su Arreglo:\n");
		 ver(a,n);
		 printf("\n\nPresione Cualquier Tecla, ");
		 printf("Para Comenzar Ordenamiento...");
		 getch();
		 burbuja(a,n);
		 clrscr();
		 printf("Arreglo ordenado:\n");
		 ver(a,n);
		 getch();
		 break;
	case 'b':
	case 'B':
		 clrscr();
		 n=numelem();
		 tipocap(a,n);
		 clrscr();
		 printf("Su Arreglo:\n");
		 ver(a,n);
		 printf("\n\nPresione Cualquier Tecla, ");
		 printf("Para Comenzar Ordenamiento...");
		 getch();
		 clrscr();
		 burbujam(a,n);
		 clrscr();
		 printf("Arreglo ordenado:\n");
		 ver(a,n);
		 getch();
		 break;
	case 'c':
	case 'C':
		 clrscr();
		 n=numelem();
		 capinsercion(a,n);
		 clrscr();
		 printf("Arreglo ordenado:\n");
		 ver(a,n);
		 getch();
		 break;
	case 'd':
	case 'D':
		 clrscr();
		 n=numelem();
		 tipocap(a,n);
		 clrscr();
		 printf("Su Arreglo:\n");
		 ver(a,n);
		 printf("\n\nPresione Cualquier Tecla, ");
		 printf("Para Comenzar El Ordenamiento...");
		 getch();
		 seleccion(a,n);
		 clrscr();
		 printf("Arreglo ordenado:\n");
		 ver(a,n);
		 getch();
		 break;
	case 'e':
	case 'E':
		 clrscr();
		 n=numelem();
		 tipocap(a,n);
		 clrscr();
		 printf("Su Arreglo:\n");
		 ver(a,n);
		 printf("\n\nPresione Cualquier Tecla, ");
		 printf("Para Comenzar El Ordenamiento...");
		 getch();
		 shell(a,n);
		 clrscr();
		 printf("Arreglo ordenado:\n");
		 ver(a,n);
		 getch();
		 break;
	case 'f':
	case 'F':
		 clrscr();
		 printf("Arreglo N§1\n");
		 delay(1500);
		 m=numelem();
		 tipocap(a,m);
		 printf("Arreglo N§1:\n");
		 ver(a,m);
		 clrscr();
		 printf("Ordenando Arreglo N§1\n");
		 delay(1500);
		 seleccion(a,m);
		 clrscr();
		 ver(a,m);
		 clrscr();
		 printf("Arreglo N§2\n");
		 delay(1500);
		 n=numelem();
		 tipocap(b,n);
		 printf("Arreglo N§2:\n");
		 ver(b,n);
		 clrscr();
		 printf("Ordenando Arreglo N§2\n");
		 delay(1500);
		 seleccion(b,n);
		 clrscr();
		 ver(b,n);
		 clrscr();
		 gotoxy(28,10);
		 printf("Mezclando...");
		 mezc(a,b,c,m,n);
		 delay(1500);
		 clrscr();
		 gotoxy(23,10);
		 printf("Arreglos Mezclados.");
		 delay(1500);
		 clrscr();
		 printf("Ordenado por el Metodo de Mezcla.\n");
		 k=m+n;
		 ver(c,k);
		 getch();
		 break;
	case 's':
	case 'S':
		 salir=1;
		 break;
	default:
			printf("Opcion No Valida.");
			getch();
			break;
  }
 }while(salir!=1);
 clrscr();
 gotoxy(10,15);
 printf("Juan Marcos Rodriguez Rodriguez. copyright 2002A.");
 getch();
}

//Funciones de Prototipos.
void tipocap(int a[],int n){
  switch(mcap()){
	 case 1:
		captura(a,n);
		break;
	 case 2:
		caleat(a,n);
		break;
  }
}

void capinsercion(int a[],int n){
  int i;
  for(i=0;i<n;i++){
	  a[i]=20000;
  }
  for(i=0; i<n; i++){
	  printf("Elemento %d: ", i+1);
	  scanf("%d",& a[i]);
	  insercion(a,n);
  }
}
char menu(){
  char opc;
  clrscr();
  printf("Menu de Metodos de Ordenamiento.\n\n");
  printf("a) Burbuja Simple.\nb) Burbuja Mejorada.\n");
  printf("c) Insercion.\nd) Seleccion.\ne) Shell.\n");
  printf("f) Mezcla.\ns) Salir.\n\nMetodo a Utilizar: ");
  fflush(stdin);
  scanf("%c", &opc);
  return(opc);
}

int mcap(){
  int cap;
  clrscr();
  printf("Modo de Captura.\n\n");
  printf("1) Manual.\n2) Aleatoria.\n");
  printf("\nCaptura de forma: ");
  scanf("%d", &cap);
  return(cap);
}

int numelem(){
  int elems;
  clrscr();
  printf("Numero de elementos: ");
  scanf("%d", &elems);
  return(elems);
}

void captura(int a[],int n){
  int i;
  for(i=0;i<n;i++){
	  printf("Elemento %d: ",i+1);
	  scanf("%d", &a[i]);
	  }
}

void caleat(int a[], int n){
  int i;
  randomize();
  for(i=0;i<n;i++){
	  a[i]=(rand()%100);
  }
}

void ver(int a[], int n){
  int i;
  for(i=0;i<n;i++){
	  printf("Elemento %d: %d\n",i+1, a[i]);
	  }
  delay(1600);
}

void burbuja(int a[],int n){
  int i,j,k=0,aux;
  for(i=0;i<=n;i++){
	  clrscr();
	  printf("Pasada N§%d\n",k);
	  k++;
	  for(j=0;j<n-i;j++){
	  if(a[j]>a[j+1]){
		 aux=a[j];
		 a[j]=a[j+1];
		 a[j+1]=aux;
		 }
	  printf("\n");
	  ver(a,n);
	  }
  }
}

void burbujam(int a[],int n){
  int i,j=0,band=1,aux;
  while(j<n && band==1){
	band=0;
	for(i=0;i<n;i++){
	    if(a[i]>a[i+1]){
	       aux=a[i];
	       a[i]=a[i+1];
	       a[i+1]=aux;
	       band=1;
	       }
	}
	printf("\nPasada N§%d\n",j);
	ver(a,n);
	j++;
  }
}

void insercion(int a[],int n){
  int  i,j,aux;
  for(i=1; i<n; i++){
      j=i;
      aux=a[i];
      while(j>0 && aux<a[j-1]){
	    a[j]=a[j-1];
	    j--;
	 }
     a[j]=aux;

   }
  printf("Los Elementos son:\n ");
  for(j=0; j<n; j++)
      printf("%d\n ",a[j]);
	  getch();
      clrscr();
}



void seleccion(int a[],int n){
	int i=0,j=0,x=0,im,aux;
	for(i=0;i<n-1;i++){
	    x++;
	    im=i;
	  for(j=i+1;j<n;j++){
		if(a[j]<a[im]){
		   im=j;
		}
	    }
	aux=a[i];
	a[i]=a[im];
	a[im]=aux;
	clrscr();
	printf("Pasada N§%d:\n",x);
	ver(a,n);
	}
}

void shell(int a[],int n){
  int inter=(n/2),x=0,i=0,j=0,k=0,aux;
  while(inter>0){
	for(i=inter;i<n;i++){
	    x++;
	    j=i-inter;
	    while(j>=0){
		  k=j+inter;
		  if(a[j]<=a[k]){
		     j--;
		     }
		   else{
		    aux=a[j];
		    a[j]=a[k];
		    a[k]=aux;
			j=j-inter;
		   }
	    }
	    clrscr();
	    printf("Pasada N§%d:\n",x);
	    ver(a,n);

	}
	inter=inter/2;
  }
}

void mezc(int x[],int y[],int z[],int m,int n){
	int i=0,j=0,k=0;
	while((i<=m)&&(j<n)){
		  if(x[i]<=y[j]){
		 z[k]=x[i];
		 i++;
		 }
		  else{
		   z[k]=y[j];
		   j++;
		  }
		  k++;
	}
	if(i!=m){
	   do{
		  z[k]=x[i];
		  k++;
		  i++;
		 } while(i<=m);
	}
	else {
	   do{
		  z[k]=y[j];
		  k++;
		  j++;
		 } while(j<=n);

	}
}
