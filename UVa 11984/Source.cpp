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
	int T, C, d,csn=1;
	double res,F;
	scanf("%d", &T);
	while (T--) {
		scanf("%d%d", &C, &d);
		F = 9.0*C / 5.0 + 32.0;
		F += d;
		res = 5.0*(F - 32.0) / 9.0;
		//res = C + res;
		printf("Case %d: %.2lf\n",csn++, res);
	}
	return 0;
}
