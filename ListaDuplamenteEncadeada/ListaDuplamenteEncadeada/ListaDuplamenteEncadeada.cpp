//          //==============================================\\          \\
//          ||                                              ||          \\
//          ||          LISTA DUPLAMENTE ENCADEADA	        ||          \\
//          ||											    ||          \\
//          ||  Acadêmicos: André Luiz e Ivan Carlos	    ||          \\
//          ||  Disciplina: Estrutura de Dados              ||          \\
//          ||  3º período                                  ||          \\
//          ||  Professor: Rafael de Santiago			    ||          \\
//          ||  UNIVALI - Universidade do Vale do Itajaí    ||          \\
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

