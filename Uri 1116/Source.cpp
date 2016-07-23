#include<iostream>
using namespace std;

int main() {
	int N, X, Y;
	cin >> N;
	while (N--) {
		cin >> X >> Y;
		cout.precision(1);  cout << fixed;
		if (Y == 0) cout << "divisao impossivel" << endl;
		else cout << (float)X / Y << endl;
	}
	return 0;
}