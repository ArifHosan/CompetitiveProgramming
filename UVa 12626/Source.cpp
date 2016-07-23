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
	int T,  mar[7],i;
	char in[610];
	scanf("%d", &T);
	while (T--) {
		int num = 10000;
		for (i = 0; i < 7; i++) mar[i] = 0;
		scanf("%s", in);
		for (i = 0; in[i] != '\0'; i++) {
			if (in[i] == 'M') mar[0]++;
			else if (in[i] == 'A') mar[1]++;
			else if (in[i] == 'R') mar[2]++;
			else if (in[i] == 'G') mar[3]++;
			else if (in[i] == 'I') mar[4]++;
			else if (in[i] == 'T') mar[5]++;
		}
		for (i = 0; i < 6; i++) {
			if (i == 1 || i == 2) {
				if(i==1 && (mar[i]/3 < num)) num = mar[i]/3;
				else if (i == 2 && ((mar[i] / 2) < num)) num = mar[i]/2;
			}
			else if (mar[i] < num) num = mar[i];
		}
		printf("%d\n", num);
	}
	return 0;
}
