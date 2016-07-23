#include<iostream>
#include<string>
#include<cstring>
#include<math.h>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	string in, tmp, out,vwl_s="aeiou", vwl_c="AEIOU";
	char x;
	int j;
	//freopen("in.txt", "r", stdin);
	while (getline(cin, in)) {
		bool f = 0;
		int w = 0;
		int i = 0;
		while (1) {
			f = 0;
			if ((in[i]>=65 && in[i]<=90)|| (in[i]>=97 &&in[i]<=122)) {
				tmp.push_back(in[i]);
				w = 1;
			}
			else {
				if (w) {
					for (j = 0; j < 5; j++) {
						if (tmp[0] == vwl_s[j] || tmp[0] == vwl_c[j]) f = 1;
					}
					if (!f) {
						//x = tmp[0];
						reverse(tmp.begin(), tmp.end());
						reverse(tmp.begin(), tmp.end() - 1);
						//tmp.push_back(x);
					}
					tmp.push_back('a');
					tmp.push_back('y');
					out += tmp;
					tmp.clear();
					w = 0;
					//if (in[i] != '\0') out.push_back(' ');
				}
				out.push_back(in[i]);
			}
			if (in[i] == '\0') break;
			i++;
		}
		cout << out << endl;
		out.clear();
	}
	return 0;
}
