#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main() {
	char txt[10];
	int kase = 0;
	while (1) {
		cin >> txt;
		if (!(strcmp(txt, "*"))) break;
		if (!(strcmp(txt, "Hajj"))) printf("Case %d: Hajj-e-Akbar\n", ++kase);
		if (!(strcmp(txt, "Umrah"))) printf("Case %d: Hajj-e-Asghar\n", ++kase);
	}
	return 0;
}
