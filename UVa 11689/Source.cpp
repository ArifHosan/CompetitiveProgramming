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
	int N, e, f, c, tot, tmp;
	scanf("%d", &N);
	while (N--) {
		tot = 0;
		scanf("%d%d%d", &e, &f, &c);
		f += e;
		while (f >= c) {
			tmp = (f / c);
			f = f%c;
			f += tmp;
			tot += tmp;
		}
		printf("%d\n", tot);
	}
	return 0;
}
