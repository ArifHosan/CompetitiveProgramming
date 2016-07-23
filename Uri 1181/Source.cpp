#include<iostream>
using namespace std;

int main() {
	double M[12][12],sum=0;
	int c = 0;
	char T;
	cin >> T;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cin>>M[i][j];
		}
	}
	for (int i = 0; i < 12; i++) {
		for (int j =12-i; j <i; j++) {
			sum += M[j][i]; c++;
		}
	}
	cout.precision(1); cout << fixed;
	if (T == 'S')
		cout << sum << endl;
	if (T == 'M')
		cout << sum / c << endl;
	return 0;
}