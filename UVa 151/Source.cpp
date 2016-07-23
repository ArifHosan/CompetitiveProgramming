#include<iostream>
#include<string>
#include<cstring>
#include<math.h>

#define endl '\n'
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int N, reg[102],i,c,x,cur;
	while (cin >> N && N) {
		for (i = 1; i <= N; i++) reg[i] = 1;
		c = 1; x = 1; cur = 1;
		for (;;) {
			if (c == N - 1 && reg[13] == 1) break;
			else if (reg[13] == 0 ||c==N) {
				c = 0; x =x+ 1; cur = 1;
				if (x == 5);
				for (i = 1; i <= N; i++) reg[i] = 1;
				continue;
			}
			cur += x;
			if (cur<= N) {
				reg[cur] = 0;
				c++;
			}
			else cur -= (N-1);
		}
		cout << x << endl;
	}
	return 0;
}
