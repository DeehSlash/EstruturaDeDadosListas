#include "stdafx.h"
#include "inserirFim.h"

bool inserirFim(TLista &lista, TMusica musica) {
	TElemento* novo = new TElemento;
	if (novo == NULL) {
		return false;
	}
	novo->musica = musica;
	if (lista.inicio == NULL) {
		lista.inicio = novo;
		lista.fim = novo;
		novo->anterior = NULL;
	}
	else {
		lista.fim->proximo = novo;
		novo->anterior = lista.fim;
		lista.fim = novo;
	}
	novo->proximo = NULL;
	lista.qtd++;
	return true;
}