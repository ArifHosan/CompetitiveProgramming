#include<iostream>
using namespace std;

int main() {
	int N, i;
	cin >> N;
	for (i = 1; i <= 10; i++) {
		cout << i << " x " << N << " = " << N*i << endl;
	}
	return 0;
}