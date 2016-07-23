#include<iostream>
using namespace std;

int main() {
	int N,i=1;
	cin >> N;
	while (N--) {
		cout << i << " " << i*i << " " << i*i*i << endl;
		i++;
	}
	return 0;
}