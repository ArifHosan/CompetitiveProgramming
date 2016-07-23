#include<iostream>
using namespace std;

int main() {
	int X, Y, i = 1,c=1;
	cin >> X >> Y;
	for (i = 1; i <= Y; i++) {
		cout << i;
		if (c == X) {
			cout << endl; c = 1;
			continue;
		}
		cout << " "; c++;
	}
	return 0;
}