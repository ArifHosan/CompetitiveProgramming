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
    int N;
    while(SFI(N)==1 && N) {
        vector<int>C,G;
        map<int,int>M;
        int i,j,x;
        FOR(i,0,N) {
            SFI(x);
            C.push_back(x);
            M[x]++;
        }
        printf("Game %d:\n",caseno++);
        while(1) {
            FOR(i,0,N) {
                SFI(x);
                G.push_back(x);
            }
            if(count(G.begin(),G.end(),0)==N) break;
            int sg=0,wg=0;
            map<int,int>Mx=M;
            //for(auto it:Mx) cout<<it.first<<' '<<it.second<<endl;
            FOR(i,0,N) {
                if(C[i]==G[i]) {
                    sg++;
                    Mx[C[i]]--;
                    G[i]=-1;
                }
            }
            //for(auto it:Mx) cout<<it.first<<' '<<it.second<<endl;
            FOR(i,0,N) {
                if(Mx[G[i]]>0)
                    wg++;
                    Mx[G[i]]--;
            }
            G.clear();
            printf("    (%d,%d)\n",sg,wg);
        }
    }
	return 0;
}
