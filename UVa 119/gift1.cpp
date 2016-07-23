/*
ID: ArifHosan
PROG: gift1
LANG: C++
*/

#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main() {
	char name[10][13],nme[13];
	int money[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int N,i,j,k,sp,perHead, mny, prsn;
	ifstream fin("gift1.in");
	ofstream fout("gift1.out");
	
	while (fin >> N) {
		int money[10] = { 0,0,0,0,0,0,0,0,0,0 };
		for (i = 0; i < N; i++) {
			fin >> name[i];
		}
		while (N--) {
			sp = 0;
			fin >> nme >> mny >> prsn;
			for (j = 0; j < i; j++) {
				if (strcmp(nme, name[j]) == 0) {
					sp = j;
					break;
				}
			}
			if (prsn) {
				money[sp] += mny;
				perHead = mny / prsn;
				money[sp] -= perHead*prsn;
				money[sp] -= mny;
				for (k = 0; k < prsn; k++) {
					fin >> nme;
					for (j = 0; j < i; j++) {
						if (strcmp(nme, name[j]) == 0) {
							sp = j;
							break;
						}
					}
					money[sp] += perHead;
				}
			}
		}
		//fout << endl;
		for (j = 0; j < i; j++) {
			fout << name[j] << " " << money[j] << endl;
		}
	}
	return 0;
}