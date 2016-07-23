#include<iostream>
using namespace std;

int main() {
	int N,X;
	cin >> N;
	while (N--) {
		unsigned long long int amount = 1;
		cin >> X;
		for (int i = 0; i < X; i++) {
			amount = amount * 2; 
		}
//		amount = amount / 12000;
		cout << amount << " kg" << endl;
	}
	return 0;
}