#include<iostream>
using namespace std;

int main() {
	int N, f1=0, f2=1, res=0,c=0;
	cin >> N;
	while (c != N) {
		cout << f1;
		c++;
		if (c != N) cout << " ";
		res = f1 + f2; f1 = f2; f2 = res;
	}
	cout << endl;
	return 0;
}