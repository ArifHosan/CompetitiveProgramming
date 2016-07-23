#include<iostream>
using namespace std;

int main() {
	int L, V,lvl=0,tl;
	while (cin >> L) {
		while (L--) {
			cin >> V;
			if (V < 10){
				tl = 1;
				if (tl>lvl) lvl = tl;
			}
			else if (V < 20){
				tl = 2;
				if (tl>lvl) lvl = tl;
			}
			else if (V >=20){
				tl = 3;
				if (tl>lvl) lvl = tl;
			}
		}
		cout << lvl << endl; lvl = 0;
	}
	return 0;
}