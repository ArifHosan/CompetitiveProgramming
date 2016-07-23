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

int BigMod(int a, int p, int m) {
	int res = 1;
	//cout << p << endl;
	if (p == 0) return 1;
	if (p == 1) return a%m;
	if (p & 1) res = (BigMod(a,1,m)*BigMod(a, p - 1, m)) % m;
	else {
		res = BigMod(a, p / 2, m);
		res *= res;
		res = (res%m);
	}
	return res;
	//cout << res << endl;
}

int main() {
	ios::sync_with_stdio(false);
	int B, P, M;
	while (cin >> B >> P >> M) {
		int res = BigMod(B, P, M);
		cout << res << endl;
	}
	return 0;
}
