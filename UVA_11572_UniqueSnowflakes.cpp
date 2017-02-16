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

int main() {
    //RW;
    int T,N,x,i;
    SFI(T);
    while(T--) {
        SFI(N);
        vector<int>V;
        map<int,int>M;
        int j=0,mx=0;
        FOR(i,0,N) {
            SFI(x);
            if(M.count(x)>0) {
                if(mx<(i-j)) mx=i-j;
                while(V[j]!=x) {
                    M[V[j]]--;
                    if(M[V[j]]==0) M.erase(V[j]);
                    j++;
                }
                j++;
            }
            V.push_back(x);
            M[x]=1;
        }
        if(i-j>mx)mx=i-j;
        PFIL(mx);
    }
	return 0;
}
