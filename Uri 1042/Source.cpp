#include<iostream>
using namespace std;

int main() {
	int a, b, c, x, y, z;
	cin >> a >> b >> c;
	if (a > b && a > c) {
		x = a;
		if (b > c) {
			y = b; z = c;
		}
		if (c > b) {
			y = c; z = b;
		}
	}
	else if (b > a && b > c) {
		x = b;
		if (a > c) {
			y = a; z = c;
		}
		if (c > a) {
			y = c; z = a;
		}
	}
	else if (c> a && c > b) {
		x = c;
		if (a > b){
			y = a; z = b;
		}
		if (b > a) {
			y = b; z = a;
		}
	}
	cout << z << '\n' << y << '\n' << x << '\n';
	cout << '\n';
	cout << a << '\n' << b << '\n' << c << '\n';
	return 0;
}