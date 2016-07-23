#include<iostream>
using namespace std;

int main() {
	int a, b, c, d,total=1080,x;
	while (1) {
		total = 1080;
		cin >> a >> b >> c >> d;
		if (a == 0 && b==0) break;
		x = 40 - b + a;
		if (x >= 40) x =x-40;
		total += x * 9;
		x = 40 - b + c;
		if (x >= 40) x = x-40;
		total += x * 9;
		x = 40 + c - d;
		if (x >=40) x = x-40;
		total += x * 9;
		cout << total << endl;
	}
	return 0;
}