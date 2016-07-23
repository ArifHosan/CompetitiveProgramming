#include<iostream>
using namespace std;

int main() {
	int N, X, Y;
	cin >> N;
	while (N--) {
		int sum = 0, c = 0;
		cin >> X >> Y;
		for (int j = X; c<Y; j++) {
			if (j % 2 == 0) continue;
			sum += j; c++;
		}
		cout << sum << endl;
	}
	return 0;
}