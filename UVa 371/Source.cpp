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
	long long int L, H, x,c,max,max_i,i;
	while (cin >> L >> H && L && H) {
		max = 0; max_i = L;
		if (L > H)swap(L, H);
		for (i = L; i <= H; i++) {
			x = i; c = 0;
			do {
				if (x & 1) x = 3 * x + 1;
				else x = x / 2;
				c++;
			} while (x != 1);
			if (max < c) {
				max = c;
				max_i = i;
			}
		}
		printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", L, H, max_i, max);
	}

	return 0;
}
