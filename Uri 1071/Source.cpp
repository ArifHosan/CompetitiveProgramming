#include<iostream>
using namespace std;

int main() {
	int i,X, Y, sum=0,e;
	cin >> X >> Y;
	if (X>Y) {
		i = Y + 1; e = X;
	}
	if (Y > X) {
		i = X + 1; e = Y;
	}
	for (i ; i < e; i++) {
		if ((i % 2) == 0)
			continue;
		sum += i;
	}
	cout << sum << endl;
	return 0;
}