#include<iostream>
using namespace std;

int main() {
	int high, low;
	int csno = 1, T, N, i,w,pos;
	cin >> T;
	while (T--) {
		high = 0, low = 0;
		cin >> N;
		for (i = 0; i < N; i++) {
			cin >> w;
			if (i == 0) {
				pos = w;
				continue;
			}
			if (w > pos) high++;
			if (w < pos) low++;
			pos = w;
		}
		cout << "Case " << csno++ << ": " << high << " " << low << endl;
	}
	return 0;
}