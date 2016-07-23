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
	int N;
	double X;
	while (scanf("%d", &N) && N >= 0) {
		X = round(N / 4.0 * 100);
		if (N == 1) X = 0;
		printf("%0.lf%%\n", X);
	}
	return 0;
}
