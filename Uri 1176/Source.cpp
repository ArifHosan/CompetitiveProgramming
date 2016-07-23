#include<iostream>
using namespace std;

int main() {
	int i,N,T;
	unsigned long long int *F, X; F = new unsigned long long int[61];
	F[0] = 0; F[1] = 1;
	for (i = 2; i < 61; i++) {
		F[i] = F[i - 1] + F[i - 2];
	}
	cin >> T;
	while (T--) {
		cin >> N;
		X = F[N];
		cout << "Fib(" << N << ") = " << X << endl;
	}
	return 0;
}