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
    int T;
    long long r1,c1,r2,c2;
    while(T--) {
        scanf("%lld%lld%lld%lld", &r1,&c1,&r2,&c2);
        long long x;
        if(r2<c2) {
            x=r2-r1;
        }
        else x=c2-c1;

        cout<<x<<endl;
        r2-=x;
        c2-=x;
        cout<<r2<<endl<<c2<<endl;
        if(r1==r2 && c1==c2) pf1("1\n");
        else if(r1==r2) {
            if(abs(c1-c2)==2) pf1("2\n");
            else pf1("impossible\n");
        }
        else if(c1==c2) {
            if(abs(r1-r2)==2) pf1("2\n");
            else pf1("impossible\n");
        }
    }

	return 0;
}
