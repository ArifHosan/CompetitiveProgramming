#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#include<locale>
#define endl '\n'
using namespace std;

int main() {
	//ios::sync_with_stdio(false);
    int T,N, s[1001],i;
    double avg,p;
    scanf("%d", &T);
    while(T--) {
        avg=0; p=0;
        scanf("%d", &N);
        for(i=0;i<N;i++) {
            scanf("%d", &s[i]);
            avg+=s[i];
        }
        avg/=N;
        for(i=0;i<N;i++) {
            if(s[i]>avg) p++;
        }
        p=p/N*100.0;
        printf("%0.3lf%%\n", p);
    }
	return 0;
}

