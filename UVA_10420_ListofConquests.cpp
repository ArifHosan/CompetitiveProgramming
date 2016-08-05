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
    //RW;
    int T,i,j,g_i=0;
    string S;
    map<string,int>M;
    map<string,int>G;
    SFI(T);
    cin.ignore();
    while(T--) {
        getline(cin,S);
        string T;
        while(S[0]==' ')S.erase(S.begin());
        FOR(i,0,S.size()) {
            if(S[i]==' ') break;
            T.push_back(S[i]);
        }
        //M[T]=0;
        S.erase(S.begin(),S.begin()+i+1);
        //cout<<S<<endl;
        if(G.count(S)==0) {
            G[S]=1;
            M[T]++;
        }
        T.clear();

    }
    for(auto it:M) cout<<it.first<<' '<<it.second<<endl;
	return 0;
}
