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

int main() {
	//ios::sync_with_stdio(false);
	int eq, n, a, b, c, d, L;
	//eq = a*n*n + b*n + c;
	while (scanf("%d%d%d%d%d", &a, &b, &c, &d, &L) && (a != 0 || L != 0 || d != 0)) {
		int num = 0,i;
		for (n = 0; n <= L; n++) {
			eq = a*n*n + b*n + c;
			if (eq%d == 0) num++;
		}
		printf("%d\n", num);
	}
	return 0;
}
