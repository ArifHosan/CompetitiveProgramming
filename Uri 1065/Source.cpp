#include<iostream>
using namespace std;

int main() {
	int N;
	int i, c = 0;
	for (i = 0; i < 5; i++) {
		cin >> N;
		if (N%2==0) {
			c++; 
		}
	}
	cout << c << " valores pares" << endl;
	return 0;
}