#include<iostream>
using namespace std;

int main() {
	int len,n, i, a, j;
	float amount, down, b;
	float rem, due;
	while (1) {
		j = 0;

		cin >> len >> down >> amount >> n;
		if (len < 0) break;
		rem = amount;
		due = amount;
		for (i = 0; i < n; i++) {
			cin >> a >> b;
			for (; j <=a; j++) {
				rem = rem - (rem*b);
				due = due - down;
				if (due < rem) {
					break;
				}
			}
		}
		while (!(due < rem)) {
			rem = rem - (rem*b);
			due = due - down;
		}
		cout << "j=" << j + 1 << endl;
	}
}