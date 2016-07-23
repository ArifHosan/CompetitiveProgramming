#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#include<locale>
#define endl '\n'
using namespace std;

int main() {
	//ios::sync_with_stdio(false);
	int i,j;
	char a[1000], b[1000];
	while (1) {
		cin.getline(a,1000);
		if (strcmp(a,"DONE")==0)break;
		for (i = 0,j=0; a[i] != '\0'; i++) {
			if (isalpha(a[i])) b[j++] = tolower(a[i]);
		}
		b[j] = '\0';
		strcpy(a, b);
		reverse(b, &b[j]);
		if (strcmp(a, b) == 0) printf("You won't be eaten!\n");
		else printf("Uh oh..\n");
	}
	return 0;
}
