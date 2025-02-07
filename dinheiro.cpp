#include <iostream>

#include <locale.h>

using namespace std;

int deposito(int saldo)

{

	int N;

	srand(time(0));

	string frases[4] = { "milhonario vc","acho que esss dinhero e roubado?","me ensina o segredo","calma calabresa" };

	cout << "quanto quer depositar? ";

	cin >> N;

	if (N > 2000)

	{

		cout << frases[rand() % 4] << "\n";

	}

	cout << "com esse deposito seu saldo fica em ";

	saldo = saldo + N;

	cout << saldo;

	return saldo;

}

int debito(int saldo)

{

	int N;

	cout << "quanto quer debitar? ";

	cin >> N;

	if (N > saldo)

	{

		cout << "infelizmente nao tem esse saldo\n";

	}

	else

	{

		cout << "com esse debito seu saldo ficou em ";

		saldo = saldo - N;

		cout << saldo;

		return saldo;

	}

}

void verificarsaldo(int saldo)

{

	cout << "Seu saldo é " << saldo;

}

int transferir(int saldo)

{

	int N;

	cout << "quanto voce vai enviar? ";

	cin >> N;

	if (N > saldo)

	{

		cout << "nao pode enviar, nao tem dinheiro\n";

	}

	else

	{

		cout << "com esse transferencia seu saldo ficou em";

		saldo = saldo - N;

		cout << saldo;

		return saldo;

	}

}

void iniciarecran()

{

	int escolha, saldo = 1000;

	cout << "Bem vindo ao banco, o que quer fazer.\n";

	do {

		cout << "\n(0 - sair)\n(1 - depositar)\n(2 - débito)\n(3 - verificar saldo)\n(4 - enviar dinheiro)\n";

		cin >> escolha;

		switch (escolha)

		{

		case 0:

		{

			cout << "vc saiu"; break;

		}

		case 1:

		{

			saldo = deposito(saldo); break;

		}

		case 2:

		{

			saldo = debito(saldo); break;

		}

		case 3:

		{

			verificarsaldo(saldo); break;

		}

		case 4:

		{

			saldo = transferir(saldo); break;

		}

		}

	} while (escolha != 0);

}

void main()

{

	setlocale(LC_ALL, "portuguese");

	iniciarecran();

}

