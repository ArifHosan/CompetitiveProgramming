#include<iostream>
#include<string>
#include<cstring>
#include<math.h>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	unsigned long long int N,j,k;
	unsigned long long res,i;
	while (cin >> N) {
		k = 1; i = 1;
		while (1) {
			for (j = 1; j <= k; j++) {
				if (k == N) {
					if (j == k - 2) {
						res = i + i + 2 + i + 4;
						break;
					}
				}
				i += 2;
			}
			if (k != N) k += 2;
			else break;
		}
		cout << res << endl;
	}
	return 0;
}
