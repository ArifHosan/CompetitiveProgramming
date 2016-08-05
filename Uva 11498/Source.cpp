#include<iostream>
using namespace std;

int main() {
	int K,N,M,X,Y;
	while (1) {
		cin >> K;
		if (K == 0) return 0;;
		cin >> N >> M;
		while (K--) {
			cin >> X >> Y;
			if (X == N || Y == M) cout << "divisa" << endl;
			else if (X < N) {
				if (Y>M) cout << "NO" << endl;
				else if (Y < M) cout << "SO" << endl;
			}
			else if (X > N) {
				if (Y>M) cout << "NE" << endl;
				else if (Y < M) cout << "SE" << endl;
			}
		}
	}
	return 0;
}