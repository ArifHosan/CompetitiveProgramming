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
#define PI 2*acos(0.0)
#define R 6440
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int s, a;
	double temp, res_s, res_a;
	char ty[5];
	while (scanf("%d%d%s", &s, &a, ty)) {
		if(strcmp(ty,"deg")==0)
			temp = PI / 180.0*a;
		else temp = PI / 180.0*(a/60.0);
		res_s = (R + s)*temp;
		if (a > 180 && strcmp(ty, "deg") == 0) res_s = 2 * PI*(R + s) - res_s;
		res_a = (R + s)*sqrt(2 - (2 * cos(temp)));
		printf("%0.6lf %0.6lf\n", res_s, res_a);
	}
	return 0;
}
