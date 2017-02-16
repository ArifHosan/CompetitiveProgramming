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

int main() {
    //RW;
    string s,ls="",t;
    bool f=1;
    int i;
    while(getline(cin,s) && f) {
        FOR(i,0,s.size()) {
            if(isalpha(s.at(i)) || s.at(i)=='-') t.push_back(s.at(i));
            else {
                //cout<<t<<endl;
                if(t=="E-N-D") {f=0; break;}
                if(ls.size()<t.size()) ls=t;
                t.clear();
            }
        }
        if(f &&ls.size()<t.size()) ls=t;
        t.clear();
    }
    FOR(i,0,ls.size())
        isupper(ls.at(i))?cout<<(char)tolower(ls.at(i)):cout<<ls.at(i);
    NL;
	return 0;
}
