#include <iostream>
using namespace std;

void quicksort(int v[], int inf, int sup);
void troca(int *x, int *y);
main ()
{
	int i, v[15];
	for (i=0; i<15; i++)
	{
		cout << "Entre com o valor do numero: ";
		cin >> v[i];
	}
	cout << "\nNumeros inseridos: ";
	for (i=0; i<15; i++)
	{
		cout << v[i] << " ";
	}
	quicksort(v, 0, 14);
	cout << "\nNumeros em ordem: ";
	for (i=0; i<15; i++)
	{
		cout << v[i] << " ";
	}	
}
void troca (int *x, int *y)
{
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}
void quicksort(int v[], int inf, int sup)
{
	int i, j, chave;
	if ((sup - inf) < 2) // O '2' acredito que seja a posição do vetor
	{
		if((sup - inf) == 1)
		{
			if (v[inf] > v[sup])
			{
				troca(&v[inf], &v[sup]);
			}
		}
	}
	else
	{
		i = inf;
		j = sup;
		chave = v[inf];
		while (j>i)
		{
			i++;
			while (v[i] < chave)
			{
				i++;
			}
			while (v[j] > chave)
			{
				j--;
			}
			if (j>i)
			{
				troca(&v[i], &v[j]);
			}
		}
		troca(&v[inf], &v[j]);
		quicksort(v, inf, j-1);
		quicksort(v, j+1, sup);
	}
	
}
