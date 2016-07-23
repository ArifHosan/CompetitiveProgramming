#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	long long a, b;
	while (cin >> a >> b) {
		cout << abs(a - b) << endl;
	}
	return 0;
}
