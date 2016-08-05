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
#define SFII(_i,_ii) scanf("%d%d",&_i,&_ii)
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
vector<int>V,F;
int mx=0,N;

int rec(int i, int sum,vector<int>t) {
    if(sum>=mx && sum<=N) {
        mx=sum;
        F=t;
    }
    if(sum>N || i==V.size()) return 0;
    rec(i+1,sum,t);
    t.push_back(V[i]);
    rec(i+1,sum+V[i],t);
    t.pop_back();
}

int main() {
    //RW;
    int i,j,M,x;
    while(SFI(N)==1) {
        SFI(M);
        V.clear();
        F.clear();
        mx=0;
        FOR(i,0,M) {
            SFI(x);
            V.push_back(x);
        }
        vector<int>t;
        rec(0,0,t);
        FOR(i,0,F.size()) cout<<F[i]<<' ';
        printf("sum:%d\n",mx);
    }

	return 0;
}
