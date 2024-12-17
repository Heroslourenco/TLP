#include<iostream>
using namespace std;
void main() {
	int i, j, tamanho,medias[20],pos,rodo,contar=0;
	string alunos[5],disc[4];
	cout << "quantos alunos sao?";
	cin >> tamanho;
	for ( i = 0; i < tamanho; i++)
	{
		cout << "diz o nome dos " << i + 1 << "alunos\n";
		cin >> alunos[i];
	}
	for ( i = 0; i < tamanho; i++)
	{
		cout << "diz as medias do"<< alunos[i]<<"\n";
		cin >> medias[i];
	}
	for ( i = 0; i < tamanho; i++)
	{
		pos +=medias[i];
		
	}
	
	cout << "as suas medias foram" << pos / rodo;
	

}