#include "stdafx.h"
#include "inserirInicio.h"

bool inserirInicio(TLista &lista, TMusica musica) {
	TElemento* novo = new TElemento;
	if (novo == NULL) {
		return false;
	}
	novo->musica = musica;
	novo->proximo = lista.inicio;
	lista.inicio = novo;
	lista.qtd++;
	return true;
}
