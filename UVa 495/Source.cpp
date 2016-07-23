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
	int N, i,fib_i=1,j;
	string fib[5002];
	fib[0].push_back('0'); fib[1].push_back('1');
	while (cin >> N) {
		int carry, tmp;
		if (N <= fib_i) {
			cout << fib[N] << endl;
		}
		else {
			for (i = fib_i+1; i <= N; i++) {
				reverse(fib[i - 1].begin(), fib[i - 1].end());
				reverse(fib[i - 2].begin(), fib[i - 2].end());
				carry = 0;
				for (j = 0;; j++) {
					tmp = 0;
					if (fib[i - 1].size() >= j && fib[i - 1][j] != '\0') tmp += fib[i - 1][j] - 48;
					if (fib[i-2].size()>=j && fib[i - 2][j] != '\0') tmp += fib[i - 2][j] - 48;
					tmp += carry;
					carry = 0;
					if (tmp) {
						while (tmp > 9) {
							tmp -= 10;
							carry++;
						}
						fib[i].push_back(tmp + 48);
					}
					if ((fib[i - 1].size() < j) && (fib[i - 2].size() < j)) break;
					//if (fib[i - 1][j] == '\0' && fib[i - 2][j] == '\0') break;
				}
				//if(carry) fib[i].push_back(carry+48);
				reverse(fib[i - 1].begin(), fib[i - 1].end());
				reverse(fib[i - 2].begin(), fib[i - 2].end());
				reverse(fib[i].begin(), fib[i].end());
			}
			fib_i = N;
			cout << fib[N] << endl;
		}
	}
	return 0;
}
