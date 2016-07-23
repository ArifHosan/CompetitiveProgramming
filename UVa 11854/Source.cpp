#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	int max,f=0;
	while (1) {
		f = 0;
		cin >> a >> b >> c;
		if (!a && !b && !c) break;
		if (a > b) max = a;
		else max = b;
		if (c > max) max = c;
			if (max==a && a*a == b*b + c*c) f = 1;
			if (max == b && b*b == a*a + c*c) f = 1;
			if (max == c && c*c == b*b + a*a) f = 1;
			if (f) cout << "right" << endl;
			else cout << "wrong" << endl;
	}
	return 0;
}