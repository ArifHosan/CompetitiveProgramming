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
	char in[10000];
	int i,count;
	bool word;
	while (fgets(in, 10000, stdin)) {
		word = 0; count = 0; i = 0;
		while (1) {
			if ((in[i] >= 65 && in[i] <= 90) || (in[i] >= 97 && in[i] <= 122)) {
				word = 1;
			}
			else if(word){
				count++;
				word = false;
			}
			if (in[i] == '\n' || in[i] == '\0') break;
			i++;
		}
		cout << count << endl;

	}
	return 0;
}
