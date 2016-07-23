#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int code1, number1, code2, number2;
	float price1, price2, temp;
	cin >> code1 >> number1 >> price1;
	cin >> code2 >> number2 >> price2;
	temp = (number1*price1) + (number2*price2);
	printf("VALOR A PAGAR: R$ %.2f\n", temp);
	return 0;
}