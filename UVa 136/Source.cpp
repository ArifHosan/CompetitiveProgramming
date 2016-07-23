#include<iostream>
#include<math.h>
using namespace std;
#define S 100000

int main() {
	int prime[S],i,j,c=1,f;
	int tst = 0;
	for (i = 0; i < S; i++) prime[i] = 1;
	for (j = 3; j < S;j++) {
		for (i = 2; i <= sqrt(j); i++) {
			if (j%i == 0) {
				prime[j] = 0;
				break;
			}
		}
	}
	for (i = 2; c < 1500; i++) {
		if (!(i % 2) || !(i % 3) || !(i % 5)) {
			f = 1;
			for (j = 7; j < i; j++) {
				if (prime[j] && i%j==0) {
					f = 0;
					break;
				}
			}
			if (f) c++;
			if (c = 100) {
				i;
			}
		}
	}
	cout << i << endl;
	return 0;
}