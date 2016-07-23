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
struct ls{
    int n,co;
}N[1001];

int NOD(int i) {
    int c=2;
    for(int j=2;j<i;j++) {
        if(i%j==0) c++;
    }
    return c;
}

bool myCmp(ls a,ls b) {
    if(a.co!=b.co) return a.co<b.co;
    return a.n>b.n;
}
int main() {
    //R(); W();
    int i,j;
    for(i=0;i<1001;i++) {
        if(i==0) {
            N[0].n=0;
            N[0].co=0;
        }
        else if(i==1) {
            N[1].n=1;
            N[1].co=1;
        }
        else {
                N[i].n=i;
                N[i].co=NOD(i);

        }
    }
    sort(N,N+1001,myCmp);
    int T,x;
    sfi(T);
    for(i=0;i<T;i++) {
        sfi(x);
        CP();
        pf1(N[x].n);
        pfl();
    }
 	return 0;
}
