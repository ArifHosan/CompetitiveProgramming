#include<iostream>
using namespace std;

int main() {
	int shour, ehour, sminit, eminit, hour=0, minute=0;
	cin >> shour >> sminit >> ehour >> eminit;
	if (eminit == sminit) minute = 0;
	if (ehour == shour) hour = 24;
	else if (ehour < shour) hour = ehour - shour + 24;
	else if (ehour > shour) hour = ehour - shour;
	if (eminit > sminit) minute = eminit - sminit;
	else if (eminit < sminit) {
		minute = eminit - sminit + 60;
		hour--;
	}
	cout << "O JOGO DUROU " << hour << " HORA(S) E " << minute << " MINUTO(S)\n";
	return 0;
}