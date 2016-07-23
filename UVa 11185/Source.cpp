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
	long long int N;
	stack<int>v1;
	while (scanf("%lld", &N) && N>=0) {
		if (!N) printf("0");
		while (N) {
			v1.push(N % 3);
			N /= 3;
		}
		while (!v1.empty()) {
			printf("%d", v1.top());
			v1.pop();
		}
		printf("\n");
 	}
	return 0;
}
