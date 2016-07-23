#include<iostream>
#include<string>
#include<cstring>
#include<math.h>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#define endl '\n'
using namespace std;

int main() {
	//ios::sync_with_stdio(false);
	int T, time,hour;
	char in[8];
	freopen("in.txt", "r", stdin);
	scanf("%d", &T);
	while(T--) {
		hour = 0;
		scanf("%s", in);
		time = (in[3] - 48) * 10 + (in[4] - 48);
		time = 60 - time;
		if (time >= 60) {
			hour += 1;
			time -= 60;
		}
		in[4] = (time % 10) + 48;
		time /= 10;
		in[3] = (time % 10) + 48;
		time = (in[0] - 48) * 10 + (in[1] - 48);
		if (time == 11) time = 12;
		else if (time == 12) time = 11;
		else time = 11 - time;
		time += hour;
		in[1] = (time % 10) + 48;
		time /= 10;
		in[0] = (time % 10) + 48;
		
		printf("%s\n", in);
	}
	return 0;
}
