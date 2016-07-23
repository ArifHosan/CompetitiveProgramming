#include<iostream>
using namespace std;

int main() {
	float A[100],x;
	for (int i = 0; i < 100; i++) {
		cin >> A[i];
	}
	cout.precision(1); cout << fixed;
	for (int i = 0; i < 100; i++) {
		if (A[i] <= 10){
			x = A[i];
			cout << "A[" << i << "] = " << x << endl;
		}
	}
	return 0;
}