#include<iostream>
using namespace std;

int main() {
	int N[10], V, i, X;
	cin >> V;
	for (i = 0; i < 10; i++) {
		N[i] = V;
		V = V * 2;
	}
	for (i = 0; i < 10; i++) {
		X = N[i];
		cout << "N[" << i << "] = " << X << endl;
	}
	return 0;
}