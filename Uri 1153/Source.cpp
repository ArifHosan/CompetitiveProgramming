#include<iostream>
using namespace std;

int main() {
	int N, fact = 1; cin >> N;
	while (N>0) {
		fact = fact*N;
		N--;
	}
	cout << fact << endl;
	return 0;
}