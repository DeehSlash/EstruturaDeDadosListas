#include "stdafx.h"
#include "inserirPosicao.h"
using namespace std;

bool inserirPosicao(TLista &lista, string nome, int indice) {
	int i = lista.qtd;
	if (i == MAX || indice > lista.qtd + 1) {
		return false;
	}
	indice--;
	for (i; i>indice; i--) {
		lista.elementos[i].nome = lista.elementos[i - 1].nome;
	}
	lista.elementos[indice].nome = nome;
	lista.qtd++;
	return true;
}
