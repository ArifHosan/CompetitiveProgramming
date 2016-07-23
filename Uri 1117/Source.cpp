#include<iostream>
using namespace std;

int main() {
	int c = 0;
	float x,sum = 0;
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
	return 0;
}