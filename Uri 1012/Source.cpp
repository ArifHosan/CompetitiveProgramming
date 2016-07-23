#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	double A, B, C;
	cin >> A >> B >> C;
	printf("TRIANGULO: %.3lf\n", 0.5*A*C);
	printf("CIRCULO: %.3lf\n", 3.14159*C*C);
	printf("TRAPEZIO: %.3lf\n", (A+B)/2.0*C);
	printf("QUADRADO: %.3lf\n", B*B);
	printf("RETANGULO: %.3lf\n", A*B);
	return 0;
}