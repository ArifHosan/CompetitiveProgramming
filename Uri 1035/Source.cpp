#include<iostream>
using namespace std;

int main() {
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	((B > C) && (D > A) && ((C + D) > (A + B)) && C > 0 && D > 0 && (A % 2) == 0) ? cout << "Valores aceitos\n" : cout << "Valores nao aceitos\n";
	return 0;
}