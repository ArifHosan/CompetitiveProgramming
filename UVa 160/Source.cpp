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

int prime[101], p[101];
long long int res;
void Prime() {
	int i,j,rt;
	for (i = 0; i < 100; i++) {
		prime[i] = 1;
		if (i == 2) continue;
		if (i % 2 == 0) prime[i] = 0;
		else {
			rt = sqrt(i);
			for (j = 3; j <= rt; j++) {
				if (i%j == 0) {
					prime[i] = 0;
					break;
				}
			}
		}
	}
}

int fact(int);
int main() {
	//ios::sync_with_stdio(false);
	Prime();
	int N,c;
	while (cin >> N && N) {
		c = 0;
		for (int i = 0; i < 101; i++) p[i] = 0;
		fact(N);
		printf("%3d! =", N);
		for (int i = 2; i < 101; i++) {
			if (p[i]) {
				if (c && c % 15 == 0) {
					printf("\n      ");
					c = 0;
				}
				printf("%3d",p[i]);
				c++;
			}
		}
		cout << '\n';
	}
	return 0;
}

int fact(int N) {
	if (N == 0) return 1;
	if (prime[N]) {
		p[N]++;
	}
	else {
		int x = N,i=2;
		while (x != 1) {
			if (prime[i] && x%i == 0) {
				p[i]++;
				x /= i;
				continue;
			}
			i++;
		}
	}
	return fact(N - 1);
}