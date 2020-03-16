#include <iostream>
using namespace std;

void selectionsort (int v[])
{
	int i, j, aux, x;
	for (i=0; i<9; i++)
	{
		x = i;
		for (j=i+1; j<10; j++)
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
}
main ()
{
	int v[10], i;
	cout << "Insira numero: ";
	for (i=0; i<10; i++)
	{
		cin >> v[i];
	}
	cout << "\nNumeros inseridos: ";
	for (i=0; i<10; i++)
	{
		cout << v[i] << " ";
	}
	selectionsort(v);
	cout << "\nNumeros em ordem crescente: ";
	for (i=0; i<10; i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}

