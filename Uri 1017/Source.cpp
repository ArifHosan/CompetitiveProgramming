#include<iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout.precision(3);
	cout << fixed << a*b / 12.0 << '\n';
	return 0;
}