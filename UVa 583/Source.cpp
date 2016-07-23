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
const long long S = 10000000;

int main() {
	ios::sync_with_stdio(false);
	long long *prime = new long long[S];
	int i,n=3,rt;
	for (i = 0; i < S; i++) prime[i] = 1;
	for (n; n <2e31-1; n++) {
		if (n % 2 == 0) prime[n] = 0;
		else {
			for (i = n, rt = sqrt(n); i <= rt; i++) {
				if (n%i == 0) {
					prime[n] = 0;
					break;
				}
			}
		}
	}


	return 0;
}
