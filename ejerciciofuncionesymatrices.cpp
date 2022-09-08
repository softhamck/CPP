/*  a) Almacene números aleatorios (menores o iguales a 10) en una matriz de 5 * 6.  
    b) Recorra la matriz: mostrando sus elementos 
    c) Imprima la suma de los números almacenados en la matriz. 
    d) Imprima la suma de los números pares almacenados en la matriz 
    e) Imprima la suma de los números impares almacenados en la matriz 
    f) Imprima la suma de cada columnas 
    g) Imprima la suma de cada fila 
    h) Imprima la suma de los elementos de la diagonal principal*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<iostream>


using namespace std;

//Prototipo
void numaleatorios();
void mostrarmatriz(int matriz[5][6]);
void sumamatriz(int suma[5][6]);
void sumapares(int pares[5][6]);
void sumaimpares(int impares[5][6]);
void sumacolum(int columna[5][6]);
void sumafilas(int filas[5][6]);
void sumadiagonalp(int diagonalp[5][6]);

int main()
{
	numaleatorios();

 return 0;
}

//Funcion: Almacenar numeros aleatorios
void numaleatorios()
{
	int matriz[5][6];
	int num;
	//variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) 
	srand(time(NULL));
	for(int i=0; i<5;i++)
	{
		for(int j=0;j<6;j++)
		{
			num=1+ rand() % (11-1);
			matriz[i][j]=num;
		}
	}
	mostrarmatriz(matriz);
}

//Funcion: Mostrar la matriz en pantalla
void mostrarmatriz(int mostrar[5][6])
{
	for(int i=0; i<5;i++)
	{
		for(int j=0;j<6;j++)
		{
			cout<<mostrar[i][j]<<" ";
		}
		cout<<"\n";
	}
	sumamatriz(mostrar);
}

//Funcion: Imprimir la suma de la matriz
void sumamatriz(int suma[5][6])
{
	int sumavar=0;
	
	for(int i=0; i<5;i++)
	{
		for(int j=0;j<6;j++)
		{
			sumavar+=suma[i][j];
		}
	}
	cout<<"\nLa suma de los valores de la matriz es de: "<<suma;
	sumapares(suma);
}

//Funcion: Imprimir suma de los pares de la matriz
void sumapares(int pares[5][6])
{
	int suma=0;
	
	for(int i=0; i<5;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(pares[i][j]%2==0)
			{
				suma+=pares[i][j];	
			}
		}
	}
	cout<<"\nLa suma de los numeros pares de la matriz es de: "<<suma;
	sumaimpares(pares);
}

//Funcion: Imprmir suma de los impares de la matriz
void sumaimpares(int impares[5][6])
{
	int suma=0;
	
	for(int i=0; i<5;i++)
	{
		for(int j=0;j<6;j++)
		{
			if(impares[i][j]%2!=0)
			{
				suma+=impares[i][j];	
			}
		}
	}
	cout<<"\nLa suma de los numeros impares de la matriz es de: "<<suma;
	sumacolum(impares);	
}

//Funcion: Imprimir la suma de cada columna
void sumacolum(int columna[5][6])
{
	int suma=0;
	
	cout<<"\n\nSuma de columnas:";
	for(int j=0; j<6;j++)
	{
		suma=0;
		for(int i=0;i<5;i++)
		{
			suma+=columna[i][j];
		}
		cout<<"\nColumna "<<j<<" : "<<suma;
	}
	sumafilas(columna);
}

//Funcion: Imprimir suma de cada fila
void sumafilas(int filas[5][6])
{
	int suma=0;
	
	cout<<"\n\nSuma de filas:";
	for(int i=0;i<5;i++)
	{
		suma=0;
		for(int j=0; j<6;j++)
		{
			suma+=filas[i][j];
		}
		cout<<"\nFila "<<i<<" : "<<suma;
	}
	sumadiagonalp(filas);
}

//Funcion: Imprimir diagonal principal
void sumadiagonalp(int diagonalp[5][6])
{
	int suma=0;
	
	for(int i=0; i<5;i++)
	{
		for(int j=0;j<6;j++)
		{
			if( i == j)
			{
				suma+=diagonalp[i][j];	
			}
		}
	}
	cout<<"\n\nLa suma de los numeros de la diagonal principal es de: "<<suma;
}







