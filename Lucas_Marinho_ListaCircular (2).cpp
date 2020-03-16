#include <iostream>
using namespace std;
struct no {
	int info;
	struct no *prox;
};
typedef struct no *noPtr;

void insere (noPtr*,int*);
void retira (noPtr*,int*);
void listar (noPtr,int);
bool listaVazia (noPtr);
int menu ();

noPtr fim = NULL;

main()
{
	int op, qtde = 0;
	noPtr inicio = NULL;
	noPtr fim = NULL;
	do {
			op = menu();
			switch (op)
			{
				case 1: insere (&inicio, &qtde); // Redundância acertada
				cout << "\nA lista possui "<< qtde <<" no(s).\n\n"; break;
				case 2: retira (&inicio, &qtde); break;
				case 3: listar (inicio, qtde); break;
			}
	}while (op != 0);
}

void insere (noPtr *i, int *q) // Transformada em lista circular
{
	noPtr p = new no;
	cout << "\nDigite o valor do elemento: ";
	cin >> p->info;
	if (listaVazia(*i))
	{
		*i = p;
		p->prox = *i;
		fim = *i;
		}else{
			p->prox = *i;
			*i = p;
			fim->prox = *i;
	}
		*q = *q + 1;
}

void retira (noPtr *i,int *q) // Mantendo a lista circular
{
	noPtr p = *i;
	if(!listaVazia(*i))
	{
		if(*q == 1)
			{
				*i = NULL;
				}else
					*i = p->prox;
					fim->prox = *i;
					delete(p);
					cout << "\nO elemento foi retirado da lista!\n";
					*q = *q - 1;
	}else cout << "\n\nLista Vazia!\n";
}

void listar (noPtr i,int q)
{
	if(!listaVazia(i))
	{
		for(int j = 0; j < q ; j++)
		{
			cout << i->info << "\t";
			i = i->prox;
		}
	} else cout << "\n\nLista Vazia!";
}

bool listaVazia (noPtr i)
{
	if(i)
	return false;
	else
	return true;
}

int menu ()
{
	int opcao;
	cout << "\n1: Insere elemento na lista" << endl;
	cout << "2: Retira elemento da lista" << endl;
	cout << "3: Listar elementos" << endl; 
	cout << "0: Sair" << endl;
	cout << "\nDigite a opcao (0 - 3): ";
	cin >> opcao;
	return opcao;
}

