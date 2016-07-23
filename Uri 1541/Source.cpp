#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int A, B, C, x, y;
	while (1) {
		cin >> A ;
		if (A == 0) break;
		cin >> B >> C;
		x = A*B * 100 / C;
		y = sqrt(x);
		cout << y << endl;
	}
	return 0;
}