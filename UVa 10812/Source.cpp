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
	int t,f;
	long long int s, d, a, b;
	scanf("%d", &t);
	while (t--) {
		f = 1;
		scanf("%lld%lld", &s, &d);
		a = (s + d) / 2;
		b = s - a;
		if (a < 0 || b < 0 || a-b!=d) printf("impossible\n");
		else printf("%lld %lld\n", a, b);
	}
	return 0;
}
