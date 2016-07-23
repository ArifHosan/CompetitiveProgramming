#include<iostream>
#include<string>
#include<cstring>
#include<math.h>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#define endl '\n'
#define PI acos(-1)
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int T, L;
	double W, r, RA, GA;
	cin >> T;
	while (T--) {
		cin >> L;
		W = ((double)L*6.0) / 10.0;
		r= ((double)L*2.0) / 10.0;
		RA = PI*r*r;
		GA = L*W - RA;
		printf("%.2lf %.2lf\n", RA, GA);
	}
	return 0;
}
