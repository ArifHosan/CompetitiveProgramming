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
	long long int N, x, tmp;
	int t, csn = 1,y,c;
	scanf("%d", &t);
	while (t--) {
		tmp = 0; c = 0;
		scanf("%lld", &N);
		x = N*N;
		while (x!=1 && x!=N && c<1000) {
			while (x) {
				y = x % 10;
				x /= 10;
				tmp += y*y;
			}
			x = tmp;
			c++;
			tmp = 0;
			
		}
		if (x == 1) printf("Case #%d: %lld is a Happy number\n", csn++, N);
		else printf("Case #%d: %lld is an Unhappy number\n", csn++, N);
	}
	return 0;
}
