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
    //RW;
    int N,M;
    while(SFII(N,M)==2) {
        vector<int>V;
        V.push_back(N);
        bool f=1;
        if(N==0 || M<2 || M>N) f=0;
        else {
            while(N!=1) {
            if(N%M!=0) {f=0; break;}
            N/=M;
            V.push_back(N);
            }
        }
        int i;
        if(!f) PFSL("Boring!");
        else {
            PFI(V.at(0));
            FOR(i,1,V.size()) {
                SPC; PFI(V.at(i));
            }
            NL;
        }
    }
	return 0;
}
