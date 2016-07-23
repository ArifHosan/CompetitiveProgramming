#include<iostream>
using namespace std;

int main() {
	int X = 1, c = 0;
	float x, sum;
	while(1) {
		sum = 0; c = 0;
		while (c != 2) {
			cin >> x;
			if (x >= 0 && x <= 10) {
				sum += x;
				c++;
			}
			else cout << "nota invalida" << endl;
			}
		cout.precision(2); cout << fixed;
		cout << "media = " << sum / 2 << endl;
		while (1) {
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> X;
			if (X == 2) return 0;
			if (X == 1) break;
		}
	}
	return 0;
}