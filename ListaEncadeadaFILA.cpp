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

main()
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
	} while(op != 0);
}

int menu()
{
	int opcao;
	cout << "\nDigite opcao (0 - 3): ";
	cout << "\n1. Inserir elemento";
	cout << "\n2. Retirar elemento";
	cout << "\n3. Listar elementos";
	cout << "\n0. Sair" << endl;
	cin >> opcao;
	return opcao;
}

void insere()
{
	noPtr aux, p;
	p = new no;
	cout << "\nDigite o valor do elemento: " << endl;
	cin >> p->info;
	p->prox = NULL;
		if(listaVazia())
		inicio = p; // inicio terá como primeiro elemento, p
		else
		{
			aux = inicio;
			while(aux->prox != NULL)
			aux = aux->prox;
			aux->prox = p;
		}
	
}

void retira()
{
	noPtr p;
		if(listaVazia())
		cout << "\nLista Vazia" << endl;
		else
		{
			p = inicio;
			inicio = p->prox;
			delete(p);
			cout << "\nO elemento foi retirado da Fila" << endl;
		}
}

void listar()
{
	noPtr p = inicio;
		if(listaVazia())
		cout << "\nLista Vazia" << endl;
		else
		{
			cout << "\nOs elementos da lista sao: ";
			cout << "\nINICIO";
			while(p != NULL)
			{
				cout << "-->" << p->info;
				p = p->prox;
			}
			cout << "--> NULL";
		}
}

bool listaVazia()
{
	if(inicio)
	return false;
	else
	return true;
}
