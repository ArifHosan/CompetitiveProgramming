#include<iostream>
using namespace std;

int main() {
	float T, pay;
	cout.precision(2); cout << fixed;
	cin >> T;
	if (T <= 2000) {
		cout << "Isento" << endl;
		return 0;
	}
	if (T>2000 && T <= 3000) {
		T -= 2000;
		pay = T * 8 / 100.0;
	}
	else if (T <= 4500) {
		T -= 3000;
		pay = 80;
		pay += (T * 18 / 100.0);
	}
	else if (T >= 4500) {
		T -= 4500;
		pay = 80 + 270;
		pay += T * 28 / 100.0;
	}
	cout << "R$ " << pay << endl;
}