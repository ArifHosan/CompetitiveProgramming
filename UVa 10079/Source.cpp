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
	ios::sync_with_stdio(false);
	long long N;
	while (cin >> N && N >= 0) {
		N = (N*(N + 1) / 2) + 1;
		cout << N << endl;
	}
	return 0;
}
