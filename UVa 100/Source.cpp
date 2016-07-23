#include<iostream>
using namespace std;

int main() {
	int i, j, max1=0, max2=0;
	int a, b,n,c;

	while (cin >> i >> j) {
		max1 = 0; max2 = 0;
		if (i > j) {
			a = i; b = j;
		}
		else {
			a = j; b = i;
		}
		for (int k = b; k <= a; k++) {
			n = k; c = 1;
			while (n != 1) {
				if (n % 2) n = (3 * n) + 1;
				else n = n / 2;
				c++;
			}
			max2 = c;
			if (max2 > max1) max1 = max2;
		}
		cout << i << " " << j << " " << max1 << endl;
	}
}