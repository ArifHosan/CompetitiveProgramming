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
    //R();W();
    int G,lv=0,hv=11;
    string S;
    while(sfi(G)==1) {
        if(G==0) break;
        cin.ignore();
        getline(cin,S);
    //cout<<S<<endl;
        //cout<<lv<<' '<<hv<<endl;
        if(S=="too high" && hv>G) hv=G;
        else if(S=="too low" && lv<G) lv=G;
        else if(S=="right on"){
            if(G>lv && G<hv) pf1("Stan may be honest\n");
            else pf1("Stan is dishonest\n");
            lv=0; hv=11;
        }
    }
	return 0;
}
