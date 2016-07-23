#include<iostream>
using namespace std;

int main() {
	int N,*X, sm,pos;
	cin >> N;
	X = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> X[i];
	}
	sm = X[0]; pos = 0;
	for (int j = 0; j < N ; j++) {
		if (X[j] < sm) {
			sm = X[j];
			pos = j;
		}	
	}
	cout << "Menor valor: " << sm << endl;
	cout << "Posicao: " << pos << endl;
	return 0;
}