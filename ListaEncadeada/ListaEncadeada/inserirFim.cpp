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
	}
	else {
		TElemento* nav = lista.inicio;
		while (nav->proximo != NULL) {
			nav = nav->proximo;
		}
		nav->proximo = novo;
	}
	novo->proximo = NULL;
	lista.qtd++;
	return true;
}
