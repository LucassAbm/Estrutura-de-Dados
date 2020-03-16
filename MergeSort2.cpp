#include <iostream>
using namespace std;

void intercala (int v[], int inicio, int fim, int meio);
void mergesort (int v[], int inicio, int fim)
{
	int meio;
	if(inicio<fim)
	{
		meio = (inicio+fim)/2;
		mergesort (v, inicio, meio); // Aqui nós temos as chamadas recursivas
		mergesort (v, meio+1, fim); // Aqui também
		intercala (v, inicio, fim, meio); // // Chamamos a 'intercala' para fazer as intercalações para formar o vetor original, ordenadamente
	}
}
void intercala (int v[], int inicio, int fim, int meio)
{
	int i, aux[15], poslivre = inicio, a1 = inicio, a2 = meio+1; // a 'poslivre' será processada no vetor auxiliar,
	while (a1 <= meio && a2 <= fim)								 // 'a1' vai do inicio até o meio do vetor, 'a2' vai do meio até o final do vetor
	{
		if (v[a1] > v[a2])
		{
			aux[poslivre] = v[a2];
			a2++;
		}else{
			aux[poslivre] = v[a1];
			a1++;
		}
		poslivre++; // A 'poslivre' que está no vetor auxiliar também vai ter que incrementar ao final para ir preenchendo as outras
	}				// posições do vetor
	for (i=a1; i<=meio; i++) // Elementos do primeiro array que não foram intercalados
	{
		aux[poslivre] = v[i];
		poslivre++;
	}
	for (i=a2; i<=fim; i++) // Elementos do segundo array que não foram intercalados
	{
		aux[poslivre] = v[i];
		poslivre++;
	}
	for (i=inicio; i<=fim; i++) // Atualiza o array 'v' conforme o array 'aux'
	{
		v[i] = aux[i];
	}
} // O uso do 'for' é para justamente intercalar o que não foi intercalado 
main ()
{
	int v[15];
	for (int i=0; i<15; i++)
	{
		cout << "Entre com o valor do numero: ";
		cin >> v[i];
	}
	mergesort (v, 0, 14); // O '14' é porque a posição final do vetor é a 14
	cout << "\nNumeros ordenados: ";
	for (int i=0; i<15; i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}
