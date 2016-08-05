#include<iostream>
using namespace std;

int main() {
	int t, n,res;
	cin >> t;
	while (t--) {
		cin >> n;
		res = ((n * 567 / 9) + 7492) * 235 / 47 - 498;
		res = res / 10; n = res % 10;
		if (n<0) cout << -n << endl;
		else cout << n<<endl;
	}
	return 0;
}