#include <iostream>
using namespace std;

int fibonacci(int num)
{
	if (num<2)
	return num;
	else
	return (fibonacci (num-1) + fibonacci (num-2));
}
main ()
{
	int n;
	cout << "Digite a quantidade de numeros: ";
	cin >> n;
	cout << "\nSequencia de fibonacci: ";
	for (int i=0; i<n; i++) // Podemos declarar o 'i' dentro do 'for'
	cout << fibonacci(i) << " "; // Em C++ n�s n�o precisamos declarar vari�veis para fazer esse tipo de chamada de fun��o
	return 0;
}
