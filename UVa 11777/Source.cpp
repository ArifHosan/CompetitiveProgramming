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
	//ios::sync_with_stdio(false);
	int T, csn = 1, num[7], i, min, min_i;
	double avg, sum;
	char g;
	scanf("%d", &T);
	while (T--) {
		avg = 0; sum = 0;
		for (i = 0; i < 7; i++) scanf("%d", &num[i]);
		if (num[4] > num[5]) {
			min = num[5];
			min_i = 5;
		}
		else {
			min = num[4];
			min_i = 4;
		}
		if (num[6] < min) {
			min = num[6];
			min_i = 6;
		}
		for (i = 4; i < 7; i++) {
			if (i != min_i) avg += num[i];
		}
		avg /= 2.0;
		for (i = 0; i < 4; i++) {
			sum += num[i];
		}
		sum += avg;
		if (sum >= 90) g = 'A';
		else if (sum >= 80) g = 'B';
		else if (sum >= 70) g = 'C';
		else if (sum >= 60) g = 'D';
		else g = 'F';
		printf("Case %d: %c\n", csn++, g);
	}
	return 0;
}
