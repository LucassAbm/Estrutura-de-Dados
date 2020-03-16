#include <iostream>
using namespace std;

struct no {
	int info;
	struct no *prox;
};
typedef struct no *noPtr;

noPtr inicio = NULL;

int menu();
void insere();
void retira();
void listar();
bool listaVazia();

main ()
{
	int op;
	do {
		op = menu();
		switch(op)
		{
			case 1: insere(); break;
			case 2: retira(); break;
			case 3: listar(); break;
		}
	}while (op != 0);
}

int menu()
{
	int opcao;
	cout << "\nDigite opcao (0 - 3): " << endl;
	cout << "\n1. Inserir elemento";
	cout << "\n2. Retirar elemento";
	cout << "\n3. Listar elementos";
	cout << "\n0. Sair" << endl;
	cin >> opcao;
	return opcao;
}

bool listaVazia()
{
	if(inicio)
	return false;
	else
	return true;
}

void insere()
{
	noPtr p;
	int x;
	p = new no;
	cout << "\n Digite elemento a ser inserido: ";
	cin >> x;
	p->info = x;
	p->prox = inicio;
	inicio = p;
}

void retira()
{
	noPtr p;
	if(!listaVazia())
	{
		p = inicio;
		inicio = p->prox;
		delete(p);
		cout << "\n O elemento foi retirado";
	}
	else cout << "\nLista Vazia";
}

void listar()
{
	noPtr p;
	p = inicio;
	if(!listaVazia())
	{
		cout << "\n Os elementos da lista sao: " << endl;
		while (p != NULL)
		{
			cout << p->info << " ";
			p = p->prox;
		}
	}
	else cout << "\n A lista esta vazia";
}
