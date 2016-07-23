#include<iostream>
using namespace std;

int main() {
	int N, X, sum = 0,i=1;
	cin >> N;
	while (N--) {
		sum = 0;
		cin >> X;
		for (i = 1; i < X; i++) {
			if (X%i == 0) sum += i;
		}
		if (sum == X) cout << X << " eh perfeito" << endl;
		else cout << X << " nao eh perfeito" << endl;
	}
	return 0;

}