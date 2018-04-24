#ifndef TELEMENTO_H
#define TELEMENTO_H

#include "TMusica.h"

struct TElemento {
	TMusica musica;
	TElemento* anterior;
	TElemento* proximo;
};

#endif // TELEMENTO_H