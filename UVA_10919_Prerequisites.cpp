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
    //R(); W();
    int i,j,k,m,n,r,c;
    while(1) {
        sfi(k);
        if(k==0) break;
        map<string,bool>M;
        sfi(m);
        string s;
        bool flag=true;
        FOR(i,0,k) {
            cin>>s;
            M[s]=true;
        }
        FOR(i,0,m) {
            sfi(c);
            sfi(r);
            int co=0;
            FOR(j,0,c) {
                cin>>s;
                //cout<<s<<' '<<M[s]<<endl;
                co+=M[s];
            }
            if(co<r) flag=false;
        }
        if(flag) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
	return 0;
}
