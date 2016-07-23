#include<iostream>
#include<string>
using namespace std;

int main() {
	char st[1000000];
	int i,j,min,max,k, n, csn = 1,f,*F,c;
	char t;
	while (cin >> st && st[0]!='\0') {
		cin >> n;
		F = new int[n];
		c = 0;
		for (k = 0; k < n; k++) {
			F[c] = 1;
			cin >> i >> j;
			if (i >= j) {
				max = i; min = j;
			}
			else {
				max = j; min = i;
			}
			t = st[min];
			while (min <= max) {
				if (st[min++] != t) {
					F[c] = 0;
					break;
				}
			}
			c++;
		}
		cout << "Case " << csn++ <<":"<< endl;
		for (k = 0; k < n; k++) {
			if (F[k]) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
		delete F;
	}
	return 0;
}