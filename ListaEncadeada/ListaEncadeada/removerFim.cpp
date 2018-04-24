#include "stdafx.h"
#include "removerFim.h"

bool removerFim(TLista &lista) {
	if (lista.qtd == 0) {
		return false;
	}
	TElemento* nav = lista.inicio;
	while (nav->proximo->proximo != NULL) {
		nav = nav->proximo;
	}
	delete nav->proximo;
	nav->proximo = NULL;
	lista.qtd--;
	return true;
}
