#include<iostream>
using namespace std;

unsigned long long int fact(int a) {
	if (a == 0) return 1;
	else return a*fact(a - 1);
}

int main() {
	int M, N;
	unsigned long long int sum;
	while (cin>>M) {
		cin >> N;
		sum = fact(M) + fact(N);
		cout << sum << endl;
	}
	return 0;
}