#include<iostream>
#include<cstring>
#include<cstdio>
#include<chrono>
using namespace std;

inline int Getvalue(char A[]);

int main() {
	char name1[26], name2[26];
	int value1, value2;
	double ratio;
	while (scanf("%[^\n]", name1)!=EOF) {
		getchar();
		scanf("%[^\n]", name2);
		getchar();
		chrono::high_resolution_clock::time_point  t1 = chrono::high_resolution_clock::now();
		value1 = Getvalue(name1);
		value2 = Getvalue(name2);
		if (value1 >= value2) ratio = (double)value2 / (double)value1*100.0;
		else ratio = (double)value1 / (double)value2*100.0;
		printf("%.2lf %%\n", ratio);
		chrono::high_resolution_clock::time_point t2 = chrono::high_resolution_clock::now();
		chrono::duration<double> time = chrono::duration_cast<chrono::duration<double>>(t2 - t1);
		cout << time.count() << endl;
	}
	return 0;
}

inline int Getvalue(char A[]) {
	int x=0,i;
	for (i = 0; A[i] != '\0'; i++) {
		if (A[i] >= 'A' && A[i] <= 'Z') {
			x = x + ((int)A[i] - 64);
		}
		else if (A[i] >= 'a' && A[i] <= 'z') {
			x = x + ((int)A[i] - 96);
		}
	}
	int tmp=0;
	while (x > 9) {
		tmp = 0;
		while (x) {
			tmp += x % 10;
			x = x / 10;
		}
		x = tmp;
	}
	return x;
}