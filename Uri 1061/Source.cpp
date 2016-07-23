#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char a[20], b[20], c[20], d[20];
	int s_day, s_hour, s_minit, s_sec;
	int e_day, e_hour, e_minit, e_sec;
	int day, hour, minit, sec;
	gets(a); cin.sync();
	gets(b); cin.sync();
	gets(c); cin.sync();
	gets(d); cin.sync();
	s_day = (int)a[4]-48; e_day = (int)c[4]-48;
	s_hour = ((int)b[0] - 48)*10 + ((int)b[1] - 48);
	e_hour = ((int)d[0] - 48)*10 + ((int)d[1] - 48);
	s_minit = ((int)b[5] - 48)*10 + ((int)b[6] - 48);
	e_minit = ((int)d[5] - 48)*10 + ((int)d[6] - 48);
	s_sec = ((int)b[10] - 48)*10 + ((int)b[11] - 48);
	e_sec = ((int)d[10] - 48)*10 + ((int)d[11] - 48);

	day = e_day - s_day; hour = e_hour - s_hour; minit = e_minit - s_minit; sec = e_sec - s_sec;
	if (sec < 0) {
		sec += 60; minit--;
	}
	if (minit < 0) {
		minit += 60; hour--;
	}
	if (hour < 0) {
		hour += 24; day--;
	}
	
	cout << day << " dia(s)" << endl;
	cout << hour << " hora(s)" << endl;
	cout << minit << " minuto(s)" << endl;
	cout << sec << " segundo(s)" << endl;
	return 0;
}