#include "stdafx.h"
#include "imprimir.h"
using namespace std;

bool imprimir(TLista &lista) {
	if (lista.qtd == 0) {
		return false;
	}
	system("cls");
	for (int i = 0; i < lista.qtd; i++) {
		cout << i + 1 << ". " << lista.elementos[i].nome << "\n";
	}
	cout << "\n";
	system("pause");
	return true;
}
