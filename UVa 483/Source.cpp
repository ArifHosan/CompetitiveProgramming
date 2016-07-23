#include<iostream>
#include<string>
#include<cstring>
#include<math.h>
#include<cstdio>
#include<vector>
#include<stack>
#include<algorithm>
#include<queue>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	char in[10000];
	string tmp,out;
	int i,j,t;
	//freopen("in.txt", "r", stdin);
	while (fgets(in, 10000, stdin)) {
		j = 0; out.clear();
		for (i = 0; ; i++) {
			if (in[i] != ' ' && in[i]!='\n' && in[i]!='\0') {
				tmp.push_back(in[i]);
			}
			else {
				reverse(tmp.begin(), tmp.end());
				j = 0;
				out += tmp;
				if(in[i] != '\n' && in[i] != '\0') out.push_back(' ');
				tmp.clear();
			}
			if (in[i] == '\0') break;
		}
		cout << out << endl;
	}
	return 0;
}
