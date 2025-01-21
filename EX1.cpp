#include<iostream>
#include<locale.h>
using namespace std;

int somar(int val1, int val2)
{

	int resultado = val1 + val2;
	return resultado;
}
int multiplicar(int val1, int val2)
{

	int resultado = val1 * val2;
	return resultado;
}
int dividir(int val1, int val2)
{

	int resultado = val1 / val2;
	return resultado;
}
int subtrair(int val1, int val2)
{

	int resultado = val1 - val2;
	return resultado;
}
void main() {
	int i, calcular, val1, val2, resol,sair=1;
	do
	{ 
	cout << "1-somar,2-mult,3-div,4-sub,0- sair";
	cin >> calcular;
	cout << "digite o primeiro val";
	cin >> val1;
	cout << "digite o primeiro val";
	cin >> val2;
	switch (calcular)
	{
	case 0:
	{
		sair = 0;
		break;
	}
	case 1:
	{
		resol = somar(val1, val2);
		cout << resol; break;
	}
	case 2:
	{
		resol = multiplicar(val1, val2);
		cout << resol; break;
	}
	case 3:
	{
		resol = dividir(val1, val2);
		cout << resol; break;

	}
	case 4:
	{
		resol = subtrair(val1, val2);
		cout << resol; break;
	}
	}
	} while (sair = 0);
}
	