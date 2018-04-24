#include "stdafx.h"
#include "inserirFim.h"
using namespace std;

bool inserirFim(TLista &lista, string nome) {
	if (lista.qtd == MAX) {
		return false;
	}
	lista.elementos[lista.qtd].nome = nome;
	lista.qtd++;
	return true;
}
