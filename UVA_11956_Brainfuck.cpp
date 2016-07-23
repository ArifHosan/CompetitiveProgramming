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
#include<iomanip>
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
    int v[101],i,j,T;
    int cp;
    sfi(T);
    while(T--) {
        string s;
        cin>>s;
        cp=0;
        fill(v,v+101,0);
        FOR(i,0,s.size()) {
            if(s[i]=='>') cp=(cp+1)%100;
            if(s[i]=='<') cp=(cp-1)%100;
            if(s[i]=='+') v[cp]=((v[cp]+1)%256);
            if(s[i]=='-') v[cp]=((v[cp]-1)%256);
            if(cp<0) cp+=100;
            if(v[cp]<0) v[cp]+=256;
        }
        CP();
        cout<<std::setfill('0')<<std::setw(2);
        cout<<std::uppercase<<std::hex<<v[0];
        FOR(i,1,100) {
            pfs();
            cout<<std::setfill('0')<<std::setw(2);
            cout<<std::uppercase<<v[i];
        }
        pfl();
    }

	return 0;
}
