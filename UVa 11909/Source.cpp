#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#define endl '\n'
#define PI 2*acos(0.0)
using namespace std;

int main() {
	//ios::sync_with_stdio(false);
	double l, w, h, a,res,area;
	while (scanf("%lf%lf%lf%lf", &l, &w, &h, &a)) {
		res = tan(PI*a / 180.0);
		res = res*l*l*0.5;
		area = l*h;
		printf("%lf %lf\n", res, area);
		area = area - res;
		area *= w;
		printf("%0.3lf mL\n", area);
	}

	return 0;
}
