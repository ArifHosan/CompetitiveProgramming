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
    char in[35];
    long long int res;
    int i,j,tmp;
    while(scanf("%s", in)!=EOF && in[0]!='-') {
        if(in[1]=='x') {
            res=0;
            for(i=strlen(in)-1,j=0;i>1;i--,j++) {
                tmp=1;
                for(int k=0;k<j;k++) tmp*=16;
                if(in[i]<65) tmp*=(int)in[i]-48;
                else tmp*=(int)in[i]-55;
                res+=tmp;
            }
            printf("%lld\n", res);
        }
        else {
            res=atoi(in);
            j=0;
            while(res) {
                tmp=(res%16);
                if(tmp<10) in[j++]=tmp+48;
                else in[j++]=tmp+55;
                res/=16;
            }
            printf("0x");
            for(i=j-1;i>-1;i--) printf("%c", in[i]);
            printf("\n");
       }
    }
	return 0;
}
