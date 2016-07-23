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
	int N,o;
	while (scanf("%d", &N) &&N) {
		N >= 101 ? o =N- 10 : o = 91;
		printf("f91(%d) = %d\n",N, o);
	}
	return 0;
}
