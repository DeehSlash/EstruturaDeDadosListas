#include "stdafx.h"
#include "bubbleSort.h"
using namespace std;

bool bubbleSort(TLista & lista)
{
	if (lista.qtd <= 1) {
		return false;
	}
	int indice = lista.qtd;
	indice--;
	string aux;
	for (int i = 0; i <= lista.qtd; i++) {
		for (int i = 0; i < indice; i++) {
			if (lista.elementos[i].nome > lista.elementos[i + 1].nome) {
				aux = lista.elementos[i + 1].nome;
				lista.elementos[i + 1].nome = lista.elementos[i].nome;
				lista.elementos[i].nome = aux;
			}
		}
	}
	return true;
}
