#include<iostream>
#include<string>
#include<cstring>
#include<math.h>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#define endl '\n'
#define R() freopen("in.txt","r",stdin);
#define W() freopen("out.txt","w",stdout);
using namespace std;

int main() {
	R(); W();
	ios::sync_with_stdio(false);
	int T, a, f,i,j,k;

	cin >> T;
	while (T--) {
		//cout << endl;
		cin >> a >> f;
		for (k = 0; k < f; k++) {
			for (i = 1; i <= a; i++) {
				for (j = 0; j < i; j++) {
					cout << i;
				}
				cout << endl;
			}
			for (i = i - 2; i > 0; i--) {
				for (j = 0; j < i; j++) {
					cout << i;
				}
				cout << endl;
			}
			if(!T && k==f-1) continue;
			else cout << endl;
		}
		//cout<<endl;
	}
	return 0;
}
