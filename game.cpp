#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	char palavra[30], secreta[30], letra[1];
	int tam, chances, acertos, i;
	bool acerto;
	i = 0;
	tam = 0;
	chances = 6;
	acertos = 0;
	acerto = false;

	cout << "Digite uma palavra secreta: ";
	cin >> palavra;
	system("cls");
	
	for (i = 0; palavra[i] != '\0'; i++) {
		tam++;
	}
	for (int i = 0; i < 30; i++) {
		secreta[i] = '-';
	}
	while (chances > 0 && acertos < tam) {
		cout << "Chances restantes: " << chances;
		cout << "\n\nPalavra secreta: ";
		for (int i = 0; i < tam; i++) {
			cout << secreta[i];
		}
		cout << "\n\nDigite uma letra: ";
		cin >> letra[0];
		for (int i = 0; i < tam; i++) {
			if (palavra[i] == letra[0]) {
				acerto = true;
				secreta[i] = palavra[i];
				acertos++;
			}
		}
		if (acerto == false) {
			chances--;
		}
		acerto = false;
		system("cls");
	}
	if (acertos == tam) {
		cout << "Voce venceu!!\n";
	}
	else {
		cout << "Voce perdeu!!\n";
	}
	system("pause");

	return 0;
