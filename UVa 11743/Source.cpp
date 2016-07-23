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
int undoubled, doubled;
void calculate(char[]);
int main() {
	//ios::sync_with_stdio(false);
	int T,total;
	char a[5], b[5], c[5], d[5];
	scanf("%d", &T);
	while (T--) {
		//scanf("%s %s %s %s", a, b, c, d);
		cin >> a >> b >> c >> d;
		doubled = 0; undoubled = 0;
		calculate(a); 
		calculate(b);
		calculate(c); 
		calculate(d);
		total=doubled + undoubled;
		if (total % 10 == 0) printf("Valid");
		else printf("Invalid");
		cout << endl;
	}
	return 0;
}

void calculate(char x[] ) {
	int sum = 0, sum2 = 0,c=1;
	for (int i = 0; i < 4; i++) {
		if (i % 2 == 1) {
			sum = x[i] - 48;
			undoubled += sum;
		}
		else {
			sum = x[i] - 48;
			sum *= 2;
			if (sum > 9) {
				sum2 = sum % 10;
				sum /= 10;
				sum2 += sum % 10;
				sum = sum2;
			}
			doubled += sum;
		}
	}
}