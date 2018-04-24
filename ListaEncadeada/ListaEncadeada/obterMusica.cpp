#include "stdafx.h"
#include "obterMusica.h"
using namespace std;

TMusica obterMusica() {
	TMusica musica;
	system("cls");
	cout << "Digite o nome da música: ";
	cin >> musica.nome;
	cout << "\nDigite o nome do autor: ";
	cin >> musica.autor;
	return musica;
}
