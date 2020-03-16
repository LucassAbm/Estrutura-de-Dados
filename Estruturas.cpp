#include <iostream>
#define T 3
using namespace std;

struct conta {
	int num;
	string nome;
	float saldo;
};
typedef struct conta Conta;

int menu ();
void cadastrar (int *i, Conta *conta);
void consultar (Conta *conta);
void listar (Conta *conta);
int achou (int num, Conta *conta, int *pos);

main ()
{
	int opcao, achou = 0, i = 0;
	Conta cc[T];
	do {
		opcao = menu();
		switch(opcao)
		{
			case 1: cadastrar(&i, cc); break;
			case 2: consultar(cc); break;
			case 3: listar(cc); break;
		}
	}while (opcao =! 4);
}

int menu ()
{
	int op;
	
	cout << "\n\n*****Menu Principal*****";
	cout << "\n1. Cadastrar conta";
	cout << "\n2. Consultar conta";
	cout << "\n3. Listar contas com saldo negativo";
	cout << "\n4. Sair";
	cout << "\n\nEscolha uma opcao: ";
	cin >> op;
	return op;
}
void cadastrar(int *i, Conta *conta)
{
	int x;
	cout << "Cadastrar Conta\n";
	if (*i < T)
	{
		cout << "\nDigite o numero da conta a ser cadastrada: ";
		cin >> x;
			if (achou(x, conta, i) == 0)
			{
				cout << "Digite o nome: ";
				cin >> conta[*i].nome;
				cout << "Digite o valor a ser depositado: ";
				cin >> conta[*i].saldo;
				conta[*i].num = x;
				*i=*i+1;
			}
			else cout << "\nNumero ja cadastrado.\n";
	} else cout << "\nLimite maximo de contas ultrapassado.\n";
}

void consultar (Conta *conta) 
{
	int x, t = 0;
	cout << "**************************\n";
	cout << "Consultar Conta\n";
	cout << "\nDigite o numero da conta para consulta: ";
	cin >> x;
		if (achou(x, conta, &t) == 1)
		{
			cout << "\n" << conta[t].num;
			cout << "\n" << conta[t].nome;
			cout << "\n" << conta[t].saldo;
		}
	else cout << "\nNumero de conta nao cadastrado.\n";
}

void listar(Conta *conta)
{
	cout << "\n*** Listagem das contas negativas ***\n";
	for (int i = 0; i < T; i++)
	{
		if (conta[i].saldo < 0)
		{
			cout << "\n" << conta[i].num;
			cout << "\t" << conta[i].nome;
		}
	}
}

int achou(int num, Conta *conta, int *pos) 
{
	int j=0, aux=0;
	while (aux == 0 && j < T)
	{
		if (conta[j].num == num)
		{
			aux = 1;
			*pos = j;
		}
		else
		j++;
}
return aux;
}
