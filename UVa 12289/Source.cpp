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
	int T,i,c1,c2;
	char word[6],one[]="one", two[]="two";
	cin >> T;
	while (T--) {
		c1 = 0; c2 = 0;
		cin >> word;
		if (strlen(word) == 5) cout << "3" << endl;
		else {
			for (i = 0; i < 3; i++) {
				if (word[i] == one[i]) c1++;
				if (word[i] == two[i]) c2++;
			}
			if (c1 >= 2) cout << "1" << endl;
			else if(c2>=2) cout << "2" << endl;
		}
	}
	return 0;
}
