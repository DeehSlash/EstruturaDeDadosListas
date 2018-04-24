#include "stdafx.h"
#include "removerFim.h"

bool removerFim(TLista &lista) {
	if (lista.qtd == 0) {
		return false;
	}
	lista.qtd--;
	return true;
}
