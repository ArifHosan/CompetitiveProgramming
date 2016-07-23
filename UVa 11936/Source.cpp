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
	int N,a,b,c;
	cin >> N;
	while (N--) {
		cin >> a >> b >> c;
		if (a + b > c && b + c > a && c + a > b) cout << "OK" << endl;
		else cout << "Wrong!!" << endl;
	}
	return 0;
}
