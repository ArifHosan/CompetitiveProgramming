#include<iostream>
using namespace std;

int main() {
	int N, c = 0;
	cin >> N;
	int i = N;
	while (c != 6) {
		if (i % 2 == 1) {
			cout << i << endl;
			c++;
		}
		i++;
	}
	return 0;
}