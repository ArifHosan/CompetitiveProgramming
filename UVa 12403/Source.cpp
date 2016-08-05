#include<iostream>
using namespace std;

int main() {
	int T,amount,total=0;
	char txt[10];
	cin >> T;
	while (T--) {
		cin >> txt;
		if (!(strcmp(txt, "donate"))) {
			cin >> amount;
			total += amount;
		}
		if (!(strcmp(txt, "report"))) {
			cout << total<<endl;
		}
	}
	return 0;
}