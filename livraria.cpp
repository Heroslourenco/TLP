#include<iostream>

#include<time.h>

using namespace std;

int main()

{

	int i, apostas[20], ndj, maior = 0, nmaior = 0;

	int nA = rand() % 98 + 1;

	cout << "how many players\n";

	cin >> ndj;

	srand(time(0));

	cout << nA;

	for (i = 0; i < ndj; i++)

	{

		cout << "Whats the bet of the " << i + 1 << " player";

		cin >> apostas[i];

	}

	for (i = 0; i < ndj; i++)

	{

		if (apostas[i] <= nA)

		{

			if (apostas[i] > maior)

			{

				maior = apostas[i];

			}

		}

	}

	for (i = 0; i < ndj; i++)

	{

		if (apostas[i] > nA)

		{

			nmaior = nmaior + 1;

		}

		if ((apostas[i] < nA) && (apostas[i] == maior))

		{

			cout << "the " << i + 1 << " bet won";

			break;

		}

		else if (apostas[i] == nA)

		{

			cout << "the " << i + 1 << " bet won";

			break;

		}

		else if (nmaior == ndj)

		{

			cout << "no one wins";

		}

	}

}
