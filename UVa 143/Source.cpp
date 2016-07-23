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
	ios::sync_with_stdio(false);
	double x1, x2, x3, y1, y2, y3,res;
	while (scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3)) {
		if (x1== 0 && x2==0 &&  y2==0 && y1 == 0) break;
		res =((x1 - x2)* (y2 - y3)) - ((x2 - x3)*(y1 - y2));
		res = 0.5*res;
		res = abs(res);
		res = ceil(res);
		//res = abs(ceil(res));

		printf("%.0lf\n", res);
	}
	return 0;
}
