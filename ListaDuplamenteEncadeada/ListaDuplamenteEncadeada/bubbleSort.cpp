#include "stdafx.h"
#include "bubbleSort.h"

bool bubbleSort(TLista & lista)
{
	if (lista.qtd <= 1) {
		return false;
	}
	int indice = lista.qtd;
	indice--;
	TMusica aux;
	TElemento *nav;
	for (int i = 0; i <= lista.qtd; i++) {
		nav = lista.inicio;
		for (int i = 0; i < indice; i++) {
			if (nav->musica.nome > nav->proximo->musica.nome) {
				aux = nav->proximo->musica;
				nav->proximo->musica = nav->musica;
				nav->musica = aux;
			}
			nav = nav->proximo;
		}
	}
	return true;
}