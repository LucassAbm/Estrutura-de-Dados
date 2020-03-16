#include <iostream>
using namespace std;

void bubblesort (int v[])
{
	int i, j, aux;
	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (v[i] > v[j])
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
}

int main ()
{
	int v[5], i, j, aux;
	for (i = 0; i < 5; i++)
	{
		cout << "Insira numero: ";
		cin >> v[i];
	}
	cout << "Numeros inseridos: ";
	for (i = 0; i < 5; i++)
	{
		cout << v[i] << " ";
	}
	bubblesort (v);
	cout << "\nNumeros em ordem: ";
	for (i = 0; i < 5; i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}
