#include<iostream>
using namespace std;

int main() {
	int T, R1, R2, R;
	cin >> T;
	while (T--) {
		cin >> R1 >> R2;
		R = R1 + R2;
		cout << R << endl;
	}
	return 0;
}