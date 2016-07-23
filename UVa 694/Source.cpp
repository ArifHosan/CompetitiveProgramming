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
	int A, L;
	int csn = 1;
	long long int x;
	while (cin >> A >> L && A >= 0 && L >= 0) {
		int term = 0;
		x = A;
		while(1) {
			if (x == 1) {
				term++;
				break;
			}
			if (x & 1) x= 3 * x + 1;
			else x /= 2;
			term++;
			if (x > L) break;
		}
		printf("Case %d: A = %d, limit = %d, number of terms = %d\n", csn++, A, L, term);
	}
	return 0;
}
