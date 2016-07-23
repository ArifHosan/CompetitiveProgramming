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
	int T, R, ul, ur, ll, lr, csn=1, tmp,w;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &R);
		tmp = R * 5;
		ul = 0 - (tmp * 45 / 100);
		ur = tmp + ul;
		w = (tmp * 60 / 100) / 2;
		printf("Case %d:\n",csn++);
		printf("%d %d\n%d %d\n%d -%d\n%d -%d\n", ul, w, ur, w, ur, w, ul, w);
	}
	return 0;
}
