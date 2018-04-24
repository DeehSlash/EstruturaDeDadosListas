#include "stdafx.h"
#include "inserirInicio.h"

bool inserirInicio(TLista &lista, TMusica musica) {
	TElemento* novo = new TElemento;
	if (novo == NULL) {
		return false;
	}
	novo->musica = musica;
	novo->anterior = NULL;
	novo->proximo = lista.inicio;
	if (lista.qtd>0) {
		novo->proximo->anterior = novo;
	}
	lista.inicio = novo;
	if (lista.qtd == 0) {
		lista.fim = novo;
	}
	lista.qtd++;
	return true;
}