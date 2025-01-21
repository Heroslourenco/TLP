#include<iostream>
#include<locale.h>
#include<string>
using namespace std;

int mensais(int total[2])
{
	int resultado = total[2];
	return resultado;
}
int total(int total[2])
{
	int resultado = total[2];
	return resultado;
}
void main() {
	string meses[3] = { "janeiro","fevereiro","marco" }, produtos[2] = { "batatas","cenoras"};
		int i,j, calcular, valores[3][2], resol,sair = 1,resto = 1;
		do
		{
			cout << "quer 1-calcular totais mensais,2-calcular totais por produtos ou 0-sair";
			cin >> calcular;
			cout << "quantos produtos voce comeu  ";
			for ( i = 0; i < 3 ; i++)
			{
				for ( j = 0; j < 2; j++)
				{
					cout<< meses[i]<<"\n" << produtos[j];
					cin >> valores[i][j];
					
				}
			}
			switch (calcular)
			{
			case 0:
			{
				sair = 0;
				break;
			}
			case 1:
			{
				resol = total (valores[j]);
				cout << resol; break;
				 
			}
			case 2:
			{
				resol = total (valores[j]);
				cout << resol; break;
			}
			}
		} while (sair = 0);

}

#include<iostream>
#include<locale.h>
#include<string>
using namespace std;

int mensais(int total[2])
{

	int resultado = total[2];
	return resultado;

}
int total(int total[2])
{

	int resultado = total[2];
	return resultado;
}
void main() {
	string meses[3] = { "janeiro","fevereiro","marco" }, produtos[2] = { "batatas","cenoras" };
	int i, j, calcular, valores[3][2], resol, sair = 1, resto = 1;
	do
	{
		cout << "quer 1-calcular totais mensais,2-calcular totais por produtos ou 0-sair";
		cin >> calcular;
		cout << "quantos produtos voce comeu  ";
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 2; j++)
			{
				cout << meses[i] << "\n" << produtos[j];
				cin >> valores[i][j];

			}
		}
		switch (calcular)
		{
		case 0:
		{
			sair = 0;
			break;
		}
		case 1:
		{
			resol = total(valores[j]);
			cout << resol; break;

		}
		case 2:
		{
			resol = total(valores[j]);
			cout << resol; break;
		}
		}
	} while (sair = 0);

}
