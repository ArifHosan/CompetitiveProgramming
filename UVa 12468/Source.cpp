#include<iostream>
using namespace std;

int main() {
	int a, b, sum;
	while (1) {
		cin >> a >> b;
		if (a == -1 && b == -1) break;
		if (a > b) sum = a-b;
		else sum = b-a;
		if (sum > 50) sum = 100 - sum;
		cout << sum << endl;
	}
	return 0;
}