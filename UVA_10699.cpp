#include<iostream>
#include<cstring>
#include<string>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno=1;
#define CP() printf("Case %d: ",caseno++)
#define R() freopen("in.txt","r",stdin)
#define W() freopen("out.txt","w",stdout)
#define sfi(_i) scanf("%d",&_i)
#define sfc(_c) scanf("%c",&_c)
#define pf1(_i) cout<<_i
#define pfl() cout<<endl
#define pfs() printf(" ")
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REV(i,a,b) for(i=(a);i>=(b);i--)
using namespace std;

bool P[SIZE];
void primeSieve() {
	for(int i=0;i<=SIZE;i++) P[i]=1;
	for(int i=2;i<=SIZE;i++ ) {
        if(P[i]==1) {
            for(int j=2*i;j<=SIZE;j+=i) P[j]=0;
        }
    }
}

int primeFactor(int N) {
    if(P[N]==1) return 1;
    int i=2;
    map<int,int>M;
    while(N>1) {
        if(P[i]==1 && N%i==0) {
            M[i]++;
            N/=i;
        }
        else i++;
    }
    return M.size();
}

int main() {
    //R(); W();
    primeSieve();
    int i,j,N;
    while(sfi(N)==1 && N>0) {
        int c=primeFactor(N);
        printf("%d : %d\n",N,c);
    }

	return 0;
}
