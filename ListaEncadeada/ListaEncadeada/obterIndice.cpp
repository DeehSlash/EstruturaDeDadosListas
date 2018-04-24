#include "stdafx.h"
#include "obterIndice.h"
using namespace std;

int obterIndice(TLista lista) {
	int indice;
	system("cls");
	if (lista.qtd == 0) {
		cout << "A lista est� vazia, use a fun��o 'Inserir in�cio'\n";
		system("pause");
		return 0;
	}
	else {
		do {
			system("cls");
			cout << "Digite um �ndice: ";
			cin >> indice;
			if (indice == 1) {
				cout << "\n\nPara inserir ou remover do come�o, use as fun��es apropriadas\n";
				system("pause");
				return 0;
			}
			else if (indice > lista.qtd) {
				cout << "\n\nPara inserir ou remover do final, use as fun��es apropriadas\n";
				system("pause");
				return 0;
			}
		} while (indice < 2 || indice > lista.qtd);
		return indice;
	}
}
