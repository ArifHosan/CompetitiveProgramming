/**
*
*			Arif Hosan
*American International University Bangladesh
*		hosan.arif0@gmail.com
*
**/
#include<bits/stdc++.h>
#define PI 2*acos(0.0)
#define SIZE 1000000
#define endl '\n'
int caseno=1;
#define SFII(_i,_ii) scanf("d",&_i,&_ii)
#define CP() printf("Case %d: ",caseno++)
#define R() freopen("in.txt","r",stdin)
#define W() freopen("out.txt","w",stdout)
#define RW R(); W()
#define SFI(_i) scanf("%d",&_i)
#define SFD(_i) scanf("%lf",&_i)
#define SFC(_c) scanf("%c",&_c)
#define PFIL(_i) printf("%d\n",_i)
#define PFI(_i) printf("%d",_i)
#define NL printf("\n")
#define SPC printf(" ")
#define ALL(_c) _c.begin(),_c.end()
#define ITE(_a,_b) map<_a,_b>::iterator
#define MEM(_c,_v) memset(_c,_v,sizeof(_c))
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REV(i,a,b) for(i=(a);i>=(b);i--)
using namespace std;

bool isAnnagram(string a,string b) {
    if(a.size()==b.size()) {
        int i;
        FOR(i,0,a.size()) a[i]=tolower(a[i]);
        FOR(i,0,b.size()) b[i]=tolower(b[i]);
        sort(ALL(a));
        sort(ALL(b));
        return a==b;
    }
    return false;
}

int main() {
    //RW;
    map<string,int>MS;
    int i,j;
    string s;
    bool f=0;
    map<string,int>::iterator it;
    while(cin>>s && s!="#") {
        f=0;
        for(it=MS.begin();it!=MS.end();it++) {
            if(isAnnagram(it->first,s)) {
                MS[it->first]++;
                f=1;
                //cout<<it->first<<' '<<s<<endl;
                break;
            }
        }
        MS[s]=0;
        if(f) MS[s]++;
    }
    for(it=MS.begin();it!=MS.end();it++) {
        if(it->second==0)
            cout<<it->first<<endl;
    }
	return 0;
}
