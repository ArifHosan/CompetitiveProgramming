#include<iostream>
using namespace std;

int main() {
	int X, i = 1;
	while (1) {
		cin >> X;
		if (X == 0) break;
		for (i = 1; i < X; i++) cout << i << " ";
		if (i == X)	cout <<X<< endl;
	}
	return 0;
}