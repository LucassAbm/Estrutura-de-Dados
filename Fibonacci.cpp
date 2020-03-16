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
	cout << fibonacci(i) << " "; // Em C++ nós não precisamos declarar variáveis para fazer esse tipo de chamada de função
	return 0;
}
