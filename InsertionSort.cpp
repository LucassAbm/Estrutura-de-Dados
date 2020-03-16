#include <iostream>
using namespace std;

void Insertion_Sort (int *v, int n)
{
	int i, chave, j;
	for (i = 1; i < n; i++)
	{
		chave = v[i];
		j = i - 1;
		while (j >= 0 && v[j] > chave)
		{
			v[j + 1] = v[j];
			j = j - 1;
		}
		v[j + 1] = chave;
	}
}
int main ()
{
	int a[] = {46, 54, 25, 354, 5, 146, 38, 468, 1, 98, 249, 42, 65, 4, 9, 81, 49, 14, 70, 99};
	int num = sizeof (a) / sizeof (a[0]);
	Insertion_Sort (a, num);
	for (int i = 0; i < num; i++)
	{
	cout << a[i] << " ";
	}
	return 0;
}
