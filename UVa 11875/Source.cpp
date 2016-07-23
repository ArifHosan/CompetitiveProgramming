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
	//ios::sync_with_stdio(false);
	int T, N, x,csn=1,c,tmp;
	scanf("%d", &T);
	while (T--) {
		c = 0;
		scanf("%d", &N);
		if (N % 2 == 0) x = (N / 2) + 1;
		else x = (N + 1) / 2;
		for (int i = 1; i <= N; i++) {
			scanf("%d", &tmp);
			if (i == x) c = tmp;
		}
		printf("Case %d: %d\n", csn++, c);
	}
	return 0;
}
