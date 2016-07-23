#include<iostream>
using namespace std;

int main() {
	int i, n, c = 0, big = 0;
	for (i = 1; i <= 100; i++) {
		cin >> n;
		if (big < n) {
			big = n;
			c = i;
		}
	}
	cout << big << endl;
	cout << c << endl;
}