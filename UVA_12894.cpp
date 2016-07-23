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
    int T,x,y,x1,y1,cx,cy,i,j,r;
    sfi(T);
    while(T--) {
        scanf("%d%d%d%d%d%d%d",&x,&y,&x1,&y1,&cx,&cy,&r);
        cx-=x; cy-=y;
        int ax=x1-x;
        int ay=y1-y;
        ax/=10; ay/=6;
        cout<<ax<<' '<<ay<<' '<<r<<endl;
        if(ax>1  && ax==ay && r==2*ax && cx%9==0 && cy==(y1-y)/2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

	return 0;
}
