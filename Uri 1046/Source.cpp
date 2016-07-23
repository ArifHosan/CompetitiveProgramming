#include<iostream>
using namespace std;

int main() {
	int s, e,X;
	cin >> s >> e;
	if (s == e) cout << "O JOGO DUROU 24 HORA(S)\n";
	else if (e > s) {
		X = e-s;
		cout << "O JOGO DUROU " << X << " HORA(S)\n";
	}
	else {
		X = e - s + 24;
		cout << "O JOGO DUROU " << X << " HORA(S)\n";
	}
	return 0;
}