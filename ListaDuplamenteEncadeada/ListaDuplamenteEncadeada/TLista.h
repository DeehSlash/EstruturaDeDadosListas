#ifndef TLISTA_H
#define TLISTA_H

#include "TElemento.h"

struct TLista {
	TElemento* inicio;
	TElemento* fim;
	int qtd;
};

#endif // TLISTA_H