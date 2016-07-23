#include<iostream>
using namespace std;

int main() {
	int N;
	float a, b, c,avg;
	cout.precision(1); cout << fixed;
	cin >> N;
	while (N--) {
		cin >> a >> b >> c;
		avg = (a*2.0 / 10) + (b * 3 / 10) + (c * 5 / 10);
		cout << avg << endl;
	}
	return 0;
}