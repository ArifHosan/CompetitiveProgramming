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
    int i,j,x,N,M,T,k;
    SFI(T);
    while(T--) {
        vector<int>V;
        multiset<int>MS;
        SFII(N,M);
        FOR(i,0,N) {
            SFI(x);
            V.push_back(x);
        }
        j=0;
        //MS.insert(V[0]); V.erase(V.begin());
        multiset<int>::iterator it=MS.begin();
        FOR(i,0,M) {
            SFI(x);
            while(MS.size()<x) {
                MS.insert(V[0]);
                if(V[0]<*it) {it--;
                    //cout<<V[0]<<' '<<*it<<' ';}
                }
                V.erase(V.begin());
            }
            //NL;
            //multiset<int>::iterator it=MS.begin();
            //FOR(k,0,j-1) it++;
            //advance(it,j-1);
            it++;
            if(j==0) it=MS.begin();
            PFIL(*it);
            j++;
        }
        if(T) NL;
    }
	return 0;
}
