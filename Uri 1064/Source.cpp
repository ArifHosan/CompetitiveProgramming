#include<iostream>
using namespace std;

int main() {
	float N,sum=0;
	int i,c=0;
	for (i = 0; i < 6; i++) {
		cin >> N;
		if (N>0) {
			c++; sum += N;
		}
	}
	cout.precision(1); cout << fixed;
	cout << c << " valores positivos" << endl;
	cout << sum / c<<endl;
	return 0;
}