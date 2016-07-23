#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
	char M[1000];
	int T,len,lh;
	scanf("%d", &T);
	cin.ignore();
	while (T--) {
		gets(M);  len = strlen(M);
		for (int i = 0; i <len ; i++) {
			if (M[i] >= 65 && M[i] <= 90) M[i] += 3;
			else if (M[i] >= 97 && M[i] <= 122) M[i] += 3;
		}
        reverse(M,&M[len]);
        lh = floor((float)len / 2.0);
		for (int j = lh; j < len; j++) {
			M[j]--;
		}
		printf("%s\n", M);
	}
	return 0;
}
