#include <iostream>
#include <conio.h>

using namespace std;

//Prototipos
void menu();
void area_rectangulo(float a, float l);
void area_triangulo(float b, float h);
void area_rombo(float D, float d);
void area_paralelograma(float b, float h);
void area_trapecio(float B, float b, float h);
void area_circulo(float r);


int opc;
float a,l,b,h,D,d,B,r;
int main(){
	menu();
	//se utiliza la expresion "SWITCH" para que ejecute unas sentencias ya asignadas y definidas
	switch (opc){
		//se definen los casos, o sea las posibles opciones del usuario
		case 1:
			area_rectangulo(a,l);
			break; //break se utiliza para salirse del bucle "SWITCH" y seguir haciendo las ejecuciones
		case 2:
			area_triangulo(b,h);
			break;
		case 3:
			area_rombo(D,d);
			break;	
		case 4:
			area_paralelograma(b,h);
			break;
		case 5:
			area_trapecio(B,b,h);
			break;
		case 6:
			area_circulo(r);
			break;
		//se utiliza "DEFAULT" para cuando el usuario digite una opcion no definida haga una sentencia, en este caso, imprimir un mensaje
		default:
			cout<<"La opcion no existe :(";
			cout<<endl;
	}
	
	//Lee un solo carácter directamente desde el teclado, sin mostrar tal carácter en pantalla y cierra la ejecucion del programa
	getch();
	return 0;
}

//subproceso para mostrar el menu al usuario
void menu(){
	
	cout<<"**************************************"<<endl;
	cout<<"Ingrese la opcion que desea calcular: "<<endl;
	cout<<"**************************************"<<endl;
	cout<<endl;
	
	cout<<"1) Calcular el area de un RECTANGULO"<<endl;
	cout<<"2) Calcular el area de un TRIANGULO"<<endl;
	cout<<"3) Calcular el area de un ROMBO"<<endl;
	cout<<"4) Calcular el area de un PARALELOGRAMA"<<endl;		
	cout<<"5) Calcular el area de un TRAPECIO"<<endl;
	cout<<"6) Calcular el area de un CIRCULO"<<endl;
	cout<<endl;
	cin>>opc;
}

//1)subproceso para calcular el área, segun la opcion señalada por el usuario, en este caso: RECTÁNGULO
void area_rectangulo(float b, float l){
	float area;
	
	cout<<"Ingrese la base del rectangulo: ";
	cin>>b;
	
	cout<<"Ingrese la altura del rectangulo: ";
	cin>>l;
	
	area = b*l;
	cout<<"El area del rectangulo es: "<<area<<endl;
}

//2)subproceso para calcular el área del TRIANGULO
void area_triangulo(float b, float h){
	float area;
	
	cout<<"Ingrese la base del triangulo: ";
	cin>>b;
	
	cout<<"Ingrese la altura del triangulo: ";
	cin>>h;
	
	area = (b*h)/2;
	cout<<"El area del triangulo es:" <<area<<endl;
}

//3)subproceso para calcular el área del ROMBO
void area_rombo(float D, float d){
	float area;
	
	cout<<"Ingrese la diagonal mayor: ";
	cin>>D;
	
	cout<<"Ingrese la diagonal menor: ";
	cin>>d;

	area = (D * d)/2;
	cout<<"El area del rombo es:" <<area<<endl;
}

//4)subproceso para calcular el área del PARALELOGRAMA
void area_paralelograma(float b, float h){
	float area;
	
	cout<<"Ingrese la base: ";
	cin>>b;
	
	cout<<"Ingrese la altura: ";
	cin>>h;
	
	area = b * h;
	cout<<"El area del paralelograma es:" <<area<<endl;
}

//5)subproceso para calcular el área del TRAPECIO
void area_trapecio(float B, float b, float h){
	float area;
	
	cout<<"Ingrese la base mayor: ";
	cin>>B;
	
	cout<<"Ingrese la base menor: ";
	cin>>b;
	
	cout<<"Ingrese la altura: ";
	cin>>h;
	
	area = ((B * b) /2) * h;
	cout<<"El area del trapecio es:" <<area<<endl;
}

//6)subproceso para calcular el área del CÍRCULO
void area_circulo(float r){
	float area;
	
	cout<<"Ingrese el radio"<<endl;
	cin>>r;
	
	float radio = r*r;
	area =  3.14159 * radio;
	cout<<"El area del circulo es:" <<area<<endl;
}
