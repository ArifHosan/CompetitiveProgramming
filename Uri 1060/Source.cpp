#include<iostream>
using namespace std;

int main() {
	float N,i,c=0;
	for (i = 0; i < 6; i++) {
		cin >> N;
		(N>0) ? c++ : c;
	}
	cout << c << " valores positivos" << endl;
	return 0;
}