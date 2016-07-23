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
	int N, c,csn=1,f=1,t;
	while (scanf("%d", &N) && N > 0) {
		c = 0; f = 1; t = N;
		if (N == 1) c = 1;
		while (N) {
			if (N>>1 && N & 1 && f) c++;
			N>>=1;
			f = 0;
			c++;
		}
		if (t>8192) c = 15;
		printf("Case %d: %d\n", csn++, c-1);
	}
	return 0;
}
