#include<iostream>
using namespace std;

int main() {
	int T, a, c=0,r=0,s=0, t=0;
	char x;
	cin >> T;
	while (T--) {
		cin >> a >> x; cin.sync();
		t += a;
		switch (x) {
		case 'C':
			c += a; break;
		case 'R':
			r += a; break;
		case 'S':
			s += a; break;
		}
	}
	cout.precision(2); cout << fixed;
	cout << "Total: " << t << " cobaias" << endl;
	cout << "Total de coelhos: " << c << endl;
	cout << "Total de ratos: " << r << endl;
	cout << "Total de sapos: " << s << endl;
	cout << "Percentual de coelhos: " << c / (float)t * 100.0<<" %" << endl;
	cout << "Percentual de ratos: " << r / (float)t * 100.0 << " %" << endl;
	cout << "Percentual de sapos: " << s / (float)t * 100.0 << " %" << endl;
	return 0;
}