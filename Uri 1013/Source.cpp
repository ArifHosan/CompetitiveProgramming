#include<iostream>
using namespace std;

int main() {
	int a, b,c;
	int max1, max;
	cin >> a >> b >> c;
	max1 = (a + b + abs(a - b)) / 2;
	max = (max1 + c + abs(max1 - c)) / 2;
	cout << max << " eh o maior\n";
	return 0;
}