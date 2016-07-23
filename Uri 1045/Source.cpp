#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main() {
	double A, B, C;
	cin >> A >> B >> C;
	if (A < B) swap(A, B);
	if (A < C) swap(A, C);
	if (B > C) swap(B, C);
	if (A >= (B + C)) {
		cout << "NAO FORMA TRIANGULO\n";
		return 0;
	}
	if (A*A == (B*B + C*C)) cout << "TRIANGULO RETANGULO\n";
	else if (A*A > (B*B + C*C)) cout << "TRIANGULO OBTUSANGULO\n";
	else if (A*A < (B*B + C*C)) cout << "TRIANGULO ACUTANGULO\n";
	if (A == B && A == C) cout << "TRIANGULO EQUILATERO\n";
	else if (A == B || A == C|| B==C) cout << "TRIANGULO ISOSCELES\n";
	return 0;
}