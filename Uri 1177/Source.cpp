#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<double>N;
	double X, Y; int i;
 	cin >> X;
	for (i = 0; i < 100; i++) {
		N.push_back(X); X = X / 2;
	}
	cout.precision(4); cout << fixed;
	for (i = 0; i < 100; i++) {
		Y= N[i];
		cout << "N[" << i << "] = " << Y << endl;
	}
	return 0;
}