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
	int h1, h2, m1, m2,th,tm;
	while (scanf("%d%d%d%d", &h1, &m1, &h2, &m2)) {
		if (h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0) break;
		tm = m2 - m1;
		th = h2 - h1;
		th *= 60;
		th += tm;
		if (th < 0) th += (24*60);
		printf("%d\n", th);
	}
	return 0;
}
