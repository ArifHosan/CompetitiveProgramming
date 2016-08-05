#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int T,L,W,H,kase=0;
	cin >> T;
	while (T--) {
		cin >> L >> W >> H;
		printf("Case %d: ", ++kase);
		if (L <= 20 && W <= 20 && H <= 20) cout << "good"<<endl;
		else cout << "bad" << endl;
	}
	return 0;
}