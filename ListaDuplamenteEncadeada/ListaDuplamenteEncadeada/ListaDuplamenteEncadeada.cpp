//          //==============================================\\          \\
//          ||                                              ||          \\
//          ||          LISTA DUPLAMENTE ENCADEADA	        ||          \\
//          ||											    ||          \\
//          ||  Acad�micos: Andr� Luiz e Ivan Carlos	    ||          \\
//          ||  Disciplina: Estrutura de Dados              ||          \\
//          ||  3� per�odo                                  ||          \\
//          ||  Professor: Rafael de Santiago			    ||          \\
//          ||  UNIVALI - Universidade do Vale do Itaja�    ||          \\
//          ||                                              ||          \\
//          \\==============================================//          \\

#include "stdafx.h"
#include "menu.h"

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	TLista lista;
	inicializar(lista);
	menu(lista);
}

