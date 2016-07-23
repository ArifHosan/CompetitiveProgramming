#include<iostream>
using namespace std;

int main() {
	int a, c = 0, sum = 0;
	while (1) {
		cin >> a;
		if (a < 0) break;
		c++; sum += a;
	}
	cout.precision(2); cout << fixed;
	cout << (float)sum / c << endl;
	return 0;
}