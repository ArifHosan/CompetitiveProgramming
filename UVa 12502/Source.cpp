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
	int T, x, y, z, t_time,am;
	double av_time,A_time,B_time,F_time;

	cin >> T;
	while (T--) {
		cin >> x >> y >> z;
		t_time = x + y;
		av_time = (double)t_time / 3.0;
		A_time = x - av_time;
		B_time = y - av_time;
		if (A_time <= 0) am = 0;
		else {
			F_time = A_time + B_time;
			am = floor(z*(A_time / F_time));
		}
		cout << am << endl;
	}
	return 0;
}
