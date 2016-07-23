#include<iostream>
#include<string>
#include<cstring>
#include<math.h>
#include<cstdio>

#define endl '\n'
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	char key[] = "`1234567890-=QWERTYUIOP[]'\'ASDFGHJKL;'ZXCVBNM,./";
	char c;
	while (1) {
		c=getchar();
		if (c == EOF) break;
		if (c == ' ') cout << c;
		if (c == '\n') cout << endl;
		else {
			for (int i = 0; key[i] != '\0'; i++) {
				if (key[i] == c) {
					c = key[i - 1];
					cout << c;
					break;
				}
			}
		}
	}
	return 0;
}
