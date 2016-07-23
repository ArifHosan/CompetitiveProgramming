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
#include<locale>
#define endl '\n'
using namespace std;

int main() {
	//ios::sync_with_stdio(false);
	int T,i,sum, csn=1, a, b;
	scanf("%d", &T);
	while (T--) {
		sum = 0;
		scanf("%d%d", &a, &b);
		if ((a & 1)==0) a++;
		for (i = a; i <= b; i += 2) sum += i;
		printf("Case %d: %d\n", csn++, sum);
	}
	return 0;
}
