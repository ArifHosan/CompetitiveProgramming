#include<iostream>
#include<string>
#include<cstring>
#include<math.h>

#define endl '\n'
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int T,csn=1;
	long long int a, b, c;
	cin >> T;
	while (T--) {
		cin >> a >> b >> c;
		cout << "Case " << csn++ << ": ";
		if(a<0 || b<0||c<0) cout << "Invalid" << endl;
		else if (a + b > c && a + c > b && b + c > a) {
			if (a == b && b== c) cout << "Equilateral" << endl;
			else if (a == b || b == c || c == a) cout << "Isosceles" << endl;
			else cout << "Scalene" << endl;
		}
		else cout << "Invalid" << endl;
	}
	return 0;
}
