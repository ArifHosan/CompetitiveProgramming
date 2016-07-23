#include<iostream>
using namespace std;

int main() {
	int X, c = 0, sum = 0, i;
	while (1) {
		cin >> X;
		if (X == 0) break;
		for (i=X; c < 5; i++) {
			if (i % 2 == 0) {
				sum += i; c++;
			}
		}
		cout << sum << endl;
		sum = 0; c = 0;
	}
	return 0;
}