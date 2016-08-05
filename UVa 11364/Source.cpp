#include<iostream>
#include<stdio.h>
using namespace std;

void sort(int *p, int n) {
	int i, j, tmp;
	for (j = 0; j < n - 1; j++){
		for (i = 0; i < n - 1; i++) {
			if (p[i]>p[i + 1]) {
				tmp = p[i];
				p[i] = p[i + 1];
				p[i + 1] = tmp;
			}
		}
	}
}

int main() {
	int t, kase = 0,n,i,pos[20],park,distance=0,sum=0;
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0; i < n; i++) {
			cin >> pos[i];
		}
		sort(pos, n);
		for (i = 0; i < n; i++) {
			sum += pos[i];
		}
		park = sum / n;
		distance = park - pos[0];
		for (i = 0; i < n-1; i++) {
			distance += (pos[i + 1] - pos[i]);
		}
		distance += pos[n - 1] - park;
		cout << distance << endl;
	}
	return 0;
}