#include<iostream>
#include<string>
#include<cstring>

#define endl '\n'

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int sweep[101][101];
	char tmp[101];
	int n, m, i, j, csn = 1,c;
	while (cin >> n >> m && n != 0) {
		for (i = 0; i < n; i++) {
			cin >> tmp;
			for (j = 0; j < m; j++) {
				if (tmp[j] == '*') sweep[i][j] = 1;
				else sweep[i][j] = 0;
			}
		}
		if (csn != 1) cout << endl;
		cout << "Field #" << csn++ << ':'<< endl;
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				c = 0;
				if (sweep[i][j] == 1) {
					cout << '*';
					continue;
				}
				if (i - 1 >= 0) {
					if (j - 1 >= 0) c += sweep[i - 1][j - 1];
					c += sweep[i - 1][j]; 
					if (j + 1 <m) c += sweep[i - 1][j +1];
				}
				if (j - 1 >= 0) c += sweep[i ][j - 1];
//				c += sweep[i - 1][j];
				if (j + 1<m) c += sweep[i][j + 1];
				if (i +1 <n) {
					if (j - 1 >= 0) c += sweep[i+1][j - 1];
					c += sweep[i+1][j];
					if (j + 1 <m) c += sweep[i+1][j + 1];
				}
				cout << c;
			}
			cout << endl;
		}
	}
	return 0;
}
