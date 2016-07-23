#include<iostream>
using namespace std;

int main() {
	int N,X,Y,sum=0;
	int i, j;
	cin >> N;
	while (N--) {
		sum = 0;
		cin >> X >> Y;
		if (X < Y) {
			i = X+1; j = Y;
		}
		if (Y < X) {
			i = Y+1; j = X;
		}
		for (i;i<j; i++) {
			if (i % 2 == 0) continue;
			sum += i;
		}
		cout << sum << endl;
	}
	return 0;
}