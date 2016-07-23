#include<iostream>
using namespace std;

int main() {
	int N,hh,mm,ss;
	cin >> N;
	mm = N / 60;
	ss = N%60;
	hh = mm / 60;
	mm = mm % 60;
	cout << hh << ":" << mm << ":" << ss << '\n';
	return 0;
}