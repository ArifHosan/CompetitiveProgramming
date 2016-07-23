#include<iostream>
using namespace std;

int main() {
	int n, m, c, power, dev[21], cons[21], i, tmp, max_power, f, csn = 1;
	while (cin >> n >> m >> c && n != 0) {
		power = 0; max_power = 0; f = 0;
		for (i = 1; i <= n; i++) {
			cin >> cons[i];
			dev[i] = 0;
		}
		for (i = 0; i < m; i++) {
			cin >> tmp;
			if (dev[tmp] == 0) {
				dev[tmp] = 1;
				power += cons[tmp];
			}
			else {
				dev[tmp] = 0;
				power -= cons[tmp];
			}
			if (power > c) f = 1;
			if (power > max_power) max_power = power;
		}
		cout << "Sequence " << csn++ << endl;
		if (f) cout << "Fuse was blown." << endl << endl;
		else cout << "Fuse was not blown.\nMaximal power consumption was " << max_power << " amperes." << endl << endl;;
	}
	return 0;
}