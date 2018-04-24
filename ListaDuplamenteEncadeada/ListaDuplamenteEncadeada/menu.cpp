#include "stdafx.h"
#include "menu.h"
#include "inserirInicio.h"
#include "inserirPosicao.h"
#include "inserirFim.h"
#include "removerInicio.h"
#include "removerPosicao.h"
#include "removerFim.h"
#include "bubbleSort.h"
#include "mergeSort.h"
#include "obterIndice.h"
#include "obterMusica.h"
#include "imprimir.h"
using namespace std;

int menu(TLista &lista) {
	system("cls");
	int opcao = 0, indice = 0;
	TMusica musica;
	bool funcao = false;
	cout << "1. Inserir início\n";
	cout << "2. Inserir posição\n";
	cout << "3. Inserir fim\n";
	cout << "4. Remover início\n";
	cout << "5. Remover posição\n";
	cout << "6. Remover fim\n";
	cout << "7. Bubble Sort\n";
	cout << "8. Merge Sort\n";
	cout << "9. Imprimir lista\n";
	cout << "10. Sair do programa\n\n";
	cout << "Digite a opção desejada: ";
	cin >> opcao;
	switch (opcao) {
	case 1:
		musica = obterMusica();
		funcao = inserirInicio(lista, musica);
		break;
	case 2:
		indice = obterIndice(lista);
		if (indice != 0) {
			musica = obterMusica();
			funcao = inserirPosicao(lista, musica, indice);
		}
		break;
	case 3:
		musica = obterMusica();
		funcao = inserirFim(lista, musica);
		break;
	case 4:
		funcao = removerInicio(lista);
		break;
	case 5:
		indice = obterIndice(lista);
		if (indice != 0) {
			funcao = removerPosicao(lista, indice);
		}
		break;
	case 6:
		funcao = removerFim(lista);
		break;
	case 7:
		funcao = bubbleSort(lista);
		break;
	case 8:
		if (lista.qtd > 1) {
			mergeSort(lista, 0, lista.qtd - 1);
			funcao = true;
		}
		break;
	case 9:
		funcao = imprimir(lista);
		break;
	case 10:
		return EXIT_SUCCESS;
		break;
	}
	system("cls");
	cout << ((funcao) ? "Funcionou" : "Falhou") << "\n\n";
	system("pause");
	menu(lista);
}
