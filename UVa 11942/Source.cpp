#include<iostream>
using namespace std;

int main() {
	int N, f = 1,i,B[10],len, R[20],r=0;

	cin >> N;
	while (N--) {
		len = 0, f = 1;
		for (i = 0; i < 10; i++) {
			cin >> B[i];
		}
		for (int j = 1; j < 9; j++) {
			if (B[0] < B[1]) {
				if (!(B[j] < B[j + 1])) {
					f = 0; break;
				}
				
			}
			if (B[0] > B[1]) {
				if (!(B[j] > B[j + 1])) {
					f = 0; break;

				}
			}
		}
		R[r++] = f;
	}
	cout << "Lumberjacks:" << endl;
	for (i = 0; i < r; i++) {
		if (R[i]) cout << "Ordered" << endl;
		else cout << "Unordered" << endl;
	}
	return 0;
}