#include<iostream>
using namespace std;

int main() {
	int X, gas = 0, alc = 0, die = 0;
	while (1) {
		cin >> X;
		if (X == 1) alc++;
		else if (X == 2) gas++;
		else if (X == 3) die++;
		else if (X == 4) break;
	}
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alc << endl;
	cout << "Gasolina: " << gas << endl;
	cout << "Diesel: " << die << endl;
	return 0;
}