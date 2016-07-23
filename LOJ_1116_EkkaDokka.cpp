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

int main() {
    int i,j,T;
    long long W,two=2;
    sfi(T);
    while(T--) {
        scanf("%lld", &W);
        CP();
        int f=1;
        while(W%2==0) {
            W/=two;
            f*=2;
        }
        if(f==1) pf1("Impossible\n");
        else {
            printf("%lld %d\n",W,f);
        }
    }

	return 0;
}
