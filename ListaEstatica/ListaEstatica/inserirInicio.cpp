#include "stdafx.h"
#include "inserirInicio.h"
using namespace std;

bool inserirInicio(TLista &lista, string nome) {
	int i = lista.qtd;
	if (i == MAX) {
		return false;
	}
	for (i; i>0; i--) {
		lista.elementos[i].nome = lista.elementos[i - 1].nome;
	}
	lista.elementos[0].nome = nome;
	lista.qtd++;
	return true;
}
