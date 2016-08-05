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
vector<int>V;
bool rec(int i,int sum) {
    if(i==V.size() && sum==23) return 1;
    else return 0;
    //if(sum==23 || sum==-23) return 1;

    return rec(i+1,sum) || rec(i+1,sum+V[i]) || rec(i+1,sum-V[i]) ||  rec(i+1,sum*V[i]);
}

int main() {
    int x,i;
    while(1) {
        V.clear();
        FOR(i,0,5) {
            SFI(x);
            V.push_back(x);
        }
        if(count(BE(V),0)==V.size()) break;
        if(rec(0,0)) cout<<"Possible\n";
        else cout<<"Impossible\n";
    }
	return 0;
}
