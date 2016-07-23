#include<iostream>
#include<cstring>
#include<string>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno=1;
#define CP() printf("Case %d: ",caseno++)
#define R() freopen("in.txt","r",stdin)
#define W() freopen("out.txt","w",stdout)
#define sfi(_i) scanf("%d",&_i)
#define sfc(_c) scanf("%c",&_c)
#define pf1(_i) cout<<_i
#define pfl() cout<<endl
#define pfs() printf(" ")
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REV(i,a,b) for(i=(a);i>=(b);i--)
using namespace std;

struct details{
    string n;
    int v;
}D[110];

bool myCmp(details A, details B) {
    return A.v<B.v;
}

int main() {
    int i,j,k,l,n,w,h,T;
    sfi(T);
    while(T--) {
        sfi(n);
        FOR(i,0,n) {
            cin.ignore();
            string s;
            cin>>s;
            sfi(l); sfi(w); sfi(h);
            k=l*w*h;
            D[i].n=s;
            D[i].v=k;
        }
        CP();
        sort(D,D+n,myCmp);
        if(D[0].v==D[n-1].v) pf1("no thief\n");
        else {
            cout<<D[n-1].n;
            pf1(" took chocolate from ");
            cout<<D[0].n;
            pfl();
        }
    }

	return 0;
}
