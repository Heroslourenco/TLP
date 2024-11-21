#include<iostream>
#include<cstdlib>
#include <iostream>
using namespace std;
void main (){
	int i , numero;
	do
	{
		cout << "diz um numero:";
		cin >> numero;
	} while (numero < 0 || numero > 100);
	for (i = numero; i >= 0; i--)
	{
		if (i % 2 != 0)
		{
			cout << i << "\n";
		}



	}








}
