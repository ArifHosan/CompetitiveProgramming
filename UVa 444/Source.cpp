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
	char txt[250], res_c[250];
	int i=0,tmp,j,d1,d2;
	while (fgets(txt,249,stdin)) {
		j = 0; i = 0;
		if (txt[0] >= 48 && txt[0] < 58) {
			reverse(txt, txt + strlen(txt));
			i++;
			while (txt[i] != '\0'  || txt[i]!='\n') {
				tmp = 0;
				if (txt[i] == '1') {
					tmp += (int)(txt[i++] - 48);
				}
				if (txt[i] == '\0') break;
				tmp *= 10;
				tmp += (int)(txt[i++] - 48);
				if (txt[i] == '\0') break;
				tmp *= 10;
				tmp += (int)(txt[i++] - 48);
				res_c[j++] = (char)tmp;
			}
			res_c[j] = '\0';
		}
		else {
			while (txt[i] != '\0') {
				tmp = (int)txt[i++];
				if (tmp >= 100) {
					d2 = tmp % 10;
					tmp /= 10;
					d1 = tmp % 10;
					tmp /= 10;
					res_c[j++] = tmp+48;
					res_c[j++] = d1+48;
					res_c[j++] = d2+48;
				}
				else {
					d1 = tmp % 10;
					tmp /= 10;
					res_c[j++] = tmp+48;
					res_c[j++] = d1+48;
				}
			}
			res_c[j-2] = '\0';
			reverse(res_c, res_c + strlen(res_c));
		}
		cout << res_c << endl;
	}
	return 0;
}
