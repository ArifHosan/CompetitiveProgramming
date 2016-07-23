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
	int res,T, K,N, P,csn=1;
	scanf("%d", &T);
	while (T--) {
		scanf("%d%d%d", &N, &K, &P);
		res = (K + P) % N;
		if (!res) res = N;
		printf("Case %d: %d\n", csn++, res);
	}
	return 0;
}
