#include "stdafx.h"
#include "inserirPosicao.h"

bool inserirPosicao(TLista &lista, TMusica musica, int indice) {
	TElemento* novo = new TElemento;
	if (novo == NULL) {
		return false;
	}
	novo->musica = musica;
	TElemento* nav = lista.inicio;
	for (int i = 1; i < indice; i++) {
		nav = nav->proximo;
	}
	nav->anterior->proximo = novo;
	novo->anterior = nav->anterior;
	novo->proximo = nav;
	nav->anterior = novo;
	lista.qtd++;
	return true;
}
