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
	char key[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char res[] = "22233344455566677778889999";
	char text[32];
	while (scanf("%s", text)!=EOF) {
		for (i = 0; text[i] != '\0'; i++) {
			if (isalpha(text[i])) {
				for (j = 0; j < 26; j++) {
					if (text[i] == key[j]) {
						text[i] = res[j];
						break;
					}
				}
			}
		}
		printf("%s\n", text);
	}
	return 0;
}
