#include<iostream>
#include<string>
#include<cstring>
#include<math.h>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n, N[3000],i,a[3000];
	while (cin >> n) {
		bool jolly = true;
		//int start=1;
		for (i = 0; i < n; i++)
			cin >> N[i];
		if (n != 1) {
			for (i = 0; i < n - 1; i++) a[i] = abs(N[i] - N[i + 1]);
			sort(a, a + n - 1);
			if (a[0] != 1) jolly = false;
			else {
				for (i = 0; i < n - 2; i++) {
					if (abs(a[i] - a[i + 1])!=1) {
						jolly = false;
						break;
					}
				}
			}
		}
		if (jolly) cout<< "Jolly" << endl;
		else cout << "Not jolly" << endl;
	}
	return 0;
}
