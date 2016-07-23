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

int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a%b);
}

int main() {
	//ios::sync_with_stdio(false);
	int i, j, N;
	long long int G;
	while (scanf("%d", &N) && N != 0) {
		G = 0; 
		for (i = 1; i < N; i++) {
			for (j = i + 1; j <= N; j++) {
				G += gcd(i, j);
			}
		}
		printf("%lld\n", G);
	}
	return 0;
}
