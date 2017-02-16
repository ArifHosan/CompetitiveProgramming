/**
*
*			Arif Hosan
*American International University Bangladesh
*		hosan.arif0@gmail.com
*
**/
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno=1;
#define SFII(_i,_ii) scanf("d",&_i,&_ii)
#define CP() printf("Case %d: ",caseno++)
#define R() freopen("in.txt","r",stdin)
#define W() freopen("out.txt","w",stdout)
#define RW R(); W()
#define SFI(_i) scanf("%d",&_i)

#define SFD(_i) scanf("%lf",&_i)
#define SFC(_c) scanf("%c",&_c)
#define PFIL(_i) printf("%d\n",_i)
#define PFI(_i) printf("%d",_i)
#define NL printf("\n")
#define SPC printf(" ")
#define BE(_c) _c.begin(),_c.end()
#define ITE(_a,_b) map<_a,_b>::iterator
#define MEM(_c,_v) memset(_c,_v,sizeof(_c))
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REV(i,a,b) for(i=(a);i>=(b);i--)
using namespace std;

/*bool P[SIZE];
void primeSieve() {
	for(int i=0;i<=SIZE;i++) P[i]=1;
	for(int i=2;i<=SIZE;i++ ) {
        if(P[i]==1) {
            for(int j=2*i;j<=SIZE;j+=i) P[j]=0;
        }
    }
}
*/
int N,W;
int wei[1001],val[1001];
int dp[1000][50];
int rec(int i,int w) {
    if(i>=N) return 0;
    if(dp[i][w]!=-1) return dp[i][w];

    int p1=0,p2=0;
    if(w-wei[i]>=0) p1=val[i]+rec(i+1,w-wei[i]);
    p2=rec(i+1,w);
    return dp[i][w]=max(p1,p2);
}

int main() {
    //RW;
    int T,i,j,x,y,G;
    SFI(T);
    while(T--) {
        MEM(dp,-1);
        SFI(N);
        FOR(i,0,N) {
            SFI(val[i]); SFI(wei[i]);
        }
        SFI(G);
        long long ans=0;
        FOR(i,0,G) {
            SFI(x);
            ans+=rec(0,x);
        }
        cout<<ans<<endl;
    }

	return 0;
}
