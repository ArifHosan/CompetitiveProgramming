#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	int n, p, i, r[1000], j, csn = 1;
	char req[1000][81], companies[1000][81], tmp[81];
	double d[1000];

	while (cin >> n >> p && n != 0) {
		for (i = 0; i < n; i++) {
			scanf("%[^\n", req[i]);
		}
		for (i = 0; i < p; i++) {
			scanf("%[^\n", companies[i]);
			cin >> d[i] >> r[i];
			for (j = 0; j < r[i]; j++) {
				scanf("%[^\n", tmp);
			}
		}
		cout << "RFP #" << csn++ << endl;
		int c = 0, max=0;
		for (i = 0; i < p; i++) {
			if (r[i] > max) {
				max = r[i];
				j = i;
				c = 1;
			}
			if (r[i] == max) c++;
		}
		if (c == 1) {
			cout << companies[j] << endl;
		}
		else if (c > 1) {
			c = 0;
			double min_d = 0;
			for (i = 0; i < p; i++) {
				if (max == r[i]) {
					if (!c) {
						min_d = d[i];
						j = i;
						c++;
						continue;
					}
					if(d[i]<min_d) {
						min_d = d[i];
						j = i;
						c = 1;
					}
					if (d[i] == min_d) c++;
				}	
			}
			if (c == 1) {
				cout << companies[j] << endl;
			}
			if (c > 1) {
				for (i = 0; i < p; i++) {
					if (max == r[i] && min_d == d[i]) {
						cout << companies[i] << endl;
						break;
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}