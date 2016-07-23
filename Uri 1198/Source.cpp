#include<iostream>
using namespace std;

int main() {
	long long int a, b,c;
	while (cin >> a) {
		cin >> b;
		c = a - b;
		if (c < 0) c = -c;
		cout << c << endl;
	}
	return 0;
}