#include<iostream>
using namespace std;

int main() {
	int X;
	float Y;
	cin >> X >> Y;
	cout.precision(3);
	cout <<fixed<< X / Y << " km/l\n";
	return 0;
}