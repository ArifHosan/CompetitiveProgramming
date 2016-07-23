#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char A[20], B[20], C[20];
	cin >> A >> B >> C;
	if (!strcmp(A, "vertebrado")) {
		if (!strcmp(B, "ave")) {
			if (!strcmp(C, "carnivoro")) cout << "aguia" << endl;
			if (!strcmp(C, "onivoro")) cout << "pomba" << endl;
		}
		if (!strcmp(B, "mamifero")) {
			if (!strcmp(C, "onivoro")) cout << "homem" << endl;
			if (!strcmp(C, "herbivoro")) cout << "vaca" << endl;
		}
	}
	if (!strcmp(A, "invertebrado")) {
		if (!strcmp(B, "inseto")) {
			if (!strcmp(C, "hematofago")) cout << "pulga" << endl;
			if (!strcmp(C, "herbivoro")) cout << "lagarta" << endl;
		}
		if (!strcmp(B, "anelideo")) {
			if (!strcmp(C, "hematofago")) cout << "sanguessuga" << endl;
			if (!strcmp(C, "onivoro")) cout << "minhoca" << endl;
		}
	}
	return 0;
}