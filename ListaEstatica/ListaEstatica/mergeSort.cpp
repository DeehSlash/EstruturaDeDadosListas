#include "stdafx.h"
#include "mergeSort.h"
using namespace std;

void mergeSort(TElemento lista[MAX], int inicio, int fim) {
	int metade;
	TElemento listaCopia[MAX];
	if (inicio == fim)
		return;

	metade = (inicio + fim) / 2;
	mergeSort(lista, inicio, metade);
	mergeSort(lista, metade + 1, fim);

	int esquerda = inicio, direita = metade + 1, indice = 0;

	while (esquerda < metade + 1 || direita < fim + 1) {
		if (esquerda == metade + 1) {
			listaCopia[indice] = lista[direita];
			direita++;
			indice++;
		}
		else {
			if (direita == fim + 1) {
				listaCopia[indice] = lista[esquerda];
				esquerda++;
				indice++;
			}
			else {
				if (lista[esquerda].nome < lista[direita].nome) {
					listaCopia[indice] = lista[esquerda];
					esquerda++;
					indice++;
				}
				else {
					listaCopia[indice] = lista[direita];
					direita++;
					indice++;
				}
			}
		}

	}
	for (int i = inicio; i <= fim; i++) {
		lista[i] = listaCopia[i - inicio];
	}
}
