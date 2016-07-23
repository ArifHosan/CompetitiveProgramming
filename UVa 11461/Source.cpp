#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#define endl '\n'
using namespace std;

int main() {
	//ios::sync_with_stdio(false);
	int sq[370],i,c;
	for (i = 0; i < 370; i++) sq[i] = i*i;
	int a, b;
	while (scanf("%d%d", &a, &b) && a>0 && b > 0) {
		c = 0;
		for (i = sqrt(a);; i++) {
			if (sq[i]>=a && sq[i] <= b) c++;
			else if (sq[i]>b) break;
		}
		printf("%d\n", c);
	}
	return 0;
}
