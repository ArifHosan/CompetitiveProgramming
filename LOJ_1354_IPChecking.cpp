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
    string d,b;
    int T,i,j;
    sfi(T);
    cin.ignore();
    while(T--) {
        cin>>d>>b;
        int B[4]={0,0,0,0};
        int bi=0;
        FOR(i,0,b.size()) {
            if(b[i]=='.') bi++;
            else {
                B[bi]<<=1;
                int x= int(b[i]-48);
                B[bi] |= x;
            }
        }
        int D[4]={0,0,0,0},di=0;
        FOR(i,0,d.size()) {
            if(d[i]=='.') di++;
            else {
                D[di]*=10;
                D[di]+= int(d[i]-48);
            }
        }
        bool m=1;
        FOR(i,0,4) {
            //cout<<D[i]<<' '<<B[i]<<endl;
            if(D[i]!=B[i]) m=0;
        }
        CP();
        if(!m) pf1("No\n");
        else pf1("Yes\n");
    }



	return 0;
}
