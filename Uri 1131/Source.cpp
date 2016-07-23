#include<iostream>
using namespace std;

int main() {
	int d=0, i = 0, g = 0, c = 0,x,y,X=0;
	while (1) {
		cin >> x >> y;
		if (x > y) i++;
		else if (y > x) g++;
		else if (x == y) d++;
		c++;
		cout << "novo grenal (1-sim 2-nao)" << endl;
		cin >> X;
		if (X == 2) break;
		if (X == 1) continue;
		}
	cout << c << " grenals" << endl;
	cout << "Inter:" << i << endl;
	cout << "Gremio:" << g<<endl;
	cout << "Empates:" << d << endl;
	if (i > g) cout << "Inter venceu mais" << endl;
	if (g > i) cout << "Gremio venceu mais" << endl;
	if (i == g) cout << "Nao houve vencedor" << endl;
}