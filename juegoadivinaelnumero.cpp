#include<iostream>
#include<conio.h>
#include<time.h> 

using namespace std;

int main(){
	int num, aleatorio, intento;
	
	srand(time(NULL));
	aleatorio = 1 + rand()%(100);
	
	cout<<"*************************";
	cout<<"\nJUEGO ADIVINA EL NUMERO";
	cout<<"\n*************************\n";
	
	do{
		cout<<"\n===Digite un numero: "; cin>>num;
		
		if(num>aleatorio){
			cout<<"---Digite un numero menor---\n";
		}
		if(num<aleatorio){
			cout<<"---Digite un numero mayor---\n";
		}
		intento++;
	}while(num !=aleatorio);
	
	cout<<"\nFELICITACIONES ADIVINASTE EL NUMERO\n";
	cout<<"Numeros de intentos: "<<intento;
	
	getch();
	return 0;
