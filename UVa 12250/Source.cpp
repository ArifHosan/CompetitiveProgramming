#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main() {
	char st[14];
	int c = 0;
	while (1) {
		cin >> st;
		if (strcmp(st,"#") == 0) return 1;
		if (strcmp(st, "HELLO") == 0) printf("Case %d: ENGLISH\n", ++c);
		else if (strcmp(st, "HOLA") == 0) printf("Case %d: SPANISH\n", ++c);
		else if (strcmp(st, "HALLO") == 0) printf("Case %d: GERMAN\n", ++c);
		else if (strcmp(st, "BONJOUR") == 0) printf("Case %d: FRENCH\n", ++c);
		else if (strcmp(st, "CIAO") == 0) printf("Case %d: ITALIAN\n", ++c);
		else if (strcmp(st, "ZDRAVSTVUJTE") == 0) printf("Case %d: RUSSIAN\n", ++c);
		else printf("Case %d: UNKNOWN\n", ++c);
	}
	return 0;
}