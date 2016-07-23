#include<iostream>
#include<string>
#include<cstring>
#include<math.h>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#define endl '\n'
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	string txt[101];
	char res[103];
	for (int x = 0; x < 103; x++) res[x] = '0';
	int i = 0, j, max = 0, carry = 0, k, tmp = 0,r_i;
	while (cin >> txt[i] && (txt[i].size() != 1 || txt[i][0] != '0')) {
		reverse(txt[i].begin(), txt[i].end());
		i++;
	}
	for (j = 0; j < i; j++) {
		if (txt[j].size()>max) max = txt[j].size();
	}
	r_i = 0;
	for (j = 0; j < max;j++) {
		for (k = 0; k < i; k++) {
			if (j<txt[k].size() && txt[k][j] != '\0') tmp += (int)txt[k][j] - 48;
		}
		tmp += carry;
		carry = 0;
		while (tmp > 9) {
			tmp -= 10;
			carry++;
		}
		res[r_i] =(char) (tmp+48);
		r_i++;
		tmp = 0;
	}
	while (carry ) {
		res[r_i++] =(char)((carry % 10)+48);
		carry /= 10;
	}
	reverse(res, res+r_i);
	res[r_i] = '\0';
	cout << res << endl;
	return 0;
}
