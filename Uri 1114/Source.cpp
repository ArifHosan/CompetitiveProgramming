#include<iostream>
using namespace std;

int main() {
	int X, Y = 2002;
	while (1) {
		cin >> X;
		if (X == Y) {
			cout << "Acesso Permitido" << endl;
			break;
		}
		else cout << "Senha Invalida" << endl;
	}
	return 0;
}