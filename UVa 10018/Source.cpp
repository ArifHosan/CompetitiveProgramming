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

long long Reverse(unsigned long long);

int main() {
	ios::sync_with_stdio(false);
	long long a, b;
	int N,c;
	cin >> N;
	while (N--) {
		c = 0;
		cin >> a;
		b = Reverse(a);
		do {
			a = a + b;
			c++;
			b = Reverse(a);
		} while (a != b);
		cout << c << " " << a << endl;
	}
	return 0;
}

long long Reverse(unsigned long long a) {
	long long b=0;
	while (a) {
		b *= 10;
		b += a % 10;
		a /= 10;
	}
	return b;
}
