#include "stdafx.h"
#include "removerFim.h"

bool removerFim(TLista &lista) {
	if (lista.qtd == 0) {
		return false;
	}
	TElemento* nav = lista.fim;
	if (lista.qtd == 1) {
		lista.inicio = NULL;
		lista.fim = NULL;
		delete nav;
		lista.qtd--;
	}
	else {
		nav->anterior->proximo = NULL;
		lista.fim = nav->anterior;
		delete nav;
		lista.qtd--;
	}
	return true;
}