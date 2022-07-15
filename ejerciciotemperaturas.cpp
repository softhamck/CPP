#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float temperatura, sumatotal, promedio, mayor = 0, menor = 999999999999999;
	
	for(int i=0; i<24; i+=4){
		cout<<"Ingrese la temperatura "<<i<<" del dia: "; cin>>temperatura;
		
		sumatotal += temperatura; 
		
		if(temperatura > mayor){
			mayor = temperatura;
		}
		if(temperatura < menor){
			menor = temperatura;
		}
	}
	
	promedio = sumatotal / 6;
	
	cout<<"\nLa temperatura mayor es de: "<<mayor;
	cout<<"\nLa temperatura menor es de: "<<menor;
	cout<<"\nLa temperatura media del dia es de: "<<promedio;
	
	getch();
	return 0;
}
