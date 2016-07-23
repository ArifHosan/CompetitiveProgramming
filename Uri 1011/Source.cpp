#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int R;
	double t;
	cin >> R;
	t = 4.0 / 3.0*3.14159*R*R*R;
	printf("VOLUME = %.3lf\n", t);
	return 0;
}