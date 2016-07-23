#include<iostream>
using namespace std;

int main() {
	int N,X,i;
	cin >> N;
	while (N--) {
		cin >> X;
		for (i = 2; i <= X / 2; i++) {
			if (X%i == 0) break;
		}
	if (i <= X / 2) cout << X << " nao eh primo" << endl;
	else cout << X << " eh primo" << endl;
	}
	return 0;
}