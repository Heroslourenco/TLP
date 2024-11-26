#include<iostream>

void main() {
	int caixa[10], armario[10], quarto[20], i, pos = 0, maior, posicao;
	for (i = 0; i < 5; i++)
	{
		std::cout << "diz um numeros para a caixa";
		std::cin >> caixa[i];
		std::cout << "diz um numeros para o armario";
		std::cin >> armario[i];
	}
	for (i = 0; i < 10; i++)
	{
		quarto[i] = caixa[pos];
		i = i + 1;
		quarto[i] = armario[pos];
		pos = pos + 1;
	}
	for (i = 0; i < 20; i++)
	{
		std::cout << quarto[i] << " ";
	}
	for (i = 0; i < 20; i++)
	{
		if (quarto[i] > maior)
		{
			maior = quarto[i];
			posicao = i;
		}
	}	std::cout << "o numero maior e o : " << maior << "e estava na posicao : "  "<< posicao\n";
}	