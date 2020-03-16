 #include <iostream>
using namespace std;
void quicksort (int v[], int inicio, int fim) // inicio e fim indicam a "quantidade"
{
	int i, j, chave, aux;
	i = inicio;
	j = fim-1; // O j indica a posição dentro do vetor a ser assumida, como o vetor vai de 0 até 9, tem que ser fim - 1
	chave = v[(inicio+fim) / 2];
	while (i <= j)
	{
		while (v[i] < chave && i < fim)
		{
			i++;
		}
		while (v[j] > chave && j > inicio)
		{
			j--;
		}
		if (i <= j)
		{
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;
			i++;
			j--;
		}
	}
	if (j > inicio)
	quicksort (v, inicio, j+1);
	if (i < fim)
	quicksort (v, i, fim);
}
int main ()
{
	int a[8] = {25, 17, 32, 4, 8, 12, 42, 80};
	for (int i = 0; i < 8; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	quicksort (a, 0, 8);
	for (int i = 0; i < 8; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
