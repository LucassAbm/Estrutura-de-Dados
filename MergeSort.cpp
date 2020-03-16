#include <iostream>
using namespace std;

void intercala (int v[], int inicio, int fim, int meio)
{
	int i, aux[10], poslivre = inicio, a1 = inicio, a2 = meio + 1;
	while (a1 <= meio && a2 <= fim)
	{
		if (v[a1] > v[a2])
		{
			aux[poslivre] = v[a2];
			a2++;
		} else {
		aux[poslivre] = v[a1];
		a1++;
		}
	poslivre++;
	}
	for (i=a1; i<=meio; i++)
	{
		aux[poslivre] = v[i];
		poslivre++;
	}
	for (i=a2; i<=fim; i++)
	{
		aux[poslivre] = v[i];
		poslivre++;
	}
	for (i=inicio; i<=fim; i++)
		v[i] = aux[i];
	
}
void mergesort (int v[], int inicio, int fim)
{
	int meio;
	if (inicio < fim)
	{
		meio = (inicio + fim) / 2;
		mergesort (v, inicio, meio); // Aqui nós temos as chamadas recursivas
		mergesort (v, meio+1, fim); // Aqui também
		intercala (v, inicio, fim, meio); // Chamamos a 'intercala' para fazer as intercalações para formar o vetor original, ordenadamente
	}
}
main ()
{
	int v[10];
	for (int i=0; i<10; i++)
	{
		cout << "Entre com um numero: ";
		cin >> v[i];
	}
	cout << "\nNumeros inseridos: ";
	for (int i =0; i<10; i++)
	cout << v[i] << " ";
	mergesort (v, 0, 9);
	cout << "\nNumeros em ordem decrescente: ";
	for (int i=0; i<10; i++)
	cout << v[i] << " ";
	return 0;
}
