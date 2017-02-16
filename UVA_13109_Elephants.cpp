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

int main() {
    RW;
    int T;
    SFI(T);
    while(T--) {
        int M,W,i,x;
        vector<int>V;
        SFII(M,W);
        FOR(i,0,M) {
            SFI(x);
            V.push_back(x);
        }
        sort(ALL(V));
        int c=0,sum=0;
        FOR(i,0,M) {
            if(sum+V.at(i)>W) break;
            sum+=V.at(i);
            c++;
        }
        PFIL(c);
    }
	return 0;
}
