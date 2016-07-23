#include<iostream>
using namespace std;

int main() {
	int T, PA, PB,c=0;
	double G1, G2;
	cin >> T;
	while (T--) {
		c = 0;
		cin >> PA >> PB >> G1 >> G2;
		while (1) {
			if (PA > PB) {
				cout << c <<" anos."<< endl;
				break;
			}
			if (c > 100) {
				cout << "Mais de 1 seculo." << endl;
				break;
			}
			PA += (int)(PA*G1 / 100); PB += (int)(PB*G2 / 100);
			c++;
		}
	}
	return 0;
}