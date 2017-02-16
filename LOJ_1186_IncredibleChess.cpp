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

int main() {
    int T,i,N,x;
    SFI(T);
    while(T--) {
        SFI(N);
        int res=0;
        vector<int>W;
        FOR(i,0,N) {
            SFI(x);
            W.push_back(x);
        }
        FOR(i,0,N) {
            SFI(x);
            int d=x-W[i]-1;
            res=res^d;
            //cout<<d<< ' '<<res<<endl;
        }
        CP();
        if(res==0) printf("black wins\n");
        else printf("white wins\n");
    }
	return 0;
}
