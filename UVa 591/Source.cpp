#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#define endl '\n'
using namespace std;

int main() {
	//ios::sync_with_stdio(false);
	int c, n, h[51], j, i, sum, csn = 1;
	while (scanf("%d", &n) && n != 0) {
		sum = 0; c = 0;
		for (i = 0; i < n; i++) {
			scanf("%d", &h[i]);
			sum += h[i];
		}
		sum = sum / n;
		for (i = 0; i < n; i++) {
			if (h[i] > sum) {
				for (j = 0; j < n; j++) {
					if (j != i) {
						if (h[i] > sum && h[j] < sum) {
							h[i]--;
							h[j]++;
							j--;
							c++;
						}
					}
				}
			}
		}
		//if (csn != 1) printf("\n");
		printf("Set #%d\nThe minimum number of moves is %d.\n\n",csn++, c);
	}

	return 0;
}
