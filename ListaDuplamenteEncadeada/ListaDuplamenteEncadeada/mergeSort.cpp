#include "stdafx.h"
#include "mergeSort.h"

void mergeSort(TLista lista, int inicio, int fim)
{
	int metade;
	TElemento *novo = new TElemento;
	TLista listaCopia;
	listaCopia.inicio = novo;

	if (inicio == fim)
		return;

	metade = (inicio + fim) / 2;
	mergeSort(lista, inicio, metade);
	mergeSort(lista, metade + 1, fim);

	int esquerda = inicio, direita = metade + 1, indice = 0;

	TElemento *navEsquerda = lista.inicio;
	TElemento *navDireita = lista.inicio;
	TElemento *navIndice = listaCopia.inicio;

	for (int i = 1; i <= esquerda; i++) {
		navEsquerda = navEsquerda->proximo;
	}

	for (int i = 1; i <= direita; i++) {
		navDireita = navDireita->proximo;
	}

	while (esquerda < metade + 1 || direita < fim + 1) {
		if (esquerda == metade + 1) {
			navIndice->musica = navDireita->musica;
			direita++;
			indice++;
			navDireita = navDireita->proximo;
			TElemento *novo = new TElemento;
			navIndice->proximo = novo;
			navIndice = navIndice->proximo;
		}
		else {
			if (direita == fim + 1) {
				navIndice->musica = navEsquerda->musica;
				esquerda++;
				indice++;
				navEsquerda = navEsquerda->proximo;
				TElemento *novo = new TElemento;
				navIndice->proximo = novo;
				navIndice = navIndice->proximo;
			}
			else {
				if (navEsquerda->musica.nome < navDireita->musica.nome) {
					navIndice->musica = navEsquerda->musica;
					esquerda++;
					indice++;
					navEsquerda = navEsquerda->proximo;
					TElemento *novo = new TElemento;
					navIndice->proximo = novo;
					navIndice = navIndice->proximo;
				}
				else {
					navIndice->musica = navDireita->musica;
					direita++;
					indice++;
					navDireita = navDireita->proximo;
					TElemento *novo = new TElemento;
					navIndice->proximo = novo;
					navIndice = navIndice->proximo;
				}
			}
		}

	}
	navIndice->proximo = NULL;
	navEsquerda = lista.inicio;
	navIndice = listaCopia.inicio;

	for (int i = 1; i <= inicio; i++) {
		navEsquerda = navEsquerda->proximo;
	}

	for (int i = inicio; i <= fim; i++) {
		navEsquerda->musica = navIndice->musica;
		navEsquerda = navEsquerda->proximo;
		navIndice = navIndice->proximo;
	}
}
