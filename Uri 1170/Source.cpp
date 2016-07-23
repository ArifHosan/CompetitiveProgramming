#include<iostream>
using namespace std;

int main() {
	int N;
	float X;
	cin >> N;
	while(N--) {
		int day = 0;
		cin >> X;
		while (X > 1.0) {
			day++; X = X / 2.0;
		}
		cout << day << " dias" << endl;
	}
	return 0;
}