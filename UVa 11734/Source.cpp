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
	int T, csn = 1, f = 0, i, j;
	char in[50], judge[25], out[25];
	scanf("%d", &T);
	cin.ignore();
	while (T--) {
		f = 0; j = 0;
		//cin.ignore();
		bool f1 = true;
		cin.getline(in, 50);
		cin.getline(judge, 25);
		//fgets(in, 25, stdin);
		//fgets(judge, 25, stdin);
		//gets(in);
		//scanf("%s", judge);
		//printf("%s\n%s\n", in,judge);
		if (strcmp(in, judge) == 0) f = 1;
		else {
			for (i = 0; in[i] != '\0'; i++) {
				if (isalpha(in[i])) out[j++] = in[i];
			}
			out[j] = '\0';
			//printf("%s\n",out);
			if (strcmp(judge, out) == 0) f = 2;
		}
		
		printf("Case %d: ", csn++);
		if (f == 0) printf("Wrong Answer\n");
		else if (f == 1) printf("Yes\n");
		else if (f == 2) printf("Output Format Error\n");
	}
}
