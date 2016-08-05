#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int T, a, b, c, no=0,f;
	cin >> T;
	while (T--) {
		cin >> a >> b >> c;
		if (a > b && a > c) {
			if (b > c) f = b;
			else if (c > b) f = c;
		}
		if (b > c && b > a) {
			if (a > c) f = a;
			else if (c > a) f = c;
		}
		if (c > a && c> b) {
			if (a > b) f = a;
			else if (b > a) f = b;
		}
		printf("Case %d: %d\n", ++no, f);
	}
	return 0;
}