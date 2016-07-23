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
	int T,i,l,j,csn=1;
	char in[500],c;
	scanf("%d", &T);
	while (T--) {
		scanf("%s", in);
		i = 0; l = 0; c = 0;
		printf("Case %d: ", csn++);
		while (1) {
			if (in[i] == '\0') {
				for (j = 0; j < l; j++) printf("%c", c);
				l = 0; c = in[i];
				break;
			}
			if (in[i] >= '0' && in[i] <= '9') {
				l *= 10; l += (in[i] - 48);
			}
			else {
				for (j = 0; j < l; j++) printf("%c", c);
				l = 0; c = in[i];
			}
			i++;
		}
		printf("\n");
	}
	return 0;
}
