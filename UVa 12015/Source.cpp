#include<iostream>
using namespace std;

int main() {
	char W[10][101];
	int V[10], i, T, csn = 1,max=0;

	cin >> T;
	while (T--) {
		max = 0;
		for (i = 0; i < 10; i++) {
			cin >> W[i];
			cin >> V[i];
		}
		for (i = 0; i < 10; i++) {
			if (V[i] > max) max = V[i];
		}
		cout << "Case #" << csn++ << ":" << endl;
		for (i = 0; i < 10; i++) {
			if (V[i] == max) cout << W[i] << endl;
		}
	}
	return 0;
}