#include<iostream>
#include<string>
using namespace std;
void main() {
	int i, j, c, escolha, lgcg = 0, cglg = 1, tamanho,palavra;
	string  morse[27] = { ".-", "-... ", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-",  "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "..-", "-.--", "--.." };
	char alfabeto[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' }, frase[100];
	cout << "qual o tamanho da frase?";
	cin >> tamanho;
	cout << "queres comparar do cg para a lg prime 1 ou da lg para cg 0 ";
	cin >> escolha;
	cout << "diz a frase";
	cin >> frase;
	for (i = 0; i < tamanho; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (frase[i] == alfabeto[j])
			{
				cout << morse[j];
			}
		}
	}
} 