#include<iostream>
using namespace std;

int main() {
	int A, N,sum=0,i=0;
	cin >> A;
	while (1) {
		cin >> N;
		if (N <= 0) continue;
		break;
	}
	while (i != N) {
		sum += A++;
		i++;
	}
	cout << sum << endl;
	return 0;
}