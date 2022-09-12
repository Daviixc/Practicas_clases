#include "Potencia.h"
#include <cstdlib>
#include <iostream>

using namespace std;
int main (int argc, char * arg[])
{
	Potencia P;
	int  p, opc, b, n;
	bool repetir = true;
	
	do
	{
		cout<<"\n               ====================================================="<<endl;
		cout<<"                            Programa de recursividad "<<endl;
		cout<<"                     ***Elaborado por David Gonzalez Gonzalez***       "<<endl;
		cout<<"               ====================================================="<<endl;
		cout<<"Eliga la opcion que desee "<<endl;
        cout<<"1.- Iterativa"<<endl;
        cout<<"2.- recursiva"<<endl;
        cout<<"3.- salir del programa"<<endl;
        cout<<"Eliga una opcion: ";
        cin>>opc;
    
    switch (opc)
	{
		case 1:system ("cls");
			cout<<"***Interativa***"<<endl;
   		 	cout<<"Ingresa la base: ";
   		 	cin>>b;
   		 	if (b <= 0)
   		 	{
   		 		cout<<"***Error*** solo se aceptan numeros positivos"<<endl;
   		 		break;
			}
   		 	cout<<"Ingresa la potencia: ";
	 		cin>>n;
	 		if (n <= 0)
   		 	{
   		 		cout<<"***Error*** solo se aceptan numeros positivos"<<endl;
   		 		break;
			}
   		    P.potenciaIterativa(b,n);
   		    P.visualizarint();
			 break;
	 
	 	case 2: system ("cls");
	 		cout<<"***recursiva***"<<endl;
	 		cout<<"Ingresa la base: ";
	 		cin>>b;
	 		if (b <= 0)
   		 	{
   		 		cout<<"***Error*** solo se aceptan numeros positivos"<<endl;
   		 		break;
			}
	 		cout<<"Ingresa la potencia: ";
	 		cin>>n;
	 		if (n <= 0)
   		 	{
   		 		cout<<"***Error*** solo se aceptan numeros positivos"<<endl;
   		 		break;
			}
	 		
	 		P.calcularPotencia(b,n);
			P.visualizar();
			
			break;
	 	case 3:
			exit (0);
			break;
			
	 	default:system ("cls");
			cout<<"\n ***ERROR*** Eliga solo entre las opciones que se le muestran.";
			break;
	
	}
	 } while (repetir);
	
 getchar();
   system("pause");
   return 0;
}
