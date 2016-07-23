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
	int A, B, C,res;
	while (cin >> A >> B >> C) {
		if (A == B && A != C) cout << "C" << endl;
		else if (A == C && A != B) cout << "B" << endl;
		else if (B == C && B != A) cout << "A" << endl;
		else cout << '*' << endl;
	}
	return 0;
}
