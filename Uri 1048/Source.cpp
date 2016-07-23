#include<iostream>
using namespace std;

int main() {
	float salary, final,earned;
	int increase;
	cin >> salary;
	if (salary >= 0 && salary <= 400) increase = 15;
	else if (salary >= 400.01 && salary <= 800) increase = 12;
	else if (salary >= 800.01 && salary <= 1200) increase = 10;
	else if (salary >= 1200.01 && salary <= 2000) increase = 7;
	else if (salary > 2000) increase = 4;
	earned = salary*(float)increase / 100.0;
	final = salary + earned;
	cout.precision(2); cout << fixed;
	cout << "Novo salario: " << final << endl;
	cout << "Reajuste ganho: " << earned << endl;
	cout << "Em percentual: " << increase << " %" << endl;
	return 0;
}