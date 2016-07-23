#include<iostream>
using namespace std;

int main() {
	int X, Y, sum = 0, i, j;
	cin >> X >> Y;
	if (X < Y){
		i = X+1; j = Y;
	}
	if (X>Y) {
		i = Y+1; j = X;
	}
	for (i; i < j; i++) {
		if (i % 5 == 2 || i % 5 == 3) cout << i << endl;
	}
	return 0;
}