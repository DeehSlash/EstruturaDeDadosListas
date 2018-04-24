#include "stdafx.h"
#include "removerInicio.h"

bool removerInicio(TLista &lista) {
	if (lista.qtd == 0) {
		return false;
	}
	TElemento* del = lista.inicio;
	TElemento* nav = del->proximo;
	lista.inicio = nav;
	delete del;
	lista.qtd--;
	return true;
}
