#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	char name[10];
	double salary, value, temp;
	cin >> name;
	cin >> salary >> value;
	temp = value*15.0 / 100.0;
	printf("TOTAL = R$ %.2lf\n", salary + temp);
	return 0;
}