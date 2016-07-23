#include<iostream>
using namespace std;

int main() {
	int X, Z, c = 0, sum = 0;
	cin >> X;
	while (1) {
		cin >> Z;
		if (Z <= X) continue;
		break;
	}
	while (1) {
		if (sum > Z) break;
		sum += X; c++; X++;
	}
	cout << c << endl;
	return 0;
}