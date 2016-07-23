#include<iostream>
using namespace std;

int main() {
	int N[20], x,j=0,k=19,tmp;
	for (int i = 0; i < 20; i++) {
		cin >> N[i];
	}
	for (j, k; j < 10; j++, k--) {
		tmp = N[j]; N[j] = N[k]; N[k] = tmp;
	}
	for (int i = 0; i < 20; i++) {
		x = N[i];
		cout << "N[" << i << "] = " << x << endl;
	}
	return 0;
}