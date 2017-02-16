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

inline int length(int n) {
    int c=0;
    while(n){
        n/=10;
        c++;
    }
    return c;
}

inline int pwr(int n, int p) {
    int i=1,res=1;
    FOR(i,1,p+1) {
        res*=n;
    }
    return res;
}

int main() {
    //RW;
    int T;
    SFI(T);
    while(T--) {
        long long D,N,res;
        int i,j,l;
        scanf("%lld",&N);
        D=N; res=0;
        l=length(N);
        while(D){
            int x=D%10;
            res+=pwr(x,l);
            D/=10;
        }
        if(res==N) PFSL("Armstrong");
        else PFSL("Not Armstrong");
    }
	return 0;
}
