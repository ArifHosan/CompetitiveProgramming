#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#define endl '\n'
using namespace std;

int main() {
	//ios::sync_with_stdio(false);
	int x, N,M,i,j,k;
	//vector<int>b;
	int b[10000];
	while (scanf("%d", &N)) {
		for (i = 0; i < N; i++) {
			scanf("%d", &x);
			//b.push_back(x);
			b[i] = x;
		}
		scanf("%d", &M);
		sort(b, &b[N]);
		//sort(b.begin(), b.end());
		x = N / 2;
		while (b[x] >= M) x--;
		bool f = false;
		while (1) {
			for (i = 0; i < N; i++) {
				if (b[x] + b[i] == M && x!=i) {
					f = true;
					break;
				}
			}
			if (f) break;
			x--;
		}
		if (b[x] >= b[i]) {
			j = b[x];
			k = b[i];
		}
		else {
			k = b[x];
			j = b[i];
		}
		printf("Peter should buy books whose prices are %d and %d.\n\n", k, j);
		//b.clear();
	}
	return 0;
}
