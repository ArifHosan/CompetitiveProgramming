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
#define SFI(_kk) scanf("%d",&_kk)
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

int main() {
    //RW;
    int i,j,x,N,M,T;
    SFI(T);
    while(T--) {
        SFII(N,M);
        vector<int>v1,v2;
        FOR(i,0,N) {
            SFI(x);
            v1.push_back(x);
        }
        FOR(i,0,M) {
            SFI(x);
            v2.push_back(x);
        }
        i=0;
        while(i<v2.size()) {
            vector<int>::iterator pos=find(v1.begin(),v1.end(),v2[i]);
            if(pos!=v1.end()) {
                v1.erase(pos);
                v2.erase(v2.begin()+i);
            }
            else i++;
        }
        PFIL(v1.size()+v2.size());
    }
	return 0;
}
