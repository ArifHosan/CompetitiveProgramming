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
	long long int c,x;
	int csn = 1;
	while (scanf("%lld", &c) &c) {
		x = 9 + (8 * c);
		x = ceil(sqrt(x));
		x += 3;
		x=ceil((double)x/2.0);
		printf("Case %d: %lld\n",csn++, x);
	}
	return 0;
}
