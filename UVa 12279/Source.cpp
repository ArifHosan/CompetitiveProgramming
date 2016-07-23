#include<iostream>
using namespace std;

int main() {
	int i, n, x, no = 0;
	int count;
	while (1) {
		count = 0; no++;
		cin >> n;
		if (!n) break;
		for (i = 0; i < n; i++) {
			cin >> x;
			if (x > 0 && x < 100) count++;
			if (!x) count--;
		}
		cout << "Case " << no << ": " << count << endl;
	}
	return 0;
}