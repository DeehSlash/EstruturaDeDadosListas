#include "stdafx.h"
#include "removerInicio.h"

bool removerInicio(TLista &lista) {
	if (lista.qtd == 0) {
		return false;
	}
	lista.qtd--;
	for (int i = 0; i < lista.qtd; i++) {
		lista.elementos[i].nome = lista.elementos[i + 1].nome;
	}
	return true;
}
