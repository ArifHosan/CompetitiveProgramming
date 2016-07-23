#include<iostream>
using namespace std;

int main() {
	float N1, N2, N3, N4, a, b, c, d, avg,N,avg2;
	cin >> N1 >> N2 >> N3 >> N4;
	a = N1 / 10.0*2.0;
	b = N2 / 10.0*3.0;
	c = N3 / 10.0 * 4;
	d = N4 / 10.0 * 1;
	avg = a + b + c + d;
	cout.precision(1);
	cout << "Media: " <<fixed<< avg << '\n';
	if (avg >= 7.0) cout << "Aluno aprovado.\n";
	else if (avg<5.0) cout << "Aluno reprovado.\n";
	else {
		cout << "Aluno em exame.\n";
		cin >> N;
		cout << "Nota do exame: " << N << '\n';
		avg2 = (avg + N) / 2.0;
		if (avg2 >= 5.0) cout << "Aluno aprovado.\n";
		else cout << "Aluno reprovado.\n";
		cout.precision(1);
		cout << "Media final: " << fixed<<avg2 << '\n';
	}
	return 0;
}