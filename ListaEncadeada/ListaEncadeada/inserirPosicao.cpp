#include "stdafx.h"
#include "inserirPosicao.h"

bool inserirPosicao(TLista &lista, TMusica musica, int indice) {
	TElemento* novo = new TElemento;
	if (novo == NULL) {
		return false;
	}
	novo->musica = musica;
	TElemento* nav = lista.inicio;
	for (int i = 1; i < indice - 1; i++) {
		nav = nav->proximo;
	}
	novo->proximo = nav->proximo;
	nav->proximo = novo;
	lista.qtd++;
	return true;
}
