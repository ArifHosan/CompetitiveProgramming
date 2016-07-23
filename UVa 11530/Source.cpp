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
	int T,i,csn=1, sum,tmp;
	int key[] = { 1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4 };
	char text[101];
	cin >> T;
	while (T--) {
		sum = 0; cin.ignore();
		fgets(text, 101, stdin);
		for (i = 0; text[i] != '\0'; i++) {
			if (text[i] == '\n') continue;
			if (text[i] == ' ') sum++;
			else {
				tmp = (int)text[i] - 97;
				sum += key[tmp];
			}
		}
		cout << "Case #" << csn++ << ": " << sum << endl;
	}
	return 0;
}
