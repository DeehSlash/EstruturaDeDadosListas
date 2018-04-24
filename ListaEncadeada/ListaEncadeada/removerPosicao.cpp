#include "stdafx.h"
#include "removerPosicao.h"

bool removerPosicao(TLista &lista, int indice) {
	if (lista.qtd == 0) {
		return false;
	}
	TElemento* nav = lista.inicio;
	for (int i = 1; i < indice - 1; i++) {
		nav = nav->proximo;
	}
	TElemento* del = nav->proximo;
	nav->proximo = del->proximo;
	delete del;
	lista.qtd--;
	return true;
}
