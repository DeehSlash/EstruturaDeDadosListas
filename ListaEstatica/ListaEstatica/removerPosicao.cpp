#include "stdafx.h"
#include "removerPosicao.h"

bool removerPosicao(TLista &lista, int indice) {
	if (lista.qtd == 0 || indice > lista.qtd) {
		return false;
	}
	indice--;
	lista.qtd--;
	for (int i = indice; i < lista.qtd; i++)
		lista.elementos[i].nome = lista.elementos[i + 1].nome;
	return true;
}
