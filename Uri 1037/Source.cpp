#include<iostream>
using namespace std;

int main() {
	float N;
	cin >> N;
	if (N < 0 || N>100) cout << "Fora de intervalo\n";
	else if (N >= 0 && N <= 25) cout << "Intervalo [0,25]\n";
	else if (N > 25 && N <= 50) cout << "Intervalo (25,50]\n";
	else if (N > 50 && N <= 75) cout << "Intervalo (50,75]\n";
	else if (N > 75 && N <= 100) cout << "Intervalo (75,100]\n";
	return 0;
}