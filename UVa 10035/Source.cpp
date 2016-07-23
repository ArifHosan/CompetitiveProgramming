#include<iostream>
#include<string>
#include<cstring>
#include<math.h>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	long long a, b;
	int carry, tmp,tmp_c;
	while (cin >> a >> b && (a||b)) {
		carry = 0; tmp = 0; tmp_c = 0;
		while (a || b) {
			tmp = 0; 
			tmp += a % 10;
			tmp += b % 10;
			a /= 10; b /= 10;
			tmp += tmp_c;
			tmp_c = 0;
			if (tmp > 9) {
				tmp_c++;
				carry++;
			}
		}
		if (!carry) cout << "No carry operation.\n";
		else if (carry == 1) cout << carry << " carry operation.\n";
		else cout << carry <<" carry operations.\n";
	}
	return 0;
}
