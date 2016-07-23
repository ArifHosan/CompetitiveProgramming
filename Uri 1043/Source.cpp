#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	float A, B, C,peri,area;
	cin >> A >> B >> C;
	cout.precision(1);
	if (((A + B) > C) && ((B + C) > A) && ((A + C) > B)) {
		peri = A + B + C;
		cout << "Perimetro: " << fixed << peri << '\n';
	}
	else  {
		area = (A + B) *0.5*C;
		cout << "Area = " << fixed << area << '\n';
	}
	return 0;
}