#include<iostream>
#include<string>
#include<cstring>
#include<math.h>

#define endl '\n'
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	char L[21];
	int i,f;
	while (cin >> L) {
		int sum = 0; f = 1;
		for (i = 0; L[i] != '\0'; i++) {
			if (L[i] >= 'a' && L[i] <= 'z') {
				sum+=(int)L[i] - 96;
			}
			else if (L[i] >= 'A' && L[i] <= 'Z') sum+=(int)L[i] - 38;
		}
		if (sum == 2 || sum==1) f = 1;
		else if (sum < 1) f = 0;
		else {
			int rt = sqrt(sum);
			for (i = 2; i <= rt; i++) {
				if (sum%i == 0) {
					f = 0;
					break;
				}
			}
		}
		if (f) cout << "It is a prime word." << endl;
		else cout << "It is not a prime word." << endl;
	}
	return 0;
}
