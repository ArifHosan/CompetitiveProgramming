#include<iostream>
#include<math.h>
using namespace std;

int main() {
	float x,r;
	int n,i;
	cin >> x;
	n = (int)x;
	cout << "NOTAS:\n";
	cout << n / 100 << " nota(s) de R$ 100.00\n";
	n = n % 100;
	cout << n / 50 << " nota(s) de R$ 50.00\n";
	n = n % 50;
	cout << n / 20 << " nota(s) de R$ 20.00\n";
	n = n % 20;
	cout << n / 10 << " nota(s) de R$ 10.00\n";
	n = n % 10;
	cout << n / 5 << " nota(s) de R$ 5.00\n";
	n = n % 5;
	cout << n / 2 << " nota(s) de R$ 2.00\n";
	n = n % 2;
	r = x - ((int)x - n); cout.precision(3);
	i = (int)ceil((r * 100));
	cout << "MOEDAS:\n"; 
	cout << i / 100 << " moeda(s) de R$ 1.00\n";
	i = i % 100;
	cout << i / 50 << " moeda(s) de R$ 0.50\n";
	i = i % 50;
	cout << i / 25 << " moeda(s) de R$ 0.25\n";
	i = i % 25;
	cout << i / 10 << " moeda(s) de R$ 0.10\n";
	i = i % 10;
	cout << i / 5 << " moeda(s) de R$ 0.05\n";
	i = i % 5;
	cout << i << " moeda(s) de R$ 0.01\n";
	return 0;
}