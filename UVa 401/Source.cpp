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
	char key[] = "AEHIJLMOSTUVWXYZ12358";
	char rev_key[] = "A3HILJMO2TUVWXY51SEZ8";
	int i,pal,mir,j,f;
	char in[21],rev_in[21];
	while (cin >> in) {
		pal = 0; mir = 0,f=0;
		strcpy(rev_in, in);
		//strrev(rev_in);
		reverse(rev_in, rev_in + strlen(rev_in));
		if (strcmp(in, rev_in) == 0) pal = 1;
		for (i = 0; rev_in[i] != '\0'; i++) {
			f = 0;
			for (j = 0; key[j] != '\0';j++) {
				if (rev_in[i] == key[j]) {
					rev_in[i] = rev_key[j];
					f = 1;
					break;
				}
			}
			if (!f) break;
		}
		if (f && strcmp(in, rev_in) == 0) mir = 1;
		printf("%s -- is ", in);
		if (pal == 0 && mir == 0) printf("not a palindrome.\n\n");
		else if (pal == 1 && mir == 0) printf("a regular palindrome.\n\n");
		else if (pal == 0 && mir == 1) printf("a mirrored string.\n\n");
		else if (pal && mir) printf("a mirrored palindrome.\n\n");
	}
	return 0;
}
