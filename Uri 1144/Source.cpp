#include<iostream>
using namespace std;

int main() {
	long int N,i=1,j,k;
	cin >> N;
	while (N--) {
		j = i*i; k = i*i*i;
		cout << i << " " << j << " " << k << endl;
		cout << i << " " << j+1 << " " << k+1 << endl;
		i++;
	}
	return 0;
}