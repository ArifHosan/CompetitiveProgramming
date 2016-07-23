#include<iostream>
using namespace std;

int main() {
	int n,y,m;
	cin >> n;
	y = n / 365;
	n = n % 365;
	m = n / 30;
	n = n % 30;
	cout << y << " ano(s)\n";
	cout << m << " mes(es)\n";
	cout << n << " dia(s)\n";
	return 0;
}