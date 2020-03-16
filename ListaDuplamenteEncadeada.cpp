#include <iostream>
using namespace std;

struct no {
	int info;
	struct no *prox;
	struct no *ant;
};
typedef struct no *noPtr;

void inserir(noPtr *i);
void retirar(noPtr *i);
void listar(noPtr p);
bool listaVazia(noPtr p);

main ()
{
	int op;
	noPtr inicio = NULL;
	do {
		cout << "\nDigite uma opcao (0 - 3): ";
		cout << "\n1. Inserir elemento";
		cout << "\n2. Retirar elemento";
		cout << "\n3. Listar elemento";
		cout << "\n0. Sair" << endl;
		cin >> op;
		switch(op)
		{
			case 1: inserir(&inicio); break;
			case 2: retirar(&inicio); break;
			case 3: listar(inicio); break;
		}
	} while(op != 0);
}

void inserir(noPtr *i)
{
	noPtr p = new no;
	cout << "\nDigite o valor do elemento: ";
	cin >> p->info;
		if(listaVazia(*i))
		{
			*i = p;
			p->prox = NULL;
			p->ant = NULL;
		}
		else
		{
			p->ant = NULL;
			p->prox = *i;
			(*i)->ant = p;
			*i = p;
		}
}

void retirar(noPtr *i)
{
	noPtr p = *i;
		if (!listaVazia(*i))
 		{
			if (p->prox == NULL)
			*i = NULL;
			else
			{
				*i = p->prox; // *i = *i->prox
				(*i)->ant = NULL; //p->prox->ant
 			}
			delete(p);
			cout << "\nO elemento foi retirado da lista!\n";
		}
		else cout << "\n\nLista está Vazia!\n";


}

void listar(noPtr p)
{
	if (!listaVazia(p))
	{
		cout << "\nElementos da lista : \n";
		cout << "INICIO";
		while (p != NULL)
		{
			cout << " --> " << p->info;
			p = p->prox;
		}
		cout << " -- > NULL";
	}
	else
	cout << "\n\nLista esta Vazia!\n";
}

bool listaVazia(noPtr p)
{
	if(p)
	return false;
	else
	return true;
}
