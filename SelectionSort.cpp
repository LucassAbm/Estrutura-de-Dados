#include <iostream>
using namespace std;

int main()
{
	int v[5], i, j, aux, x;
	for (i = 0; i < 5; i++)
	{
		cout << "\nInsira um numero: ";
		cin >> v[i];
	}
	cout << "\nNumeros inseridos: ";
	for (i = 0; i < 5; i++)
	{
		cout << v[i] << " ";
	}
	for (i = 0; i < 4; i++)
	{
		x = i;
		for (j = i + 1; j < 5; j++)
		{
			if (v[x] > v[j])
			{
				x = j;
			}
		}
		aux = v[i];
		v[i] = v[x];
		v[x] = aux;
	}
	cout << "\nNumeros em ordem: ";
	for (i = 0; i < 5; i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}
