#include<iostream>
using namespace std;

int main() {
	int csn = 1, T, N, i, speed,cs;
	cin >> T;
	while (T--) {
		speed = 0;
		cin >> N;
		for (i = 0; i < N; i++) {
			cin >> cs;
			if (cs > speed) speed = cs;
		}
		cout << "Case " << csn++ << ": " << speed << endl;
	}
	return 0;
}