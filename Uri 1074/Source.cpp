#include<iostream>
using namespace std;

int main() {
	int N, X;
	cin >> N;
	while (N--) {
		cin >> X;
		if (X == 0) {
			cout << "NULL" << endl;
			continue;
		}
		else {
			if (X % 2 == 0) cout << "EVEN ";
			else cout << "ODD ";
			if (X > 0) cout << "POSITIVE" << endl;
			else if (X < 0) cout << "NEGATIVE" << endl;
		}
	}
	return 0;
}