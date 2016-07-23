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
#define endl '\n'
using namespace std;

int main() {
	//ios::sync_with_stdio(false);
	int N,c,i;
	char o[35];
	while (scanf("%d", &N) && N) {
		i = 0; c = 0;
		while (N) {
			if ((N&1) == 0) o[i++] = '0';
			else {
				c++;
				o[i++] = '1';
			}
			N >>= 1;
		}
		o[i] = '\0';
		//c = c % 2;
		reverse(o, &o[i]);
		printf("The parity of %s is %d (mod 2).\n", o, c);
	}
	return 0;
}
