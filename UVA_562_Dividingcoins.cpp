/**
*
*			Arif Hosan
*American International University Bangladesh
*
**/
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno=1;
#define CP() printf("Case %d: ",caseno++)
#define R() freopen("in.txt","r",stdin)
#define W() freopen("out.txt","w",stdout)
#define RW R(); W()
#define SFI(_i) scanf("%d",&_i)
#define SFII(_i,_ii) scanf("%d %d",&_i,&_ii)
#define SFD(_i) scanf("%lf",&_i)
#define SFC(_c) scanf("%c",&_c)
#define PFIL(_i) printf("%d\n",_i)
#define PFI(_i) printf("%d",_i)
#define PFSL(_i) printf("%s\n",_i)
#define PFS(_i) printf("%s",_i)
#define NL printf("\n")
#define SPC printf(" ")
#define ALL(_c) _c.begin(),_c.end()
#define ITE(_a,_b) map<_a,_b>::iterator
#define MEM(_c,_v) memset(_c,_v,sizeof(_c))
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REV(i,a,b) for(i=(a);i>=(b);i--)
using namespace std;

vector<int>V;
int dp[105][50005];
int C,M;

int DP(int i,int x) {
    if(i==M) return abs(x-C);
    if(dp[i][x]!=-1) return dp[i][x];
    if(x>=C) return x-C;

    return dp[i][x]=min(DP(i+1,x),DP(i+1,x+V[i]));
}

int main() {
    //RW;
    int i,N,x;
    SFI(N);
    while(N--) {
        int sum=0;
        MEM(dp,-1);
        V.clear();
        SFI(M);
        FOR(i,0,M) {
            SFI(x);
            sum+=x;
            V.push_back(x);
        }
        C=sum/2;
        //cout<<DP(0,0)<<endl;;
        PFIL(sum-2*(C-DP(0,0)));
    }
	return 0;
}
