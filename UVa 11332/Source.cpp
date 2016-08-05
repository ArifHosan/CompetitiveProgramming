#include<iostream>
using namespace std;

int main() {
	int n,value,res=0;
	while (1) {
		res = 0;
		cin >> n;
		if (n == 0) break;
		//res = n;
		while(1) {
			while (n) {
				res = res + (n % 10);
				n = n / 10;
			}
			if (res >= 10) {
				n = res;
				res = 0;
			}
			else break;
		}
		
		cout << res<<endl;
	}
	return 0;
}