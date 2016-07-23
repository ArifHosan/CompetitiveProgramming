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
	int T,i,c,F;
	string s;
	scanf("%d", &T);
	cin.ignore();
	while (T--) {
		getline(cin, s);
		i = 0; c = 0; F = -1;
		while (1) {
			if (s[i] == '\0') break;
			if (s[i] == 'M' && s[i + 1] == 'M') c++;
			else if (s[i] == 'F' && s[i + 1] == 'F') c--;
			if (s[i] == 'M' && s[i + 1] == 'F') F++;
			else if (s[i] == 'F' && s[i + 1] == 'M') F++;
			//i += 2;
			//if (s[i] == '\0') break;

			i++;
		}
		if (!c && F>0) printf("LOOP\n");
		else printf("NO LOOP\n");
		s.clear();
	}
	return 0;
}
