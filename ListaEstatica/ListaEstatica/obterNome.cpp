#include "stdafx.h"
#include "obterNome.h"
using namespace std;

string obterNome() {
	string nome;
	system("cls");
	cout << "Digite um nome: ";
	cin >> nome;
	return nome;
}
