#ifndef TLISTA_H
#define TLISTA_H

#include "constantes.h"
#include "TElemento.h"

struct TLista {
	TElemento elementos[MAX];
	int qtd;
};

#endif // TLISTA_H