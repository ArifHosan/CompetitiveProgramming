#include<iostream>
using namespace std;

int main() {
	int X, Y,sum=0,i,j;
	cin >> X >> Y;
	if (X < Y){
		i = X; j = Y;
	}
	if (X>Y) {
		i = Y; j = X;
	}

	for (i; i <= j; i++) {
		if (i % 13 == 0) continue;
		sum += i;
	}
	cout << sum << endl;
	return 0;
}