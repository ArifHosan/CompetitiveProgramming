#include<iostream>
using namespace std;

int Mile(int);
int Juice(int);

int main() {
	int T, N, sec,juice=0,mile=0,csn=1;
	cin >> T;
	while (T--) {
		juice = 0, mile = 0;
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> sec;
			mile += Mile(sec);
			juice += Juice(sec);
		}
		cout << "Case " << csn++ << ": ";
		if (mile < juice) cout << "Mile " << mile << endl;
		if (mile > juice) cout << "Juice " << juice << endl;
		if (mile == juice) cout << "Mile Juice " << mile << endl;
	}
}

int Mile(int n) {
	int c = 0;
	while (1) {
		n = n - 30;
		c++;
		if (n < 0) break;
	}
	return c*10;
}

int Juice(int n) {
	int c = 0;
	while (1) {
		n = n - 60;
		c++;
		if (n < 0) break;
	}
	return c*15;
}