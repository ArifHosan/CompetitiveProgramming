#include<iostream>
#include<math.h>
using namespace std;

int main() {
	float A, B, C;
	float t,R1,R2;
	cin >> A >> B >> C;
	t = B*B - 4 *A*C;
	if (2 * A == 0 || t < 0) cout << "Impossivel calcular\n";
	else {
		R1 = (-B + sqrt(t)) / (2 * A);
		R2 = (-B - sqrt(t)) / (2 * A);
		cout.precision(5);
		cout << fixed << "R1 = " << R1 << '\n';
		cout << fixed << "R2 = " << R2 << '\n';
	}
	return 0;
}