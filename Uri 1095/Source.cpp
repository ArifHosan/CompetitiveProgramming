#include<iostream>
using namespace std;

int main() {
	float I = 0, J = 1;
	int n;
	while (I<2.2) {
		for (n = 0; n < 3;n++) {
			cout << "I=" << I << " J=" << J << endl;
			J++; 
		}
		I += 0.2; J = 1; J += I;
	}
	return 0;
}