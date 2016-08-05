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
vector<int> A[6];

void Rec(string S) {
    if(S.size()==9) {
        int x=S[S.size()-1]-48;
        if(count(A[x].begin(),A[x].end(),S[0]-48)>0) {
            cout<<S;
            NL;
        }
        return;
    }
    int i;
    int x=S[S.size()-1]-48;
    FOR(i,0,A[x].size()) {
        Rec(S+(char)(A[x][i]+48));
    }
}


int main() {
    A[0].push_back(0);
    A[1].push_back(2);
    A[1].push_back(3);
    A[1].push_back(5);
    A[2].push_back(1);
    A[2].push_back(3);
    A[2].push_back(5);
    A[3].push_back(1);
    A[3].push_back(2);
    A[3].push_back(4);
    A[3].push_back(5);
    A[4].push_back(3);
    A[4].push_back(5);
    A[5].push_back(1);
    A[5].push_back(2);
    A[5].push_back(3);
    A[5].push_back(4);

    string S="1";
    Rec(S);

	return 0;
}
