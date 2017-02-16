/**
*
*			Arif Hosan
*American International University Bangladesh
*
**/
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno=1;
#define CP() printf("Case %d: ",caseno++)
#define R() freopen("in.txt","r",stdin)
#define W() freopen("out.txt","w",stdout)
#define RW R(); W()
#define SFI(_i) scanf("%d",&_i)
#define SFII(_i,_ii) scanf("%d %d",&_i,&_ii)
#define SFD(_i) scanf("%lf",&_i)
#define SFC(_c) scanf("%c",&_c)
#define PFIL(_i) printf("%d\n",_i)
#define PFI(_i) printf("%d",_i)
#define PFSL(_i) printf("%s\n",_i)
#define PFS(_i) printf("%s",_i)
#define NL printf("\n")
#define SPC printf(" ")
#define ALL(_c) _c.begin(),_c.end()
#define ITE(_a,_b) map<_a,_b>::iterator
#define MEM(_c,_v) memset(_c,_v,sizeof(_c))
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REV(i,a,b) for(i=(a);i>=(b);i--)
using namespace std;

int dp[22][202];
vector<int>V;

int rec(int i,int rem) {
    if(rem==0) return 1;
    if(i==V.size()) return 0;
    if(dp[i][rem]!=-1) return dp[i][rem];

    int r1,r2=0;
    r1=rec(i+1,rem);
    if(rem-V.at(i)>=0) r2=rec(i+1,rem-V.at(i));
    return dp[i][rem]=(r1||r2);
}

int main() {
    //RW;
    int T;
    string s;
    SFI(T);
    cin.ignore();
    while(T--) {
        V.clear();
        int i,j,x=0,sum;
        getline(cin,s);
        FOR(i,0,s.size()) {
            if(s.at(i)==' ') {
                V.push_back(x);
                x=0;
            }
            else {
                x*=10;
                x+=(int)(s.at(i)-48);
            }
        }
        V.push_back(x);
        //FOR(i,0,V.size()) cout<<V.at(i)<<' ';
        int tot=accumulate(ALL(V),0);
        if(tot&1) {
            PFSL("NO");
            continue;
        }
        MEM(dp,-1);
        if(rec(0,tot/2)) PFSL("YES");
        else PFSL("NO");
    }
	return 0;
}
