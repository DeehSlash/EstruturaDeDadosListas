#include "stdafx.h"
#include "removerPosicao.h"

bool removerPosicao(TLista &lista, int indice) {
	if (lista.qtd == 0) {
		return false;
	}
	TElemento* nav = lista.inicio;
	for (int i = 1; i < indice; i++) {
		nav = nav->proximo;
	}
	nav->anterior->proximo = nav->proximo;
	nav->proximo->anterior = nav->anterior;
	delete nav;
	lista.qtd--;
	return true;
}
