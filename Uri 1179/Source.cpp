#include<iostream>
using namespace std;

int main() {
	int par[5], impar[5], N,i,cp=0,ci=0;
	for (i = 0; i < 15; i++) {
		cin >> N;
		if (N % 2 == 0) {
			if (cp == 5) {
				for (int k = 0; k < 5; k++) {
					cout << "par[" << k << "] = " << par[k] << endl;
				}
				cp = 0;
			}
			par[cp++] = N;
		}
		else  {
			if (ci == 5) {
				for (int m = 0; m < 5; m++) {
					cout << "impar[" << m << "] = " << impar[m] << endl;
				}
				ci = 0;
			}
			impar[ci] = N; ci++;
		}
	}
	for(i=0;i<ci;i++) {
		cout << "impar[" << i << "] = " << impar[i] << endl;
	}
	for(i=0;i<cp;i++) {
		cout << "par[" << i << "] = " << par[i] << endl;
	}
	return 0;
}