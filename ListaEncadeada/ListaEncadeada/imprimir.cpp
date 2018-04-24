#include "stdafx.h"
#include "imprimir.h"
using namespace std;

bool imprimir(TLista &lista) {
	system("cls");
	if (lista.qtd == 0) {
		return false;
	}
	TElemento* nav = lista.inicio;
	while (nav != NULL) {
		cout << nav->musica.nome << " - " << nav->musica.autor << "\n";
		nav = nav->proximo;
	}
	cout << "\n";
	system("pause");
	return true;
}
